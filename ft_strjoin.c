/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktunchar <ktunchar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 20:00:50 by ktunchar          #+#    #+#             */
/*   Updated: 2022/09/07 21:42:20 by ktunchar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char const *s1, char const *s2)
{
    char    *buffer;


    buffer = ft_calloc(ft_strlen(s1) + ft_strlen(s2) + 1, sizeof(char));
    if (!buffer)
        return (0);
    while ()
}