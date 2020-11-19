/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agiraude <agiraude@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:40:40 by agiraude          #+#    #+#             */
/*   Updated: 2020/11/19 17:11:33 by agiraude         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_check_occurence(const char *hay, const char *needle, size_t len)
{
	while (*needle)
	{
		if (*hay++ != *needle++ || len-- == 0)
			return (0);
	}
	return (1);
}

char		*ft_strnstr(const char *big, const char *little, size_t len)
{
	if (!(*little))
		return ((char*)big);
	if (!(*big) || !len)
		return (0);
	while (*big && len--)
	{
		if (*big == *little)
			if (ft_check_occurence(big, little, len))
				return ((char*)big);
		big++;
	}
	return (0);
}
