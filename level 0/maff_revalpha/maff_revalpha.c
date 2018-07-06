/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_revalpha.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: miwang <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/05 23:41:49 by miwang            #+#    #+#             */
/*   Updated: 2018/07/05 23:58:16 by miwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	maff_revalpha(void)
{
	char small;
	char big;

	small = 'z';
	big = 'Y';
	while (small >= 'b' && big >= 'A')
	{
		write(1, &small, 1);
		write(1, &big, 1);
		small = small - 2;
		big = big - 2;
	}
}

int		main(void)
{
	maff_revalpha();
	return (0);
}
