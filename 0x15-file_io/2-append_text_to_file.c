#include "main.h"
#include <fcntl.h>
/**
 * append_text_to_file - main entry
 * @filename: isa name of the file
 * @text_content: isa the content
 * Return: int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int val = 0;
	int fileOpen = 0;
	int Value = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[val])
			val++;
	}

	fileOpen = open(filename, O_WRONLY | O_APPEND);
	Value = write(fileOpen, text_content, val);

	if (fileOpen == -1 || Value == -1)
		return (-1);

	close(fileOpen);

	return (1);

}
