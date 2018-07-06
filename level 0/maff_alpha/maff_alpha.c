/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:26:59 by miwang            #+#    #+#             */
/*   Updated: 2018/07/05 23:37:51 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_alpha(void)
{
	char small;
	char big;
	
	small = 'a';
	big = 'B';	
	while (small <= 'y' && big <= 'Z')
	{
		write(1, &small, 1);
		write(1, &big, 1);
		small = small + 2;
		big = big + 2;
	}	
}


int		main(void)
{
	maff_alpha();
	return (0);
}
