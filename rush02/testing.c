#include <unistd.h>
#define BUF_SIZE 1

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		ft_putchar(str[i++]);
}

//manipulate the string. or add it to a new string
//need to use malloc!
int	ft_read(int fd)
{
	int ret;
	char buf[BUF_SIZE + 1];
	int index = 0;

	while ((ret = read(fd, buf, BUF_SIZE)))
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}	
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1 && argv[0])
	{
		if (ft_read(0) == -1)
			return (1);
	}
	return (0);
}