#include "elf.h"

/**
 * check_elf - Checks for an ELF file.
 * @e_ident: A pointer to an array that contains ELF magic numbers.
 *
 */
void check_elf(unsigned char *e_ident)
{
	int index;

	for (index = 0; index < 4; index++)
	{
	if (e_ident[index] != 127 && e_ident[index] != 'E' &&
	e_ident[index] != 'L' && e_ident[index] != 'F')
	{
	dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
	exit(98);
	}
	}
}

/**
 * print_magic - Prints the magic numbers in an ELF header.
 * @e_ident: A pointer to an array that contains ELF magic numbers.
 *
 */
void print_magic(unsigned char *e_ident)
{
	int index;

	printf("MAGIC: ");

	for (index = 0; index < EI_NIDENT; index++)
	{
	printf("%02x", e_ident[index]);

	if (index == EI_NIDENT - 1)
	printf("\n");
	else
	printf(" ");
	}
}

/**
 * print_class - Prints the class in an ELF header.
 * @e_ident: A pointer to an array that contains the ELF class.
 */
void print_class(unsigned char *e_ident)
{
	printf("CLASS; ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_data - Prints the data of an ELF header.
 * @e_ident: A pointer to an array that contains the ELF data.
 */
void print_data(unsigned char *e_ident)
{
	printf("Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * print_version - Prints the version of an ELF header.
 * @e_ident: A pointer to an array that contains the ELF version.
 */
void print_version(unsigned char *e_ident)
{
	printf("Version:%d",
	       e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

