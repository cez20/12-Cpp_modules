/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cemenjiv <cemenjiv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/11 15:21:23 by cemenjiv          #+#    #+#             */
/*   Updated: 2023/11/06 14:01:46 by cemenjiv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include "Scalar.hpp"


int main (int argc, char **argv)
{
    if (argc != 2){
        std::cerr << "Invalid number of arguments OR character must be put inside double quote to work!" << std::endl;
        exit(EXIT_FAILURE);
    }
    
    Scalar entry1(argv[1]);
    // Scalar entry2 = entry1;
    
    return (0);
}