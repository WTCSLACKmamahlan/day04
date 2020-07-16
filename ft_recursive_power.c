/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 16:10:36 by mamahlan          #+#    #+#             */
/*   Updated: 2020/07/16 16:22:24 by mamahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_recursive_power(int nb, int power)
{
	int     res;
	    if (power < 0)
			return (0);
		else if (power < 1)
			return (1);
		return (nb * ft_recursive_power(nb, power - 1));
}

int main ()
{
	printf( "%d" , ft_recursive_power(3,3));
}
