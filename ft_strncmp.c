/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 17:39:19 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/09 10:20:53 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((*s1 != '\0' || *s2 != '\0' ) && i < n)
	{
		if (*s1 < *s2 || *s1 > *s2)
			return (*s1 - *s2);
		s1++;
		s2++;
		i++;
	}
	return (0);
}
