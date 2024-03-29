/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:45:39 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/07/11 20:50:39 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <typeinfo>
#include <exception>


// Nous devons mettre en place des try et catch, car etant donne que le dynamic cast
// se fait at runtime, il se peut qu'il echoue

// Aussi, le dynamic cast se fait dans des cas de polymorphisme, c'est a dire quand au moins une des
// fonctions est virutelle

// Dynamic cast peut fonctionner sur des pointeurs ou des references
// Child1*		c = dynamic_cast<Child1*>(b);  // Meme chose que dans Module04 ou nous avons un type de variable a gauche et une classe derive a droite

class Parent 				{public: virtual ~Parent(void) {} };
class Child1				{};
class Child2				{};


int main (void)
{
	Child1		a;					// Reference value
	Parent*		b = &a;				// Implicit upcast ->Ok

	//Explicit downcast -> suspens ...
	Child1*		c = dynamic_cast<Child1*>(b);
	if (c == NULL)
		std::cout << "Conversion is NOT Ok" << std::endl;
	else{
		std::cout << "Conversion is Ok" << std::endl;
	}

	// Explicit downcast -> Suspens...
	try{
		Child2 & d = dynamic_cast<Child2&>(*b);
		std::cout << "Conversion is Ok"<< std::endl;
	}
	catch (std::bad_cast &bc){
		std::cout << "Conversion is NOT Ok: !" << bc.what() << std::endl;
		return (0);
	}
	return (0);
}