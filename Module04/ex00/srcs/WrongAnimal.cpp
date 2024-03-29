/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:25:19 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/05/16 18:55:14 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongAnimal::WrongAnimal(): type("NONE")
{
	std::cout << "[DEFAULT CONSTRUCTOR] WrongAnimal default constructor has been called!" << std::endl;
}

WrongAnimal::WrongAnimal( const WrongAnimal & src )
{
	std::cout << "[COPY CONSTRUCTOR] WrongAnimal Copy constructor has been called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongAnimal::~WrongAnimal()
{
	std::cout << "[DESTRUCTOR] WrongAnimal destructor has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongAnimal &	 WrongAnimal::operator=( WrongAnimal const & rhs )
{
	std::cout << "[OPERATOR OVERLOAD] WrongAnimal Equal operator overload has been called!" << std::endl;
	if ( this != &rhs )
	{
		this->type = rhs.getType();
	}
	return *this;
}

/*
** --------------------------------- METHODS ----------------------------------
*/

std::string WrongAnimal::getType() const{

	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "[MAKE SOUND] WrongAnimal DOES NOT do any animal sound, because we haven't precised" 
	          << " what kind of WrongAnimal it is!" << std::endl;
}



/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */