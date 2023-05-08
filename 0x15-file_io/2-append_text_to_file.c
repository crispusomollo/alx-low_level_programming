#include "file.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr, _write;

	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
		return (-1);

	if (!text_content)
	{
		close(file_descr);
		return (1);
	}

	_write = write(file_descr, text_content, slen(text_content));
	if (_write == -1 || _write != slen(text_content))
	{
		close(file_descr);
		return (-1);
	}

	close(file_descr);
	return (1);
}

