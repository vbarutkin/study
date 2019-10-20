/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_board_size.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rjeraldi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/20 20:45:03 by rjeraldi          #+#    #+#             */
/*   Updated: 2019/10/20 20:45:12 by rjeraldi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		get_board_size(int n)
{
	int i;

	i = 0;
	if (n <= 0)
		return (0);
	n = n * 4;
	while (i * i < n)
		i++;
	return (i);
}
