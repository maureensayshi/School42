/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 17:24:51 by miwang            #+#    #+#             */
/*   Updated: 2018/07/12 18:02:50 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	big(char c)
{
	if (c >= 'A' && c <= 'M')
		c = 'Z' - (c - 'A');
	else if (c >= 'N' && c <= 'Z')
		c = 'A' + ('Z' - c);
	return (c);
}

char	small(char c)
{
	if (c >= 'a' && c <= 'm')
		c = 'z' - (c - 'a');
	else if (c >= 'n' && c <= 'z')
		c = 'a' + ('z' - c);
	return (c);
}

void	print_alpha(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = small(str[i]);
		else if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = big(str[i]);
		write(1, &str[i], 1);
		i++;	
	}
}

int		main(int ac, char **av)
{
	if (ac == 2)
		print_alpha(av[1]);
	write(1, "\n", 1);
	return (0);
}

