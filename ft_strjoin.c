/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saderdou <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/11 16:48:18 by saderdou          #+#    #+#             */
/*   Updated: 2023/11/29 21:04:43 by saderdou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*res;
	size_t	size;
	size_t	s1len;
	size_t	s2len;

	if (!s1 || !s2)
		return (0);
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	size = s1len + s2len;
	res = (char *)malloc((size + 1) * sizeof(char));
	if (!res)
		return (NULL);
	ft_bzero(res, size + 1);
	ft_strlcat(res, s1, size + 1);
	ft_strlcat(res, s2, size + 1);
	return (res);
}
/*
int main() {
    char *s1 = "Hello, ";
    char *s2 = "World!";
    char *result = ft_strjoin(s1, s2);
    printf("%s", result);
    return 0;
}*/
