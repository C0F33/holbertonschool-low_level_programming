#include "main.h"
/**
*create_file - creates file even if non existent
*@filename: char string with file name
*@text_content: contents of file
*Return: 1 successfully
*/
int create_file(const char *filename, char *text_content)
{int file_descriptor;

    if (filename == NULL)
        return (-1);


		file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
    if (file_descriptor == -1)
        return (-1);

    if (text_content != NULL)
{
        size_t len = strlen(text_content);
        if (write(file_descriptor, text_content, len) != (ssize_t)len)
{
            close(file_descriptor);
            return (-1);
        }
    }
    close(file_descriptor);

    return (1);
}
