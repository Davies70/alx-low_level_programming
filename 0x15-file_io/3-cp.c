#include "main.h"

/**
* main - function to copy file content to another
* @ac: argument count
* @av: argument vector
* Return: 0
*/

int main(int ac, char **av)
{
int fd1, fd2, rsize, c1, c2;
char buf[BUFSIZE];

if (ac != 3)
{
exit(97);
dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
}
fd1 = open(av[1], O_RDWR);
if (fd1 == -1)
{
exit(98);
dprintf(STDERR_FILENO, "Can't read from file %s\n", av[1]);
}
fd2 = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
if (fd2 == -1)
{
exit(99);
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
}
while ((rsize = read(fd1, buf, BUFSIZE)) > 0)
if (write(fd2, buf, rsize) != rsize)
{
exit(99);
dprintf(STDERR_FILENO, "Error: can't write to %s\n", av[2]);
}
c1 = close(fd1);
c2 = close(fd2);
if (c1 == -1)
{
exit(100);
dprintf(STDERR_FILENO, "Can't close fd %d\n", fd1);
}
if (c2 == -1)
{
exit(100);
dprintf(STDERR_FILENO, "Can't close fd %d\n", fd2);
}
return (0);
}

