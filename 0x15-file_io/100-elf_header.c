#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>

/**
 * print_elf_header - print header of elf file
 * @header: get elf header
 */

void print_elf_header(const Elf32_Ehdr *header) {
    int i;

    printf("Magic: ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", (unsigned int)header->e_ident[i]);
    }
    printf("\n");

    printf("Class: %u\n", (unsigned int)header->e_ident[EI_CLASS]);
    printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "Unknown");
    printf("Version: %u\n", (unsigned int)header->e_ident[EI_VERSION]);
    printf("OS/ABI: %u\n", (unsigned int)header->e_ident[EI_OSABI]);
    printf("ABI Version: %u\n", (unsigned int)header->e_ident[EI_ABIVERSION]);

    printf("Type: %u\n", (unsigned int)header->e_type);

    // Handle endianness when printing entry point address
    unsigned int entry_point = (header->e_ident[EI_DATA] == ELFDATA2LSB) ? 
        ((header->e_entry & 0xFF) << 24) | ((header->e_entry & 0xFF00) << 8) |
        ((header->e_entry >> 8) & 0xFF00) | ((header->e_entry >> 24) & 0xFF) :
        header->e_entry;
    printf("Entry point address: 0x%08x\n", entry_point);

    // Add other fields as needed
}

/**
 * main - print header
 * @argc: first argument
 * @argv: argument value
 * Return: 0 whem successful
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}

    FILE *file = fopen(argv[1], "rb");
    if (file == NULL) {
        fprintf(stderr, "Error opening file: %s\n", argv[1]);
        return (98);
    }

    Elf32_Ehdr header;
    if (fread(&header, sizeof(header), 1, file) != 1) {
        fprintf(stderr, "Error reading ELF header\n");
        fclose(file);
        return (98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        fprintf(stderr, "Not an ELF file: %s\n", argv[1]);
        fclose(file);
        return (98);
    }

    print_elf_header(&header);

    fclose(file);
    return (0);
}
