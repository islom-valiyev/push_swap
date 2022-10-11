/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abdabdul <abdabdul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/01 16:31:11 by abdabdul          #+#    #+#             */
/*   Updated: 2022/09/10 17:23:29 by abdabdul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include "../libft/libft.h"
# include "../gnl/get_next_line.h"

typedef struct s_data
{
	int	*a;
	int	*b;
	int	topa;
	int	topb;
}	t_data;

void	rra(t_data *data);
void	rrb(t_data *data);
void	rrr(t_data *data);
void	ra(t_data *data);
void	rb(t_data *data);
void	rr(t_data *data);
void	pa(t_data *data);
void	pb(t_data *data);
void	sa(t_data *data);
void	sb(t_data *data);
void	ss(t_data *data);
void	error(t_data *data);
void	ft_free(t_data *data);
void	ft_free_checker(t_data *data, char **args);
void	initialize(t_data *data, char **av);
void	double_check_arg(t_data *data, char *str);
int		ft_atoi(t_data *data, char *str, char **av);
int		ft_is_sorted(t_data *data);
int		ft_is_duplicate(int *array, int maxindex);

#endif