/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamahlan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/16 13:42:53 by mamahlan          #+#    #+#             */
/*   Updated: 2020/07/16 14:34:39 by mamahlan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>
#include<unistd.h>

int ft_iterative_power(int nb, int power)
{
	int i;

	i = 1;
	
	if ((nb == 0 && power != 0) || (power < 0))
		return (0);
	if ((power == 0) || ((nb < 0) && (power == 0)))
		return (0);
	else
	{
		while (power > 0)
		{
			i = nb *i;
			power--;
		}
		return (i);
	}
}
int main()
{
	printf("%d\n", ft_iterative_power(5,2));
	 return (0);

}
