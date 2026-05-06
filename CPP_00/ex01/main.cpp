/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:18:06 by naperisw          #+#    #+#             */
/*   Updated: 2026/05/06 12:26:03 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include <string>

std::string formatColumn(std::string text) {
	if (text.length() > 10) {
		return text.substr(0, 9) + ".";
	}
	return text;
}

int main()
{
	std::string name1 = "neethu";
	std::string name2 = "neetha";

	std::cout << std::setw(10) << formatColumn(name1) << "|" << std::endl;
	std::cout << std::setw(10) << formatColumn(name2) << "|" << std::endl;
	return 0;
}