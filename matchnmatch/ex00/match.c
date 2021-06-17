/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   match.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/06 17:29:46 by thle              #+#    #+#             */
/*   Updated: 2021/06/06 19:10:47 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		str_length(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

int		the_next_match(char *str, int position, char letter)
{
	if (position + 1 > str_length(str))
		return (-1);
	while (str[position] != '\0')
	{
		if (str[position] == letter)
			return (position - 1);
		position++;
	}
	return (-1);
}

int		check_if_star(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '*')
			return (1);
		i++;
	}
	return (0);
}

int		compare_str(char *s1, char *s2)
{
	int s1_length;
	int s2_length;
	int index;

	index = 0;
	s1_length = str_length(s1);
	s2_length = str_length(s2);
	if (s1 != s2)
		return (0);
	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}

int		match(char *s1, char *s2)
{
	int s2_index;
	int s1_index;

	s1_index = 0;
	s2_index = 0;
	if (!check_if_star(s2))
		return (compare_str(s1, s2));
	if (str_length(s2) > str_length(s1))
		return (0);
	while (s2[s2_index] != '\0' && s2_index < str_length(s2))
	{
		if (s1[s1_index] != s2[s2_index] && s2[s2_index] != '*')
			return (0);
		if (s2[s2_index] == '*' && s2[s2_index + 1] != '\0')
		{
			while (s2[s2_index + 1] != '\0' && s2[s2_index + 1] == '*')
				s2_index++;
			s1_index = the_next_match(s1, s1_index, s2[s2_index + 1]);
		}
		if (s1_index < 0)
			return (0);
		s2_index++;
		s1_index++;
	}
	return (1);
}
