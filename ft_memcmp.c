/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dalbano <dalbano@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:37:11 by dalbano           #+#    #+#             */
/*   Updated: 2024/10/08 16:39:35 by dalbano          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (const unsigned char *)ptr1;
	p2 = (const unsigned char *)ptr2;
	i = -1;
	while (++i < n)
	{
		if (p1[i] != p2[i])
		{
			return (p1[i] - p2[i]);
		}
	}
	return (0);
}

// int main()
// {
//     char str1[] = "Hello, world!";
//     char str2[] = "Hello, wOrld!";

//     // Testing the custom memcmp implementation
//     int result = ft_memcmp(str1, str2, 13);

//     if (result == 0)
//         printf("Memory blocks are identical.\n");
//     else if (result > 0)
//         printf("Memory block 1 is greater than memory block 2.\n");
//     else
//         printf("Memory block 1 is less than memory block 2.\n");

//     return 0;
// }
