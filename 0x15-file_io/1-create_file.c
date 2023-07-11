#include "main.h"
#include <unistd.h>
#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/**
 * create_file - creates a file.
 * @filename: file name.
 * @text_content: text content.
 * Return: 1 or -1 if it fail.
 */
int create_file(const char *filename, char *text_content)
{
	int err, len, fd;

	err = len = fd = 0;
	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
		if (fd < 0)
			return (-1);
	while (text_content && text_content[len])
		len++;

	err = write(fd, text_content, len);
	if (err < 0)
		return (-1);
	close(fd);
	return (1);
}
