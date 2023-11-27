#include "main.h"
/**
  * append_text_to_file - appends/affix/add text at the end of a file
  * @filename: pointer to filename variable
  * @text_content: string containing null terminator
  * Return: 1 on execution success, -1 if it fails
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int f_desc, wr_val, counter;

	if (filename == NULL)
		return (-1);
	f_desc = open(filename, O_WRONLY | O_EXCL | O_APPEND);
	if (f_desc < 0)
		return (-1);

	if (text_content)
	{
		counter = 0;
		while (text_content[counter])
			counter++;

		wr_val = write(f_desc, text_content, counter);
		if (wr_val < 0)
		{
			close(f_desc);
			return (-1);
		}
	}

	close(f_desc);
	return (1);
}
