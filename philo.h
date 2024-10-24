/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:26:49 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/10/24 14:21:03 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>  // threads and mutex  
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>
#include <sys/time.h>

typedef struct s_philo
{
	pthread_t	philo_id;
	int			id;
	int			count_meals;
	int			last_meal;
	int			left_fork;
	int			right_fork;
	// struct s_global	*info;
} t_philo;

typedef struct s_global
{
	pthread_mutex_t mutex_f;
	t_philo			*philo; // 
	int				fork_id;
	int				philo_nb; // av[1]
	int				time_to_die; // av[2]
	int				time_to_eat; // av[3]
	int				time_to_sleep; // av[4]
	int				nbr_meals; // av[5]
	int				start_sim;
	int				end_sim;
	pthread_mutex_t	*forks;
}	t_global;

int		ft_atoi(const char *str);
int		pars(int ac, char **av);
void	initialize_philos(t_global *info);

#endif

