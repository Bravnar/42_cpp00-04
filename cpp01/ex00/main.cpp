/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 18:15:01 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/11 19:12:28 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	simple(name);
	simple.announce();
}

Zombie* newZombie(std::string name)
{
	Zombie*	complex = new Zombie(name);
	return complex;
}

int	main() {
	
	Zombie* zombie;
	zombie = newZombie("Atticus");
	zombie->announce();
	delete zombie;
	
	randomChump("Jimson");
	return 0;
}
