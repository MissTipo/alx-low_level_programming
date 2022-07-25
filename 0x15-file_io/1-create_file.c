#include "main.h"
/**
 * create_file - Entry Point
 * @filename: file name
 * @text_content: null terminated string to write
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int file_desc = 0, lenght = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[lenght])
		{
			lenght++;
		}
	}

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (file_desc < 0)
		return (-1);



	write(file_desc, text_content, lenght);

	return (1);
}
