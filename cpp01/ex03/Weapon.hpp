/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:07:17 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/18 11:25:55 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>

class	Weapon {
	private:
		std::string	_type;
	public:
		Weapon(void);
		Weapon(const std::string& type);
		~Weapon(void);
		const std::string&	getType(void) const;
		void				setType(std::string	newType);
};


#endif