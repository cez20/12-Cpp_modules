/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/13 15:25:35 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/04/13 15:25:39 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

/*
** ------------------------------- CONSTRUCTOR --------------------------------
*/

WrongCat::WrongCat()
{
	type = "WrongCat";
	std::cout << "[DEFAULT CONSTRUCTOR] WrongCat default constructor has been called!" << std::endl;
}

WrongCat::WrongCat( const WrongCat & src )
{
	std::cout << "[COPY CONSTRUCTOR] WrongCat copy constructor has been called!" << std::endl;
	*this = src;
}


/*
** -------------------------------- DESTRUCTOR --------------------------------
*/

WrongCat::~WrongCat()
{
	std::cout << "[DESTRUCTOR] WrongCat destructor has been called" << std::endl;
}


/*
** --------------------------------- OVERLOAD ---------------------------------
*/

WrongCat &	WrongCat::operator=( WrongCat const & rhs )
{
	std::cout << "[OPERATOR OVERLOAD] WrongCat Equal operator overload has been called!" << std::endl;
	if ( this != &rhs )
	{
		type = rhs.getType();
	}
	return *this;
}


/*
** --------------------------------- METHODS ----------------------------------
*/

void	WrongCat::makeSound() const
{
	std::cout << "[MAKE SOUND]The WrongCat says MEOOOOOOOOOOWWWWWWWWWWWW!" << std::endl;
}


/*
** --------------------------------- ACCESSOR ---------------------------------
*/


/* ************************************************************************** */