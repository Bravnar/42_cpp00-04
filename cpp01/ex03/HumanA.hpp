/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:33:54 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 12:28:42 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include <string>
# include "Weapon.hpp"

class	HumanA {
	private:
		std::string	_name;
		Weapon&		_held;
	public:
		HumanA(const std::string& name, Weapon& type);
		~HumanA(void);
		void	attack(void);
};


#endif