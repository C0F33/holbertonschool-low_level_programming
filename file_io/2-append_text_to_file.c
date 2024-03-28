#include "main.h"
/**
*append_text_to_file - prints text to end of textfile
*@filename: name of file
*@text_content: content to be appended
*Return: 1 of succesful.
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor;
	off_t file_size;
	ssize_t bytes_written;

	if (filename == NULL)
{
		return (-1);
	}

	if (text_content == NULL)
{
		return (1);
	}

	file_descriptor = open(filename, O_WRONLY | O_APPEND);
	if (file_descriptor == -1)
{
		return (-1);
	}

	file_size = lseek(file_descriptor, 0, SEEK_END);
	if (file_size == -1)
{
		close(file_descriptor);
		return (-1);
	}

	bytes_written = write(file_descriptor, text_content, strlen(text_content));
	if (bytes_written == -1 || (size_t)bytes_written != strlen(text_content))
{
		close(file_descriptor);
		return (-1);
	}

	close(file_descriptor);

	return (1);
}
