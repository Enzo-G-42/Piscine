/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: engiacom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/30 00:26:25 by engiacom          #+#    #+#             */
/*   Updated: 2024/08/05 21:30:55 by engiacom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
// #include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[j])
		j++;
	while (src[i])
	{
		dest[i + j] = src[i];
		i++;
	}
	dest[i + j] = 0;
	return (dest);
}

char	*ft_strcat_all(char *newstr, char **strs, char *sep, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		newstr = ft_strcat(newstr, strs[i]);
		if (i < size - 1)
			newstr = ft_strcat(newstr, sep);
		i++;
	}
	return (newstr);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int			i;
	char		*newstr;
	int			len_all;

	i = 0;
	len_all = 0;
	if (size == 0)
	{
		newstr = malloc(sizeof(char));
		if (newstr == NULL)
			return (NULL);
		return (newstr[0] = '\0', newstr);
	}
	while (i < size)
		len_all += ft_strlen(strs[i++]);
	len_all += ft_strlen(sep) * (size - 1);
	newstr = malloc(((len_all + 1) * sizeof(char)));
	if (newstr == NULL)
		return (NULL);
	newstr[0] = '\0';
	newstr = ft_strcat_all(newstr, strs, sep, size);
	return (newstr);
}

#include <stdio.h>

int	main(void)
{
	char *strs0[] = {};
	char *strs1[] = {"Hello"};
	char *strs3[] = {"Hello", "World", "42"};
	char *sep_empty = "";
	char *sep_one = "-";
	char *sep_many = "---";

	// Test with size 0
	char *result = ft_strjoin(0, strs0, sep_empty);
	printf("Result (size 0, sep empty): %s\n", result);
	free(result);

	// Test with size 1
	result = ft_strjoin(1, strs1, sep_empty);
	printf("Result (size 1, sep empty): %s\n", result);
	free(result);

	result = ft_strjoin(1, strs1, sep_one);
	printf("Result (size 1, sep one): %s\n", result);
	free(result);

	result = ft_strjoin(1, strs1, sep_many);
	printf("Result (size 1, sep many): %s\n", result);
	free(result);

	// Test with size > 1
	result = ft_strjoin(3, strs3, sep_empty);
	printf("Result (size 3, sep empty): %s\n", result);
	free(result);
	result = ft_strjoin(3, strs3, sep_one);
	printf("Result (size 3, sep one): %s\n", result);
	free(result);

	result = ft_strjoin(3, strs3, sep_many);
	printf("Result (size 3, sep many): %s\n", result);
	free(result);

	return 0;
}