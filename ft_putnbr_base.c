/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pichew <pichew@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 14:08:58 by pichew            #+#    #+#             */
/*   Updated: 2022/02/23 21:12:30 by pichew           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

/*
1) If empty
2) if size 1
3) if same character twice
4) if + or -*/
int	validate_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	if ((*base == '\0') || (*(base + 1) == '\0'))
		return (0);
	while (base[i])
	{
		if (base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (base[j])
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/*
1) Create an array with a length of the product 
(that was converted via simulation)
2) Divide "nbr" by "base system" until quotient becomes zero
3) Store every single remainder in the array descendingly
4) Print out every item in the array descendingly
 */
void	action(int nbr, int is_negative, char *base, int x)
{
	int	i;
	int	real_base;

	real_base = ft_strlen(base);
	if (x == 1)
	{	
		if (nbr == 0)
			x = 0;
		else
		{
			if (is_negative)
				write(1, &"-", 1);
			i = 0;
			i = (nbr % real_base);
			nbr = (nbr / real_base);
			action(nbr, 0, base, x);
			write(1, &base[i], 1);
		}
	}
}

/*
1) Do things only if user input is NOT invalid
2) Discern negative number*/
void	ft_putnbr_base(int nbr, char *base)
{
	int	is_negative;

	if (validate_base(base))
	{
		is_negative = 0;
		if (nbr < 0)
		{	
			is_negative = 1;
			nbr = nbr * (-1);
			action(nbr, is_negative, base, 1);
			write(1, &"\n", 1);
		}
		else
		{	
			action(nbr, is_negative, base, 1);
			write(1, &"\n", 1);
		}
	}
}
