#include "main.h"

/**
  * main - function that copies content of a file to another file 
  * @argc: arg count
  * @argv: arg vector
  * Return: 0 on code execution success
  */
int main(int argc, char *argv[])
{
	int f_desc1, f_desc2, rddata_size;
	char arr_buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	}
	f_desc1 =  open(argv[1], O_RDONLY, 0);
	if (f_desc1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	f_desc2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (f_desc2 == 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	while ((rddata_size = read(f_desc1, arr_buf, 1024)) > 0)
	{
		if (write(f_desc2, arr_buf, rddata_size) != rddata_size)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
		}
	}
	if (rddata_size == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(f_desc1) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_desc1), exit(100);
	}
	if (close(f_desc2) != 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f_desc2), exit(100);
	}
	return (0);
}
