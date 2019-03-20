#include "fillit.h"

int				ft_void(int i)
{
	if (i <= 0 || i > 26)
	{
		ft_putendl("error");
		exit(0);
	}
	return (1);
}

static int		ft_check_last(char *str)
{
	int		i;
	int		p;
	int		dz;
	int		n;

	i = 0;
	p = 0;
	dz = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '.')
			p++;
		if (str[i] == '#')
			dz++;
		if (str[i] == '\n' && str[4] == '\n' && str[9] == '\n' && str[14] == '\n' && str[19] == '\n' && str[20] == '\0')
			n++;
		i++;
	}
	if (p == 12 && dz == 4 && n == 4)
		return (ft_putstr("mauvais tetri");
	return (ft_putstr("bon tetri");
}

static int		ft_check_final_line(char *str)
{
	int		i;
	int		p;
	int		dz;
	int		n;

	i = 0;
	p = 0;
	dz = 0;
	n = 0;
	while (str[i])
	{
		if (str[i] == '.')
			p++;
		if (str[i] == '#')
			dz++;
		if (str[i] == '\n' && str[4] == '\n' && str[9] == '\n' && str[14] == '\n' && str[19] == '\n' && str[20] == '\n')
			n++;
		i++;
	}
	if (p == 12 && dz == 4 && n == 5)
		return (1);
	return (0);
}
