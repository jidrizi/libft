/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jidrizi <jidrizi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/06 16:09:09 by jidrizi           #+#    #+#             */
/*   Updated: 2024/03/08 11:29:51 by jidrizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *c)
{
	int	x;

	x = 0;
	while (c[x] != '\0')
	{
		x++;
	}
	return (x);
}