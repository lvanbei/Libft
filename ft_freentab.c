/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_freentab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lvan-bei <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/20 18:48:38 by lvan-bei          #+#    #+#             */
/*   Updated: 2018/10/22 18:18:34 by lvan-bei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freentab(char **str)
{
	if (str != NULL && *str != NULL)
	{
		while (*str)
			free(*str++);
		free(str);
	}
	return (NULL);
}
