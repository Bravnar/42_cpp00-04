/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:54:57 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/22 15:25:11 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_H
# define HARL_H

# include <iostream>
# include <string>
# include "Harl.hpp"

// ANSI escape codes for bold text with different colors
# define BOLD_WHITE   "\033[1;37m"
# define BOLD_RED     "\033[1;31m"
# define BOLD_GREEN   "\033[1;32m"
# define BOLD_YELLOW  "\033[1;33m"
# define BOLD_BLUE    "\033[1;34m"

// Reset color
#define RESET_COLOR  "\033[0m"

#endif