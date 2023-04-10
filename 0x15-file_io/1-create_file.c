#include "main.h"
#include <fcntl.h>
/**
 * create_file - main entry
 * @filename: isa variable
 * text_content: isa variable
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
		int val = 0;
	int fileReturn;
	int returnValue;

	if (fivalame == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (val = 0; text_content[val];)
			val++;
	}

	fileReturn = open(fivalame, O_CREAT | O_RDWR | O_TRUNC, 0600);
	returnValue = write(fileReturn, text_content, val);

	if (fileReturn == -1 || returnValue == -1)
		return (-1);

	close(fileReturn);

	return (1);
}
