#include "libmx.h"

int mx_read_line(char **lineptr, size_t buf_size, char delim, const int fd) {
	if (fd == -1)
		return -2;
	if (buf_size < 1)
		return -1;

	char *buffer = mx_strnew(buf_size), *str = mx_strnew(buf_size);
	while(read(fd, buffer, buf_size))
		mx_strcat(str, buffer);
	if (*buffer == '\0')
		return -1;
	int i = 0;
	while (str[i] != delim)
		i++;
	mx_strncpy(*lineptr, str, i);
	close(fd);
    mx_strdel(&buffer);
    mx_strdel(&str);
	return i;
}
