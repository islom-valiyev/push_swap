/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ivaliev <ivaliev@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/22 06:29:37 by ivaliev           #+#    #+#             */
/*   Updated: 2022/11/22 06:29:38 by ivaliev          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stddef.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>
# include <stdint.h>

int		ft_isdigit(int c);
size_t	ft_strlen(const char *str);
char	**ft_split(const char *s, char c);
int		ft_strcmp(char *s1, char *s2);
char	*ft_strjoin(char *s1, char *s2, int flag);
#endif
