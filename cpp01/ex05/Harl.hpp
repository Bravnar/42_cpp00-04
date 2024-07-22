/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 14:00:53 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/22 14:57:09 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "Harl.h"

class Harl {
	private:
		void	_debug( void );
		void	_info( void );
		void	_warning( void );
		void	_error( void ); 
	public:
		Harl(void);
		~Harl(void);
		void	complain( std::string level );
	typedef void	(Harl::* func)(void);
		
};

#endif