#include "main.h"
/**
*append_text_to_file - functin that appends text to file
*@filename: name of file
*@text_content: content to append
*Return: 1 or -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
int fd, i, wrsize;

if (filename == NULL)
return (-1);
fd = open(filename, O_APPEND | O_RDWR, 0644);
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
