#include <elf.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#define SWAP_INPUT(y) ((y << 24) | (((y >> 16) << 24) >> 16) | \
(((y << 16) >> 24) << 16) | (y >> 24))
/**
* valid_file - validifies if file is ELF
* @elf_bytes: the ELF identification bytes
* return: none as declared d_type is void
*/

void valid_file(unsigned char *elf_bytes)
{
	if (*(elf_bytes) == 0x7f && *(elf_bytes + 1) == 'E' &&
	    *(elf_bytes + 2) == 'L' && *(elf_bytes + 3) == 'F')
	{
		printf("ELF Header:\n");
	}
	else
	{
		dprintf(STDERR_FILENO, "Error: this file not is a valid ELF\n");
		exit(98);
	}
}

/**
* hex_magic - function print magic number in hexadecimal no
* @elf_bytes: the ELF id bytes
* return: void d_type meaning no return
*/

void hex_magic(unsigned char *elf_bytes)
{
	int x;
	int byte_range;

	byte_range = EI_NIDENT - 1;
	printf("  Magic:   ");
	for (x = 0; x < byte_range; x++)
		printf("%02x ", *(elf_bytes + x));
	printf("%02x\n", *(elf_bytes + x));
}

/**
* elf_ofclass - print ELF file class
* @elf_bytes: struct for the ELF
* return: none as void d_type is declared
*/

void elf_ofclass(unsigned char *elf_bytes)
{
	printf("  Class:                             ");
	if (elf_bytes[EI_CLASS] == ELFCLASSNONE)
		printf("This class is invalid\n");
	else if (elf_bytes[EI_CLASS] == ELFCLASS32)
		printf("ELF32\n");
	else if (elf_bytes[EI_CLASS] == ELFCLASS64)
		printf("ELF64\n");
	else
		printf("<unknown: %x>\n", elf_bytes[EI_CLASS]);
}

/**
* rep_data - print representation of elf file
* @elf_bytes: struct of the elf
* return: none as void d_type is declared
*/

void rep_data(unsigned char *elf_bytes)
{
	printf("  Data:                              ");
	if (elf_bytes[EI_DATA] == ELFDATANONE)
		printf("Unknown data format\n");
	else if (elf_bytes[EI_DATA] == ELFDATA2LSB)
		printf("2's complement, little endian\n");
	else if (elf_bytes[EI_DATA] == ELFDATA2MSB)
		printf("2's complement, big endian\n");
	else
		printf("<unknown: %x>\n", elf_bytes[EI_DATA]);
}

/**
* file_version - print version of file based on E_VERSION
* @elf_bytes: ELF struct
* return: none as void d_type is declared
*/

void file_version(unsigned char *elf_bytes)
{
	printf("  Version:                           ");
	if (elf_bytes[EI_VERSION] == EV_CURRENT)
		printf("%i (current)\n", EV_CURRENT);
	else
		printf("%i\n", elf_bytes[EI_VERSION]);
}

/**
 * oS_ABI - print the OS/App BIn Interface info
 * @elf_bytes: ELF struct defined
 * return: none as void d_type is declared
 */
void oS_ABI(unsigned char *elf_bytes)
{
	printf("  OS/ABI:                            ");
	if (elf_bytes[EI_OSABI] == ELFOSABI_SYSV)
		printf("UNIX - System V\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_HPUX)
		printf("UNIX - HP-UX\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_NETBSD)
		printf("UNIX - NetBSD\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_LINUX)
		printf("UNIX - Linux\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_SOLARIS)
		printf("UNIX - Solaris\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_IRIX)
		printf("UNIX - IRIX\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_FREEBSD)
		printf("UNIX - FreeBSD\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_TRU64)
		printf("UNIX - TRU64\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_ARM)
		printf("ARM\n");
	else if (elf_bytes[EI_OSABI] == ELFOSABI_STANDALONE)
		printf("Standalone App\n");
	else
		printf("<unknown: %x>\n", elf_bytes[EI_OSABI]);
}

/**
* file_type - print type of ELF file based on e_type value
* @elf_bytes: struct for the ELF
* @elf_typ: variable that rep field of elf header
* return: void so no return
*/

void file_type(unsigned int elf_typ, unsigned char *elf_bytes)
{
	elf_bytes[EI_DATA] == ELFDATA2MSB ? elf_typ = elf_typ >> 8 : elf_typ;

	printf("  Type:                              ");
	if (elf_typ == ET_NONE)
		printf("NONE (Unknown type)\n");
	else if (elf_typ == ET_REL)
		printf("REL (Relocatable file)\n");
	else if (elf_typ == ET_EXEC)
		printf("EXEC (Executable file)\n");
	else if (elf_typ == ET_DYN)
		printf("DYN (Shared object file)\n");
	else if (elf_typ == ET_CORE)
		printf("CORE (Core file)\n");
	else
		printf("<unknown: %x>\n", elf_typ);
}

/**
* entry_pt - print point address of ELF file
* @elf_bytes: struct given for ELF
* @elf_entry: the data to print
* return: none as void d_type is declared
*/

void entry_pt(unsigned int elf_entry, unsigned char *elf_bytes)
{
	if (elf_bytes[EI_DATA] == ELFDATA2MSB)
		elf_entry = SWAP_INPUT(elf_entry);

	printf("  Entry point address:               ");
	printf("%#x\n", (unsigned int)elf_entry);
}

/**
* main - entry point of the program
* @argc: parameter for argument count
* @argv: parameter for argument vector
* section header: contain info abt header files;
* Return: 0 if success of code execution
*/

int main(int argc, char *argv[])
{
	int f_desc, read_file, close_file;
	Elf64_Ehdr *file;

	if (argc > 2 || argc < 2)
		dprintf(STDERR_FILENO, "Usage: error in # of args\n"), exit(98);
	file = malloc(sizeof(Elf64_Ehdr));
	if (file == NULL)
		dprintf(STDERR_FILENO, "error in allocate memory\n"), exit(98);
	f_desc = open(*(argv + 1), O_RDONLY);
	if (f_desc == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	read_file = read(f_desc, file, sizeof(Elf64_Ehdr));
	if (read_file == -1)
	{
		free(file);
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", *(argv + 1));
		exit(98);
	}
	valid_file(file->e_ident);
	hex_magic(file->e_ident);
	elf_ofclass(file->e_ident);
	rep_data(file->e_ident);
	file_version(file->e_ident);
	oS_ABI(file->e_ident);
	printf("  ABI Version:                       ");
	printf("%i\n", file->e_ident[EI_ABIVERSION]);
	file_type(file->e_type, file->e_ident);
	entry_pt(file->e_entry, file->e_ident);
	free(file);
	close_file = close(f_desc);
	if (close_file)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd\n");
		exit(98);
	}
	return (0);
}
