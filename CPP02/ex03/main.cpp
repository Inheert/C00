/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tclaereb <tclaereb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 08:03:21 by tclaereb          #+#    #+#             */
/*   Updated: 2024/10/26 13:52:56 by tclaereb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point/Point.hpp"
#include "iostream"

bool	bsp(Point const a, Point const b, Point const c) {
	
}

int	main( void ) {
	Point	a;
	Point	b(15.4f, 15.3f);
	Point	c = Point(3.4f, 4.3f);
	b = c;
	std::cout << b.getX();
	return 0;
}
