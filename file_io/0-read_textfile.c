#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: string containing the name of the file to read
 * @letters: number of letters to read and print
 * Return: the actual number of letters read and printed, or 0 if failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
    ssize_t o, w, r;
    char *temp;

    if (filename == NULL)
        return (0);

    temp = malloc(sizeof(char) * letters);
    if (temp == NULL)
        return (0);

    o = open(filename, O_RDONLY);
    if (o == -1)
    {
        free(temp);
        return (0);
    }

    r = read(o, temp, letters);
    if (r == -1)
    {
        free(temp);
        close(o);
        return (0);
    }

    w = write(STDOUT_FILENO, temp, r);
    if (w == -1 || w != r)
    {
        free(temp);
        close(o);
        return (0);
    }

    free(temp);
    close(o);
    return (w);
}
