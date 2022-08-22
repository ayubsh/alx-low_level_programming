#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"

/**
 * create_file - creates file using syscall
 * @filename: the name of the file to be created
 * @text_content: content of the file created
 * Return: returns 1 is success or -1 if it fails
 */
int create_file(const char *filename, char *text_content)
{
	int fb, num_w, i;

	if (filename == NULL)
		return (-1);

	fb = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (fb == -1)
		return (-1);

	if (text_content != NULL)
	{
		i = 0;
		while (text_content[i])
			i++;

		num_w = write(fb, text_content, i);
		if (num_w == -1)
			return (-1);
	}

	close(fb);

	return (1);
}
