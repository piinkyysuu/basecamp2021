#include <stdlib.h>
#include <unistd.h>
#include <stdio.h> 

void	ft_sort_wordtab(char **tab);

int		word_calc(char *str)
{
	int words;
	int i;

	i = 0;
	words = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\v' || str[i] == '\n')
			if (str[i + 1] != ' ' && str[i + 1] != '\t'
				&& str[i + 1] != '\v' && str[i + 1] != '\n')
				words++;
		i++;
	}
	return (words);
}

int		letter_calc(int i, char *str)
{
	int letters;

	letters = 0;
	while (str[i] != 0)
	{
		if ((str[i] == 32 || (str[i] >= 9 && str[i] <= 11)))
			return (letters);
		letters++;
		i++;
	}
	return (letters);
}

char	**ft_split_whitespaces(char *str)
{
	char	**array;
	int		i;
	int		x;
	int		y;

	i = 0;
	x = 0;
	array = malloc((word_calc(str) * sizeof(char*)) + 1);
	while (str[i] != '\0')
	{
		y = 0;
		if (str[i] == ' ' || str[i] == '\t'
			|| str[i] == '\v' || str[i] == '\n')
			i++;
		else
		{
			array[x] = malloc((letter_calc(i, str) * sizeof(char)) + 1);
			while (str[i] != ' ' && str[i] != '\t' &&
					str[i] != '\v' && str[i] != '\n' && str[i] != '\0')
				array[x][y++] = str[i++];
			array[x++][y] = '\0';
		}
	}
	array[x] = NULL;
	return (array);
}

int		main(void)
{
	char *str;
	char **array;
	str = " 	  \nbe I amanh    so tired       of this, what can i do?";
	
	int index = 0;
	array = ft_split_whitespaces(str);
	while (array[index] != '\0')
	{
		printf("Array	%d is	%s\n", index, array[index]);
		index++;
	}
	ft_sort_wordtab(array);
	index = 0;
	while (array[index] != '\0')
	{
		printf("Array	%d is	%s\n", index, array[index]);
		index++;
	}
	
	return (0);
}