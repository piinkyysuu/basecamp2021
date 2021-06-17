/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thle <thle@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 17:31:00 by thle              #+#    #+#             */
/*   Updated: 2021/06/08 08:03:26 by thle             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	printing_answer(int number1, int number2, char operator)
{
	int		index;
	char	*operator_array;
	int		(*operator_func[5]) (int x, int y);

	index = 0;
	operator_array = "+-*/%%";
	operator_func[0] = ft_addition;
	operator_func[1] = ft_subtract;
	operator_func[2] = ft_mutiply;
	operator_func[3] = ft_divide;
	operator_func[4] = ft_modulus;
	while (operator_array[index] != '\0')
	{
		if (operator == operator_array[index])
		{
			ft_putnbr((*operator_func[index])(number1, number2));
			ft_putchar('\n');
			break ;
		}
		index++;
	}
}

int		main(int argc, char **argv)
{
	int		number1;
	int		number2;

	if (!argv)
		return (0);
	if (argc != 4)
		return (0);
	number1 = ft_atoi(argv[1]);
	number2 = ft_atoi(argv[3]);
	if (argv[2][0] != '+' && argv[2][0] != '-' && argv[2][0] != '*'
		&& argv[2][0] != '/' && argv[2][0] != '%')
	{
		ft_putstr("0\n");
		return (0);
	}
	if (number2 == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		ft_putstr("Stop : ");
		argv[2][0] == '/' ? ft_putstr("division ") : ft_putstr("modulo ");
		ft_putstr("by zero\n");
		return (0);
	}
	printing_answer(number1, number2, argv[2][0]);
	return (0);
}
