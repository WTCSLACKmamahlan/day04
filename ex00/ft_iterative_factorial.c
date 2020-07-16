/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/15 15:18:28 by mamahlan          #+#    #+#             */
/*   Updated: 2020/07/15 16:14:35 by mamahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{

	int		i;
	int		factorial;

	if (nb < 0)
		return (0);
	factorial = 1;
	i = 2;
	while (i <= nb)
	{
		factorial *= i;
		i++;
	}
	return (factorial);
}	
