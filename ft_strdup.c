/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nvillalt <nvillalt@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 15:06:48 by nvillalt          #+#    #+#             */
/*   Updated: 2023/10/06 13:20:37 by nvillalt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*s;
	size_t	len;
	size_t	i;

	i = 0;
	len = ft_strlen(src);
	s = (char *)malloc(sizeof(char) * len + 1);
	if (!s)
		return (0);
	while (src[i] != '\0')
	{
		s[i] = (char)src[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
