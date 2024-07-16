/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravye <smuravye@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 14:28:50 by smuravye          #+#    #+#             */
/*   Updated: 2024/07/16 15:07:46 by smuravye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class	Zombie {
	private:
		std::string	_name;
		int			_index;
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	greet(void);
		void	ChangeName(int i, std::string &name);
};

#endif