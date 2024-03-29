/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/31 12:20:09 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/05/08 08:34:43 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl() {}

void	Harl::complain(std::string level)
{
	std::string option[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i;
	
	for (i = 0; i < 4; i++)
	{
		if (level == option[i])
			break;
	}
	
	switch(i)
	{
		case 0:
			debug();
		case 1:
			info();
		case 2:
			warning();
		case 3:
			error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}

void	Harl::debug(void){

	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "I love having extra bacon for my "
	          << "7XL-double-cheese-triple-pickle-special-ketchup-burger. "
			  << "I really do!" << std::endl;
}

void	Harl::info(){

	std::cout << "[ INFO ]" << std::endl;
	std::cout << "I cannot believe adding extra bacon costs more money. "
			  << "You didn't put enough bacon in my burger. If you did "
			  << "I wouldn't be asking for more!" << std::endl;
}

void	Harl::warning(){

	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. "
			  << "I've been coming for years whereas you started "
			  << "working here since last month." << std::endl;
}

void	Harl::error(){

	std::cout << "[ ERROR ]" << std::endl;
	std::cout << "This is unacceptable! I want to speak to the manager now!" << std::endl;
}