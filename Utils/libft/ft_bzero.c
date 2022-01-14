/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hyungyyo <hyungyyo@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/21 12:53:50 by hyungyyo          #+#    #+#             */
/*   Updated: 2020/12/22 21:09:35 by hyungyyo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char*)s;
	i = 0;
	while (i < n)
	{
		*tmp = '\0';
		tmp++;
		i++;
	}
}
