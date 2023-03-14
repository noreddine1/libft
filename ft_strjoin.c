/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nmaazouz <nmaazouz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 09:57:41 by nmaazouz          #+#    #+#             */
/*   Updated: 2022/10/31 22:05:43 by nmaazouz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char *s2)
{
	int		size1;
	int		size2;
	char	*str;
	int		total;

	if (!s1 || !s2)
		return (NULL);
	size1 = ft_strlen(s1);
	size2 = ft_strlen(s2);
	total = size1 + size2;
	str = (char *) malloc(total * sizeof(char) + 1);
	if (!str)
		return (0);
	ft_memcpy(str, s1, size1);
	ft_memcpy(str + size1, s2, size2);
	ft_bzero(str + total, 1);
	return (str);
}
