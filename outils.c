/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   outils.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/23 15:15:11 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/10/24 14:21:59 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "philo.h"

void	initialize_philos(t_global *info)
{
	int	i;

	i = 0;
	info->philo = malloc(sizeof(t_philo) * info->philo_nb);
	info->forks = malloc(sizeof(pthread_mutex_t *) * info->philo_nb);
	info->start_sim = // update later;
	while(i < info->philo_nb)
	{
		info->philo[i].id = i + 1;
		info->philo[i].left_fork = i;
		info->philo[i].right_fork = (i + 1) % info->philo_nb;
		info->philo[i].count_meals = 0;
		info->philo[i].last_meal = info->start_sim;
		// info->philo[i].info = info;
		i++;
	}
}

