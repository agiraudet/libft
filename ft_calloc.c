/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 10:42:36 by agiraude          #+#    #+#             */
/*   Updated: 2020/11/16 16:58:51 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	if (!nmemb)
		return (0);
	if (!size)
		size = 1;
	ptr = malloc(nmemb * size);
	if (!ptr)
		return (0);
	i = 0;
	while (i < size * nmemb)
		ptr[i++] = 0;
	return ((void*)ptr);
}