/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: naperisw <naperisw@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 12:01:51 by naperisw          #+#    #+#             */
/*   Updated: 2026/05/06 12:15:18 by naperisw         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <string>
#include <iostream>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string	phoneNumber;
		std::string	darkestSecret;
	public:
		Contact();
		~Contact();

		void setConatactInfo(std::string fName, std::string lName, std::string nName, std::string phone, std::string secret);
		void displayContact() const;
};

#endif