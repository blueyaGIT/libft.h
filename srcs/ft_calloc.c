/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:11:40 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/12 09:55:01 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*calloc(size_t count, size_t size)
{
	size_t			total;
	size_t			temp;
	void			*memory;
	unsigned char	*ptr;

	total = count * size;
	memory = malloc(total);
	if (!memory)
		return (NULL);
	ptr = memory;
	temp = -1;
	while (++temp < total)
	{
		ptr[temp] = 0;
	}
	return (memory);
}
