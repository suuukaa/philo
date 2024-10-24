/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 18:37:48 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/10/22 11:44:46 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

int	ft_isdigit(int i)
{
	if (i >= '0' && i <= '9')
		return (1);
	return (0);
}

static int	ft_handle(const char *str, int sign, int i)
{
	long long	nb;
	long long	n;

	n = 0;
	nb = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		n = (nb * 10) + (str[i] - '0');
		if (n < nb && sign == 1)
			return (-1);
		else if (n < nb && sign == -1)
			return (0);
		nb = n;
		i++;
	}
	if(str[i])
		return (-1);
	return ((int) nb * sign);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32))
	{
		i++;
	}
	if (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign = -1;
		else
			sign = 1;
		i++;
	}
	return (ft_handle(str, sign, i));
}

int	pars(int ac, char **av)
{
	int	i;
	int	num;

	i = 1;
	if (ac != 5 && ac != 6)
		return (write(1, "4 or 5 arguments please", 24), 0);
	while(i < ac)
	{
		num = ft_atoi(av[i]);
		if (num <= 0)
			return (write(1, "ERROR", 6));
		i++;
	}
	return (1);
}
