#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * read_textfile - reads textfile using syscalls
 * @filename: the name of the file to be read
 * @letters: number of letters to be read
 * Return: returns the actual number of letter read and written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t num_letter, num_w;
	int fb;
	char *buffer;

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL || filename == NULL)
		return (0);


	fb = open(filename, O_RDONLY, letters);
	if (fb == -1)
		return (0);

	num_letter = read(fb, buffer, letters);
	if (num_letter == -1)
		return (0);

	num_w = write(STDOUT_FILENO, buffer, num_letter);
	if (num_w == -1)
		return (0);

	close(fb);
	free(buffer);


	return (num_letter);
}
