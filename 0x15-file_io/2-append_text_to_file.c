#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <stdio.h>

/**
 * append_text_to_file - append to the end of file.
 * @filename: file name.
 * @text_content: text content.
 * Return: 1 or -1 if it fail.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, err, len;

	fd = err = len = 0;
	if (!filename)
		return (-1);
	else if (!text_content || !text_content[0])
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd < 0)
		return (-1);
	while (text_content[len])
		len++;
	err = write(fd, text_content, len);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}
