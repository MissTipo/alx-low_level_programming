#include "main.h"

/**
 * append_text_to_file - Entry Point
 * @filename: file name
 * @text_content: text content
 * Return: 1
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_desc = 0, length = 0;

	if (!filename)
		return (-1);

	if (text_content)
	{
		while (text_content[length])
		{
			length++;
		}
	}

	file_desc = open(filename, O_WRONLY | O_APPEND);

	if (file_desc < 0)
		return (-1);

	write(file_desc, text_content, length);

	return (1);
}
