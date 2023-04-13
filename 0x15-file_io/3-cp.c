#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
void fileClose(int fileOpener);
char *fileCopy(char *myFile);

/**
 * fileClose - main entry
 * @fileOpener: isa variable
 * Return: nothing
 */
void fileClose(int fileOpener)
{
	int c;

	c = close(fileOpener);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fileOpener %d\n", fileOpener);
		exit(100);
	}
}

/**
 * fileCopy - main entry
 * @myFile: isa file
 * Return: character
 */
char *fileCopy(char *myFile)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", myFile);
		exit(99);
	}

	return (buffer);
}
/**
 * main - main entry
 * @argc: is a count
 * @argv: isa vec
 * Return: integer
 */
int main(int argc, char *argv[])
{

	char *fileOpener;

	int source, dest, r, w;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fileOpener = fileCopy(argv[2]);
	source = open(argv[1], O_RDONLY);
	r = read(source, fileOpener, 1024);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (source == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(fileOpener);
			exit(98);
		}

		w = write(dest, fileOpener, r);
		if (dest == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(fileOpener);
			exit(99);
		}

		r = read(source, fileOpener, 1024);
		dest = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(fileOpener);
	fileClose(source);
	fileClose(dest);

	return (0);
}

