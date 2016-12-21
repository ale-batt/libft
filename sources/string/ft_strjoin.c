/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: world42 <world42@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/30 03:00:04 by world42           #+#    #+#             */
/*   Updated: 2016/12/16 19:03:45 by ale-batt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char		*ft_strjoin(const char *s1, const char *s2)*/
/*{*/
	/*char	*dst;*/

	/*if (!s1 || !s2)*/
		/*return (NULL);*/
	/*dst = ft_strnew(ft_strlen(s1) + ft_strlen(s2) + 1);*/
	/*if (!dst)*/
		/*return (NULL);*/
	/*ft_strcpy(dst, s1);*/
	/*ft_strcat(dst, s2);*/
	/*return (dst);*/
/*}*/

char	*ft_strjoin(char const *s1, const char *s2)
{
	char	*str;
	int		size_s1;
	int		size_s2;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	size_s1 = ft_strlen((char *)s1);
	size_s2 = ft_strlen((char *)s2);
	str = (char *)malloc(sizeof(char) * ((size_s1 + size_s2) + 1));
	FILE *fp = fopen("/tmp/logsjoin.txt", "a");
	if (!str)
		return (NULL);
	while (s1[i])
	{
		fprintf(fp, "i= %d |\ts1[i] = %c \n", i, s1[i]);
		str[i] = s1[i];
		i++;
	}
	while (s2[j])
		str[i++] = s2[j++];
	str[i] = '\0';
	fprintf(fp, "----------------------------\n");
	fclose(fp);
	return (str);
}

char		*ft_strfjoin(char *s1, char *s2)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	free(s1);
	free(s2);
	return (str);
}

char		*ft_strfljoin(char *s1, char *s2)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	free(s1);
	return (str);
}

char		*ft_strfrjoin(char *s1, char *s2)
{
	char	*str;

	str = ft_strjoin(s1, s2);
	free(s2);
	return (str);
}
