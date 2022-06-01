#include "main.h"
/**
* create_file - create file with system call
*  @filename: name of file
*  @text_content: content of file
*  Return: 1 or -1
*/

int create_file(const char *filename, char *text_content)
{
int fd, wrsize, i;

if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (text_content != NULL)
{
for (i = 0; text_content[i]; i++)
;
wrsize = write(fd, text_content, i);
if (wrsize == -1)
return (-1);
}
close(fd);
return (1);
}
