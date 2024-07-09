/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:45:33 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/09 18:14:48 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>

class	Contact {
	private:
		int			_index;
		std::string	_firstname;
		std::string	_lastname;
		std::string	_nickname;
	public:
		Contact();
		~Contact();
		void	set_contact(int	index);
		// void	print_contact() const;
};

#endif
