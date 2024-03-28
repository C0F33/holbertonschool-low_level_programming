#include "main.h"
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <errno.h>

#define BUFFER_SIZE 1024

/**
 * print_error - Prints error message to stderr and exits with specified code
 * @exit_code: The exit code
 * @message: The error message format
 * @arg: The argument to the error message
 **/
void print_error(int exit_code, const char *message, const char *arg)
{
    char *error_message = NULL;

    error_message = (char *)message;
    while (*error_message)
        write(STDERR_FILENO, error_message++, 1);
    if (arg)
    {
        while (*arg)
            write(STDERR_FILENO, arg++, 1);
    }
    exit(exit_code);
}

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The array of arguments
 *
 * Return: Always 0 (Success)
 **/
int main(int argc, char *argv[])
{
    int file_from, file_to;
    ssize_t bytes_read, bytes_written;
    char buffer[BUFFER_SIZE];
    mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

    if (argc != 3)
    {
        print_error(97, "Usage: cp file_from file_to\n", NULL);
    }

    file_from = open(argv[1], O_RDONLY);
    if (file_from == -1)
    {
        print_error(98, "Error: Can't read from file %s\n", argv[1]);
    }

    file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);
    if (file_to == -1)
    {
        print_error(99, "Error: Can't write to %s\n", argv[2]);
    }

    while ((bytes_read = read(file_from, buffer, BUFFER_SIZE)) > 0)
    {
        bytes_written = write(file_to, buffer, bytes_read);
        if (bytes_written != bytes_read)
        {
            print_error(99, "Error: Can't write to %s\n", argv[2]);
        }
    }
    if (bytes_read == -1)
    {
        print_error(98, "Error: Can't read from file %s\n", argv[1]);
    }

    if (close(file_from) == -1)
    {
        char fd_str[12];
        sprintf(fd_str, "%d", file_from);
        print_error(100, "Error: Can't close fd ", fd_str);
    }
    if (close(file_to) == -1)
    {
        char fd_str[12];
        sprintf(fd_str, "%d", file_to);
        print_error(100, "Error: Can't close fd ", fd_str);
    }

    return (0);
}
