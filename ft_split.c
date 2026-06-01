/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kselyzhi <kselyzhi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/12 15:20:37 by kselyzhi          #+#    #+#             */
/*   Updated: 2026/05/12 16:13:42 by kselyzhi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 

static int	count_words(char const *s, char c)
{
	int	count;
	int	inside_word;

	count = 0;
	inside_word = 0;
	while (*s)
	{
		if (*s != c && inside_word == 0)
		{
			inside_word = 1;
			count++;
		}
		else if (*s == c)
		{
			inside_word = 0;
		}
		s++;
	}
	return (count);
}

static char	*extract_word(char const *s, char c)
{
	int		len;
	int		i;
	char	*word;

	i = 0;
	len = 0;
	while (s[len] && s[len] != c)
		len++;
	word = malloc(sizeof(char) * (len + 1));
	if (!word)
		return (NULL);
	while (i < len)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	free_split(char **arr, int count)
{
	int	i;

	i = 0;
	while (i < count)
	{
		free(arr[i]);
		i++;
	}
	free(arr);
}

static int	fill_split(char **result, char const *s, char c, int word_count)
{
	int	i;

	i = 0;
	while (*s && i < word_count)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			result[i] = extract_word(s, c);
			if (!result[i])
			{
				free_split(result, i);
				return (0);
			}
			i++;
		}
		while (*s && *s != c)
			s++;
	}
	result[i] = NULL;
	return (1);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = malloc(sizeof(char *) * (word_count + 1));
	if (!result)
		return (NULL);
	if (!fill_split(result, s, c, word_count))
		return (NULL);
	return (result);
}
