#include "main.h"

/**
 * read_textfile - reads and prints char string to the stdout, POSIXS
 * @filename: file pointer variable
 * @letters: total letters that should be output on code execution success
 *
 * Return: actual letters read/printed on success, 0 if fail, 0 if file null
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f_desc, rd_letters, wr_letters;
	char *ptr_buffer;

	if (filename == NULL)
		return (0);

	f_desc = open(filename, O_RDONLY);
	if (f_desc == -1)
		return (0);
	ptr_buffer = malloc(sizeof(char) * letters + 1);
	if (ptr_buffer == NULL)
		return (0);
	rd_letters = read(f_desc, ptr_buffer, letters);
	if (rd_letters == -1)
		return (0);

	ptr_buffer[letters] = '\0';

	wr_letters = write(STDOUT_FILENO, ptr_buffer, rd_letters);
	if (wr_letters == -1)
		return (0);

	close(f_desc);
	free(ptr_buffer);
	return (wr_letters);
}
