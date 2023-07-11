#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - print elf header
 * @Elf32_Ehdr: elf header
 * @header: header to get
 */

void print_elf_header(const Elf32_Ehdr *header)
{
	int i;

	printf("Magic: ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %d\n", header->e_ident[EI_CLASS]);
	printf("Data: %d\n", header->e_ident[EI_DATA]);
	printf("Version: %d\n", header->e_ident[EI_VERSION]);
	printf("OS/ABI: %d\n", header->e_ident[EI_OSABI]);
	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %d\n", header->e_type);
	printf("Entry point address: %u\n", header->e_entry);

}

/**
 * main - main program to get elf header
 * @argc: argument 1
 * @argv: argument 2
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int fd = open(argv[1], O_RDONLY);
	Elf32_Ehdr header;

	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

	if (fd == -1)
	{
		fprintf(stderr, "Error opening file: %s\n", argv[1]);
		return (98);
	}

	if (read(fd, &header, sizeof(header)) != sizeof(header))
	{
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return (98);
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 ||
			header.e_ident[EI_MAG1] != ELFMAG1 ||
			header.e_ident[EI_MAG2] != ELFMAG2 ||
			header.e_ident[EI_MAG3] != ELFMAG3)
	{
		fprintf(stderr, "Not an ELF file: %s\n", argv[1]);
		close(fd);
		return (98);
	}

	print_elf_header(&header);

	close(fd);
	return (0);
}
