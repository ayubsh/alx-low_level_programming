#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "main.h"


/**
 * append_text_to_file - appends text to file
 * @filename: the name of the file to append a text
 * @text_content: content (text) to be apppend to the file
 * Return: returns 1 on succes otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fb, num_w, i;

	if (filename == NULL)
		return (-1);

	fb = open(filename, O_APPEND | O_RDWR, 0600);
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
