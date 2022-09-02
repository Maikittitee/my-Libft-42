/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 13:11:00 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/02 13:17:06 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    *ft_calloc(size_t count, size_t size)
{
    void	*buffer;
 
	buffer = malloc(count * size);
	if (!buffer)
		return(NULL);
	
	ft_bzero(buffer, count * size);
	return (buffer);
}