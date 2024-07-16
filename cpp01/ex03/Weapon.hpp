/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:42:30 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:49:18 by smuravye         ###   ########.fr       */
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
		~Weapon(void);
		const std::string&	getType(void) const;
		void				setType(std::string &type);
};

#endif