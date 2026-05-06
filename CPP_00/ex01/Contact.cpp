/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:11:03 by naperisw          #+#    #+#             */
/*   Updated: 2026/05/06 12:25:17 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){

}

Contact::~Contact(){

}

void Contact::setConatactInfo(std::string fName, std::string lName, std::string nName, std::string phone, std::string secret)
{
	firstName = fName;
	lastName = lName;
	nickname = nName;
	phoneNumber = phone;
	darkestSecret = secret;
}

void Contact::displayContact() const
{
	std::cout << "First Name: " << firstName << std::endl;
	std::cout << "Last Name: " << lastName << std::endl;
	std::cout << "Nick Name: " << nickname << std::endl;
	std::cout << "Phone Number: " << phoneNumber << std::endl;
	std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}