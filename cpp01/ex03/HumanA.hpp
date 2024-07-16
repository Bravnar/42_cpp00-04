/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 15:39:50 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:47:11 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA
{
private:
	std::string	_name;
	Weapon		_type;
public:
	HumanA(std::string name, Weapon type);
	~HumanA();
	void	attack(void);
};

#endif