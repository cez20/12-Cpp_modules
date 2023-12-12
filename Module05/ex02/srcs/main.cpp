/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:21:23 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/12/12 15:04:07 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# define RESET "\e[0m"
# define RED "\e[0;31m"
# define GRN "\e[0;32m"
# define CYN "\e[0;36m"
# define YEL "\e[0;33m"
# define REDB "\e[41m"

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <stdexcept>
#include <cstdlib>
#include <ctime>

int main()
{
	std::cout << GRN"*************************************************************************************" RESET << std::endl;
	std::cout << GRN"*                             TESTING INSTANCIATION OF SHRUBBERY                    *" RESET << std::endl;
	std::cout << GRN"*************************************************************************************" RESET << std::endl;

	/*
	   -------------------------- TRY AND CATCH ARE INSIDE CLASS INSTEAD OF MAIN -------------
	   Sign: 145
	   Execute: 137
	*/

	{
		Bureaucrat bureaucrat3("Cesar", 137);
		ShrubberyCreationForm shrubbery1("jardin");
		bureaucrat3.signAForm(shrubbery1); //Can be commented to see other error
		bureaucrat3.executeForm(shrubbery1);
		bureaucrat3.printData();
		shrubbery1.printData();

	}

	std::cout << GRN"*************************************************************************************" RESET << std::endl;
	std::cout << GRN"*                             TESTING INSTANCIATION OF ROBOTOMY                     *" RESET << std::endl;
	std::cout << GRN"*************************************************************************************" RESET << std::endl;

	/*
	   Sign: 72
	   Execute: 45
	*/
	{
		Bureaucrat bureaucrat5("Steven", 45);
		RobotomyRequestForm robotomy1("Robot");
		bureaucrat5.signAForm(robotomy1); //Can be commented to see other error
		bureaucrat5.executeForm(robotomy1);
		bureaucrat5.printData();
		robotomy1.printData();
	}

	std::cout << GRN"*************************************************************************************" RESET << std::endl;
	std::cout << GRN"*                    TESTING INSTANCIATION OF PRESIDENTIAL PARDON FORM              *" RESET << std::endl;
	std::cout << GRN"*************************************************************************************" RESET << std::endl;

	/*
	   Sign: 25
	   Execute: 5
	*/

	Bureaucrat bureaucrat7("Maxime", 1);
	PresidentialPardonForm president1("Cesar");
	bureaucrat7.signAForm(president1); //Can be commented to see other error
	bureaucrat7.executeForm(president1);
	bureaucrat7.printData();
	president1.printData();	

	return (0);
}


