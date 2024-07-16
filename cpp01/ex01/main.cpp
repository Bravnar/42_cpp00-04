/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:25:59 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:15:34 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie	*ZombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	for (int i = 0; i < N; i++) {
		horde[i].ChangeName(i, name);
	}
	return horde;
}


int	main() {
	Zombie	*horde;
	int	N = 10;

	horde = ZombieHorde(N, "Bo-Bo");
	std::cout << std::endl;
	for (int i = 0; i < N; ++i) {
		horde[i].announce();
	}

	std::cout << "\nFirst Zombie in the horde says:\n";
	horde->greet();
	
	delete [] horde;
	return (0);
}