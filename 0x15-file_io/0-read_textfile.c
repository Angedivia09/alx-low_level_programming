#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints the letters
 * @filename: filename.
 * @letters: numbers of letters printed.
 *
 * return: numbers of letters printed. It fails, return 0.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd; 
	ssize_t nrd, nwr
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);
	
	nrd = read(bd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);
	
	free(buf);
	
	return (nwr);
}	

	          
