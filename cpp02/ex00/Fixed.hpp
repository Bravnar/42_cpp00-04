/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 10:12:33 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/23 11:32:52 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
	
	private:
		int					_value;
		static const int	_bits = 8;
	public:
		Fixed( void );
		Fixed( const Fixed &copy);
		~Fixed( void );
		
		Fixed 	&operator=( const Fixed &copy );
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		
};

#endif