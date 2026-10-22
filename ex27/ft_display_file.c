#include <unistd.h>
#include <fcntl.h>

int	ft_read_file(int fd)
{
	int		bytes_read;
	int		bytes_written;
	int		total_written;
	char	buffer[1024];

	bytes_read = read(fd, buffer, sizeof(buffer));
	while (bytes_read > 0)
	{
		total_written = 0;
		while (total_written < bytes_read)
		{
			bytes_written = write(1, buffer + total_written,
					bytes_read - total_written);
			if (bytes_written <= 0)
				return (-1);
			total_written += bytes_written;
		}
		bytes_read = read(fd, buffer, sizeof(buffer));
	}
	if (bytes_read < 0)
		return (-1);
	return (0);
}

int	main(int ac, char **av)
{
	int	fd;

	if (ac == 1)
	{
		write(2, "File name missing.\n", 19);
		return (0);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (0);
	}
	fd = open(av[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	if (ft_read_file(fd) == -1)
		write(2, "Cannot read file.\n", 18);
	close(fd);
	return (0);
}
