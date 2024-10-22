/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-bouy <sel-bouy@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 17:26:49 by sel-bouy          #+#    #+#             */
/*   Updated: 2024/10/18 13:36:26 by sel-bouy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHILO_H
# define PHILO_H

# include <pthread.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

// typedef struct s_philo
// {
//     int nb_philo;
//     int time_to_die;
//     int time_to_eat;
//     int time_to_sleep;
//     int max_eats;
// } t_philo;

int pars(int ac, char **av);


#endif