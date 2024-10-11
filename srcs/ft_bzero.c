/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 10:42:35 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/11 10:16:48 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;
	size_t			temp;

	if (n == 0)
		return ;
	str = (unsigned char *)s;
	temp = -1;
	while (++temp < n)
	{
		str[temp] = '\0';
	}
}