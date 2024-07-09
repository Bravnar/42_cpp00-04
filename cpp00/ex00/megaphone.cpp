/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smuravyev <smuravyev@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/29 10:29:01 by smuravyev         #+#    #+#             */
/*   Updated: 2024/05/29 11:07:52 by smuravyev        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int			i;
	size_t		j;
	std::string	str;

	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (i = 1; i < ac; ++i)
		{
			str = av[i];
			for (j = 0; j < str.length(); ++j)
				std::cout << (char)std::toupper(str[j]); 
		}
		std::cout << std::endl;	
	}
	return 0;
}