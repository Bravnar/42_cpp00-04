/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:42:30 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/17 17:07:46 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class	Weapon {
	private:
		std::string	_type;
	public:
		Weapon(void);
		Weapon(std::string &type);
		~Weapon(void);
		const std::string	&getType(void) const;
		void				setType(const std::string &type);
};

#endif