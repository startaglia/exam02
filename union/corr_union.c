/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   corr_union.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: startagl <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 12:28:59 by startagl          #+#    #+#             */
/*   Updated: 2023/04/25 12:34:54 by startagl         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <unistd.h>

int		ft_verif_char(char *str, char c, int index)
{
	int		i;

	i = 0;
	while (i < index)
	{
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_union(char *s1, char *s2)
{
	int		i;
	int		len;

	i = 0;
	while (s1[i])
	{
		if (ft_verif_char(s1, s1[i], i) == 1)
			write(1, &s1[i], 1);
		i++;
	}
	len = i;
	i = 0;
	while (s2[i])
	{
		if (ft_verif_char(s2, s2[i], i) == 1)
		{
			if (ft_verif_char(s1, s2[i], len) == 1)
				write(1, &s2[i], 1);
		}
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_union(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}