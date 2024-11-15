/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 07:21:58 by tclaereb          #+#    #+#             */
/*   Updated: 2024/11/15 10:50:29 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const int	FragTrap::_healthConst = 100;
const int	FragTrap::_damageConst = 30;
const int	FragTrap::_energyConst = 100;


FragTrap::FragTrap( void ) : ClapTrap() {
	this->_className = "FragTrap";
	this->_health = 100;
	this->_damage = 30;
	this->_energy = 100;

	std::cout << GREEN << this->_className << " default constructor called." << DEFAULT << std::endl;
}

FragTrap::FragTrap( std::string name ) : ClapTrap(name) {
	this->_className = "FragTrap";
	this->_health = 100;
	this->_damage = 30;
	this->_energy = 100;

	std::cout << GREEN <<  this->_className << " constructor called: " << name << "." << DEFAULT << std::endl;
}

FragTrap::FragTrap( const FragTrap &other ) : ClapTrap(other) {
	*this = other;

	std::cout << GREEN << this->_className << " copy constructor called: " << this->_name << "." << DEFAULT << std::endl;
}

FragTrap::~FragTrap( void ) {
	std::cout << RED << "FragTrap destructor called: " << this->_name << "." << DEFAULT << std::endl;
}

FragTrap	&FragTrap::operator=( const FragTrap &other ) {
	if (this == &other)
		return (*this);

	ClapTrap::operator=(other);

	std::cout << YELLOW << this->_className << " operator = called." << DEFAULT << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys( void ) {
	std::string	value;

	std::cout << "Lets high five my friend :)" << std::endl;
	std::cout << "Yes/No" << std::endl;

	std::cin >> value;
	if (std::cin.eof())
		return ;

   for (size_t i = 0; i < value.length(); ++i) {
        value[i] = std::tolower(value[i]);
    }

	if (value == "yes")
		std::cout << "*Giga bro high five.*" << std::endl;
	else if (value == "no")
		std::cout << "*Spite on your shoes.*" << std::endl;
	else
		std::cout << "*FragTrap is confused, this answer has too high IQ for him to understand.*" << std::endl;
}
