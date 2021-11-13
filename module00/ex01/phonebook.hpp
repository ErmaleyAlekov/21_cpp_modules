/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <and nephilister>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:00:59 by uterese           #+#    #+#             */
/*   Updated: 2021/10/11 16:56:53 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>

#define GRN "\001\e[0;32m\002"
# define RED "\001\e[0;31m\002"
# define WHT "\001\e[0m\002"

class contact
{
    public:
        contact();
        contact(std::string name, std::string secondName, std::string nickname,
						std::string secret, std::string phoneNumber);
        std::string fname;
        std::string lname;
        std::string nname;
        std::string number;
        std::string about_contact;
};

class phonebook
{
    private:
        contact con[8];
        unsigned short	con_size;
	    unsigned short	last_contact;
        void    show_contact();
    public:
        phonebook();
        void addcontact(std::string fname, std::string lname,
				   std::string nname, std::string secret,
				   std::string number);
        void ft_search();
        void ft_print(int i);
};

#endif