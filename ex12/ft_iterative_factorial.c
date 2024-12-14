/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maelgini <maelgini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:31:21 by maelgini          #+#    #+#             */
/*   Updated: 2024/11/04 16:31:30 by maelgini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (n < 0 || n > 12)
		return (0);
	if (nb == 0)
		return (1);
	else
	{
		while (n > 1)
		{
			nb *= (n - 1);
			n--;
		}
		return (nb);
	}
}
