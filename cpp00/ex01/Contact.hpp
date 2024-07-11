/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 15:45:33 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/11 14:40:15 by smuravye         ###   ########.fr       */
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
		std::string _phonenumber;
		std::string _secret;
	public:
		Contact();
		~Contact();
		void		set_contact(int	index);
		void		decr_index();
		std::string	truncate(std::string str, size_t width) const;
		bool		valid_phonenumber(std::string& str) const;
		void		get_contact() const;
		void		display() const;
};

#endif
