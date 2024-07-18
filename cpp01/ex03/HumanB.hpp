/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:27:10 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 12:35:45 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanB {
	private:
		std::string	_name;
		Weapon*		_held;
	public:
		HumanB(const std::string& name);
		~HumanB(void);
		void	setWeapon(Weapon& newWeapon);
		void	attack(void);
};

#endif