/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:52:47 by naperisw          #+#    #+#             */
/*   Updated: 2026/05/05 16:52:48 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook() {
    currentIndex = 0;
    totalContacts = 0;
}

PhoneBook::~PhoneBook() {
    std::string fName, lName, nName, phone, secret;

    std::cout << "Enter first name: ";
    std::getline(std::cin, fName);

    contacts[currentIndex].setConatactInfo(fName, lName, nName, phone, secret);
    currentIndex++;
    if (currentIndex == 8) {
        currentIndex = 0;
    }
    if (totalContacts < 8) {
        totalContacts++;
    }
    std::cout << "Contact added successfully!" << std::endl;
}

void PhoneBook::searchContacts() const {
    std::cout << "Dispalying conatcts..." << std::endl;
}