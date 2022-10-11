/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdabdul <abdabdul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/25 10:24:55 by abdabdul          #+#    #+#             */
/*   Updated: 2022/09/27 19:22:36 by abdabdul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_atoi(t_data *data, char *str, char **args)
{
	int		i;
	long	res;
	int		sign;

	sign = 1;
	res = 0;
	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		sign = -1;
		i++;
	}
	if (!ft_isdigit(str[i]))
		free_args(data, args);
	while (ft_isdigit(str[i]))
	{
		res = (res * 10) + (str[i] - 48);
		i++;
		if ((res > 2147483647 && sign == 1)
			|| ((res > 2147483648) && (sign == -1)))
			free_args(data, args);
	}
	if ((!ft_isdigit(str[i]) && str[i]) || i > 12)
		free_args(data, args);
	return (res * sign);
}

int	ft_is_sorted(t_data *data)
{
	int	i;

	i = data->topa;
	while (i != 0)
	{
		if (data->a[i] < data->a[i - 1])
			i--;
		else
			return (0);
	}
	return (1);
}

void	double_check_arg(t_data *data, char *str)
{
	int		i;
	char	**args;

	args = ft_split(str, ' ');
	free (str);
	initialize(data, args);
	i = 0;
	while (args[i])
	{
		free(args[i]);
		i++;
	}
	free(args);
}

void	free_args(t_data *data, char **args)
{
	int	i;

	i = 0;
	free (data->indexarray);
	free (data->a);
	free (data->b);
	while (args[i])
	{
		free (args[i]);
		i++;
	}
	free(args);
	write(2, "Error\n", 6);
	exit (0);
}
