/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yourLogin <yourLogin@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 16:11:48 by yourLogin         #+#    #+#             */
/*   Updated: 2022/10/17 14:35:33 by rpinchas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sn;
	unsigned int	i;
	unsigned int	j;

	j = ft_strlen(s);
	if (start >= j)
	{
		sn = (char *)malloc(sizeof(char));
		*sn = '\0';
		return (sn);
	}
	if ((j - start) < len)
		len = j - start;
	sn = (char *)malloc((len + 1) * sizeof(char));
	if (sn == NULL)
		return (NULL);
	i = 0;
	while (s[start + i] && i < len)
	{
		sn[i] = s[start + i];
		i++;
	}
	sn[i] = '\0';
	return (sn);
}
/*
int main()
{
	char	str[] = "Hallo wie geht's | BLUB ** | soll gefunden werden!";
	char	*ptr;
	int	start = 40;
	ptr = ft_substr(str, start, 7);
	printf("%s\n", ptr);
	free(ptr);
}
*/
