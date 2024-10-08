/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpedro-c <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/16 15:56:32 by jpedro-c          #+#    #+#             */
/*   Updated: 2024/09/16 16:11:49 by jpedro-c         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
	{
		return (0);
	}
	if (nb == 2)
	{
		return (1);
	}
	if (nb % 2 == 0)
	{
		return (0);
	}
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	if (nb < 2)
	{
		nb = 2;
	}
	i = nb;
	while (i < 2 * nb)
	{
		if (ft_is_prime(i))
		{
			return (i);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main()
{
	int number = 24;
	int next_prime = ft_find_next_prime(number);

	printf("The next prime after %i is %i.\n", number, next_prime);
	return (0);
}
*/
