#include "main.h"
/**
  * create_file - function to create a file
  * @filename: pointer to char string of filename to be created 
  * @text_content: pointer to a char string for content to write
  * Author: KawiraSharon
  * Return:  1 on exection success -1 for failure
  */
int create_file(const char *filename, char *text_content)
{
	int f_desc, counter, wr_letters;

	if (filename == NULL)
		return (-1);
	f_desc = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (f_desc == -1)
		return (-1);

	if (text_content)
	{
		counter = 0;
		while (text_content[i])
			counter++;
		wr_letters = write(f_desc, text_content, counter);
		if (wr_letters != counter)
			return (-1);
	}

	close(f_desc);
	return (1);
}
