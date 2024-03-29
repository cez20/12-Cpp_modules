/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/30 11:03:19 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/05/04 12:53:59 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#include <iostream>

Weapon::Weapon(std::string const& type): _type(type) {
	
	std::cout << "[WEAPON CONSTRUCTOR] Constructor has been called" << std::endl;
}

std::string const & Weapon::getType(){
	
	return (this->_type);
}

void  Weapon::setType(std::string const & type){

	this->_type = type;
}