/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: cbijman <cbijman@student.codam.nl>           +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/10/03 17:08:16 by cbijman       #+#    #+#                 */
/*   Updated: 2022/10/05 11:45:47 by cbijman       ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	char			*p;
	unsigned long	i;

	p = (char *) b;
	i = 0;
	while (i < len)
	{
		((char *) p)[i] = c;
		i++;
	}
	return (p);
}