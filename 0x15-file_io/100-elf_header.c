#include "main.h"

/**
 * print_error - prints error messages
 *
 * @message: error message
 * Return: nothing
 */

void print_error(const char *message) {
    fprintf(stderr, "Error: %s\n", message);
    exit(98);
}

/**
 * print_elf_header_info - displays the information contained in the ELF header
 *
 * @elf_header:  holds the ELF header information
 * Return: nothing
 */

void print_elf_header_info(Elf64_Ehdr elf_header) {
	int i;
	printf("Magic: ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", elf_header.e_ident[i]);
    }
    printf("\nClass: %s\n", (elf_header.e_ident[EI_CLASS] == ELFCLASS32) ? "ELF32" : "ELF64");
    printf("Data: %s\n", (elf_header.e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little-endian" : "2's complement, big-endian");
    printf("Version: %d\n", elf_header.e_ident[EI_VERSION]);
    printf("OS/ABI: %s\n", (elf_header.e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX System V" : "Other");
    printf("ABI Version: %d\n", elf_header.e_ident[EI_ABIVERSION]);
    printf("Type: %s\n", (elf_header.e_type == ET_EXEC) ? "EXEC (Executable file)" :
                        (elf_header.e_type == ET_DYN) ? "DYN (Shared object file)" :
                        (elf_header.e_type == ET_REL) ? "REL (Relocatable file)" : "Unknown");
    printf("Entry point address: 0x%lx\n", elf_header.e_entry);
}

/**
 * main - entry point of the program
 *
 * @argc: arguments counts
 * @argv: array of arguments
 * Return: nothing
 */

int main(int argc, char *argv[]) {
	const char *filename;
	Elf64_Ehdr elf_header;
	int fd;
	int read_result;

    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    filename = argv[1];
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Failed to open the file.");
    }

    read_result = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (read_result != sizeof(Elf64_Ehdr)) {
        close(fd);
        print_error("Failed to read the ELF header.");
    }

    if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
        elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
        elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
        elf_header.e_ident[EI_MAG3] != ELFMAG3) {
        close(fd);
        print_error("Not an ELF file.");
    }

    print_elf_header_info(elf_header);

    close(fd);
    return 0;
}
