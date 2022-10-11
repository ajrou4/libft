/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: majrou <majrou@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:02:45 by majrou            #+#    #+#             */
/*   Updated: 2022/10/10 00:10:23 by majrou           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char			*c_dest;
	unsigned char	*c_src;
	int 			i;

	i = 0;
	c_dest = (unsigned char *)dest;
	c_src  = (unsigned char *)src;
	if (c_src < c_dest)
	{
		while (c_src[i])
		{
			ft_memcpy(c_dest, c_src, n);
			i++;
		}
	}
	if (c_src > c_dest)
	{
		while (c_src[i] )
		{
			ft_memcpy(c_dest, c_src, n);
			i--;
		}
	}
	return (c_dest);
}
int	main()
{
	char dest[] = "oldstring";
   const char src[]  = "newstring";

   memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);
}
