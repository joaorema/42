#include "rema.h"
#include <stdio.h>
#include <unistd.h>

int main()
{
	int i = 1;
	while( i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
		{
			write(1, "buzzkill", 8);
		}
		else if(i % 3 == 0)
		{
			write(1, "buzz", 4);
		}
		else if(i % 5 == 0)
		{
			write(1, "kill", 4);
		}
		else
		{
			ft_putnbr(i);
		}
		i++;
		write(1, "\n", 1);
	}
}	
