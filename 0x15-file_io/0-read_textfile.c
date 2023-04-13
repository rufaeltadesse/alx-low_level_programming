#include "main.h"
#include <fcntl.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
/**
 * read_textfile - main entry
 * @filename: file name of the file
 * @letters: the letters
 * Return: sizet
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fileReturn, Value, i;
	char *fileOpener;

	fileReturn = open(filename, O_RDONLY);
	if (fileReturn == -1)
		return (0);
	fileOpener = malloc(sizeof(char) * letters);
	if (fileOpener == NULL)
	{
		return (0);
	}
	i = read(fileReturn, fileOpener, letters);
	Value = (write(STDOUT_FILENO, fileOpener, i));

	free(fileOpener);
	close(fileReturn);
	return Value;
}
