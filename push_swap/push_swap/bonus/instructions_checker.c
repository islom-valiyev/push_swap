/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions_checker.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdabdul <abdabdul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:34:37 by abdabdul          #+#    #+#             */
/*   Updated: 2022/09/01 16:34:37 by abdabdul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_data *data)
{
	int	temp;
	int	i;

	if (data->topa > 0)
	{
		temp = data->a[0];
		i = 0;
		while (i < data->topa)
		{
			data->a[i] = data->a[i + 1];
			i++;
		}
		data->a[data->topa] = temp;
	}	
}

void	rrb(t_data *data)
{
	int	temp;
	int	i;

	if (data->topb > 0)
	{
		temp = data->b[0];
		i = 0;
		while (i < data->topb)
		{
			data->b[i] = data->b[i + 1];
			i++;
		}
		data->b[data->topb] = temp;
	}
}

void	rrr(t_data *data)
{
	rra(data);
	rrb(data);
}

void	ra(t_data *data)
{
	int	temp;
	int	i;

	if (data->topa > 0)
	{
		temp = data->a[data->topa];
		i = data->topa;
		while (i > 0)
		{
			data->a[i] = data->a[i - 1];
			i--;
		}
		data->a[0] = temp;
	}
}

void	rb(t_data *data)
{
	int	temp;
	int	i;

	if (data->topb > 0)
	{
		temp = data->b[data->topb];
		i = data->topb;
		while (i > 0)
		{
			data->b[i] = data->b[i - 1];
			i--;
		}
		data->b[0] = temp;
	}
}
