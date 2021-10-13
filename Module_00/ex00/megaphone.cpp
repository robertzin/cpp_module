#include <iostream>

int	main(int argc, char* argv[])
{
	int		i = 1;
	int		ch;
	char	c;

	if (argc < 2)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (argc > 1)
	{
		ch = 0;
		while (argv[i][ch])
		{
			c = argv[i][ch];
			std::cout << (char)toupper(c);
			ch++;
		}
		std::cout << ' ';
		argc--;
		i++;
	}
	std::cout << '\n';
	return (0);
}