/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/27 15:47:20 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/05/04 12:48:29 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA{

	private:
		std::string _nameA;
		Weapon&		_weaponA;
		
	public:
		HumanA();
		HumanA(std::string const& name, Weapon& weapon);
		
		std::string getNameA();
		void 		attack();
};

#endif