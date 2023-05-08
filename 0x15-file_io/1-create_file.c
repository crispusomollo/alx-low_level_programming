#include "file.h"

/**
 * create_file - creates a file
 * @filename: the filename
 * @text_content: the data
 * Return: 1 if success, else -1 if fail
 */

int create_file(const char *filename, char *text_content)
{
	int file_desc, _write;

	if (!filename)
		return (-1);

	file_desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (file_desc == -1)
		return (-1);

	if (!text_content)
	{
		close(file_desc);
		return (1);
	}

	_write = write(file_desc, text_content, slen(text_content));
	if (_write == -1 || _write != slen(text_content))
	{
		close(file_desc);
		return (-1);
	}
	close(file_desc);
	return (1);
}
