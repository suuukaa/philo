/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 15:11:51 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/10/24 13:57:55 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	store(t_global **info, char **av)
{
	(*info)->philo_nb = ft_atoi(av[1]);
	(*info)->time_to_die = ft_atoi(av[2]);
	(*info)->time_to_eat = ft_atoi(av[3]);
	(*info)->time_to_sleep = ft_atoi(av[4]);
	if(av[5])
		(*info)->nbr_meals = ft_atoi(av[5]);
}

int	main(int ac, char **av)
{
	t_global	*info;
	
	if (!pars(ac, av))
		return (0);
	store(&info, av);
	initialize_philos(info);
	return (0);
}
