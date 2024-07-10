/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:45:33 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/10 17:38:10 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

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
		void	display_contacts() const;
};

#endif
