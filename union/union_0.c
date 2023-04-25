/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union_0.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 11:10:52 by startagl          #+#    #+#             */
/*   Updated: 2023/04/25 15:07:23 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_check_char(char *str, char c, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	ft_union(char *str1, char *str2)
{
	int	i;
	int	len;

	i = 0;
	while (str1[i])
	{
		if (!ft_check_char(str1, str1[i], i))
			write(1, &str1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (str2[i])
	{
		if (!ft_check_char(str2, str2[i], i))
		{
			if ((!ft_check_char(str1, str2[i], len)))
				write(1, &str2[i], 1);
		}
		i++;
	}
}

int	main(int ac, char **av)
{
	if (ac == 3)
	{
		ft_union(av[1], av[2]);
		write(1, "\n", 1);
		return (0);
	}
	return (1);
}


