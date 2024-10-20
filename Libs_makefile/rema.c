#include "rema.h"
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_swap(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void ft_putnbr(int nb)
{
	if(nb < 0)
	{
		ft_putchar('-');
		nb *= -1;
	}
	if(nb == -2147483648)
	{
		ft_putchar('2');
		nb = 147483648;
	}
	if(nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
	{
		ft_putchar(nb + 48);
	}
}

void ft_putstring(char *str)
{
	while(*str)
	{
		write(1, str, 1);
		str++;
	}
}

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while(str[i])
	{
		i++;
	}
	return (i);
}

int ft_atoi(const char *str)
{
	int i = 0;
	int r = 0;
	int sign = 1;

	while((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	if(str[i] == '-')
	{
		sign = -1;
	}
	if(str[i] == '+' || str[i] == '-')
	{
		i++;
	}
	while(str[i] >= '0'&& str[i] <= '9')
	{
		r = r * 10 + (str[i] -'0');
		i++;
	}
	return(sign * r);
}

char *ft_strcpy(char *s1, char *s2)
{
	int i;

	while(s2[i])
	{
		s1[i] = s2[i];
		i++;
	}
	s1[i] = '\0';
	return (s1);
}

int ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	if (s1[i] != '\0')
		return (s1[i]);
	if (s2[i] != '\0')
		return (-s2[i]);
	return (0);
}

char *ft_uppcase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] = str[i] - 32;
			i++;
		}
	}
	return(str);
}

char *ft_lowcase(char *str)
{
	int i = 0;
	while(str[i])
	{
		if(str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32;
			i++;
		}
	}
	return(str);
}

int ft_evenodd(int nb)
{
	if(nb % 2 == 0)
	{
		write(1, "Even\n", 5);
	
	}
	else
	{
		write(1, "Odd\n", 4);
		
	}
}
