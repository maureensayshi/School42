/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/12 19:19:35 by miwang            #+#    #+#             */
/*   Updated: 2018/07/12 19:43:16 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>


int		ft_strlen(char *str)
{
	int len;

	len = 0;
	while (str[len])
		len++;
	return (len);
}

char 	*ft_strrev(char *str)		//using ft_swamp concept to change the char
{
	char tmp;
	int	 len;
	int  i;

	len = ft_strlen(str);
	i = 0;
	while ( i < len / 2)
	{
		tmp = str[i];
		str[i] = str[len - 1 - i];   // -1 is to escape '\0'
		str[len - 1 - i] = tmp;
		i++;	
	}
	return (str);
}


int		main()
{
	char str[] = "hello world!";

	printf("original: %s\n", str);
	printf("rev: %s\n", ft_strrev(str));
	return (0);
}
