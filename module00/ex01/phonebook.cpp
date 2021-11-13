/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 13:48:14 by uterese           #+#    #+#             */
/*   Updated: 2021/10/11 22:44:49 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

contact::contact()
{

}

contact::contact(std::string firstName, std::string secondName,
		std::string nickname, std::string secret,
		std::string phoneNumber)
{
	fname = firstName;
	lname = secondName;
	nname = nickname;
	about_contact = secret;
	number = phoneNumber;
}

phonebook::phonebook()
{
    last_contact = 0;
    con_size = 0;
}

void phonebook::addcontact(std::string fname, std::string lname,
	    std::string nname, std::string secret, std::string number)
{
    contact new_con(fname, lname, nname, secret, number);
    std::cout << GRN"It is " << con_size + 1 << " contact" << std::endl;
    if (con_size == 8)
    {
        con[last_contact] = new_con;
        if (last_contact == 7)
            last_contact = 0;
        else
            last_contact += 1;
    }
    else
        con[con_size] = new_con;
    if (con_size < 8)
        con_size++;
    std::cout << "Success to add the new contact!" << std::endl;
}

void phonebook::show_contact()
{
    std::cout << GRN"         №" << "|";
	std::cout << "      Name" << "|";
	std::cout << "  LastName" << "|";
	std::cout << "  Nickname" << std::endl;
    int i = 0;
    int j = 0;
    
    while (i++ < 3)
        std::cout << std::string(10, ' ') << "|";
    std::cout << std::endl;
    while (j < con_size)
    {
        std::cout << "         " << j + 1 << "|";
        if (con[j].fname.size() > 10)
            std::cout << con[j].fname.substr(0, 9) << ".";
        else
            std::cout << std::string(10 - con[j].fname.size(), ' ') << con[j].fname;
        std::cout << "|";
        if (con[j].lname.size() > 10)
            std::cout << con[j].lname.substr(0, 9) << ".";
        else
            std::cout << std::string(10 - con[j].lname.size(), ' ') << con[j].lname;
        std::cout << "|";
        if (con[j].nname.size() > 10)
            std::cout << con[j].nname.substr(0, 9) << "." << std::endl;
        else
            std::cout << std::string(10 - con[j].nname.size(), ' ') << con[j].nname << std::endl;
        j++;    
    }
}

std::string    ft_prompt(void)
{
    std::string str;
    std::cout << GRN"Wellcome to phone book!"  << WHT << std::endl;
    std::cout << GRN"Use 'ADD', 'SEARCH' or 'EXIT' command" << WHT << std::endl;
    std::getline(std::cin, str);
    if (!std::cin)
        exit(1);
    return (str);
}

void ft_check_in(std::string &str)
{
    while (str.length() == 0)
    {
        std::getline(std::cin, str);
        if (!std::cin)
            exit(1);
    }
}

void    ft_add(phonebook &point)
{
    std::string fname, lname, number, nname, about_contact;

    std::cout << GRN"Write fist name" << WHT << std::endl;
    ft_check_in(fname);
    std::cout << GRN"Write last name" << WHT << std::endl;
    ft_check_in(lname);
    std::cout << GRN"Write nickname" << WHT << std::endl;
    ft_check_in(nname);
    std::cout << GRN"Write phone number" << WHT << std::endl;
    ft_check_in(number);
    std::cout << GRN"Write something about this contact" << WHT << std::endl;
    ft_check_in(about_contact);
    point.addcontact(fname, lname, nname, about_contact, number);
}

void    phonebook::ft_print(int i)
{
    std::cout << GRN"First name: " + con[i].fname << std::endl;
    std::cout << "Last name: " + con[i].lname << std::endl;
    std::cout << "Nickname: " + con[i].nname << std::endl;
    std::cout << "Phone number: " + con[i].number << std::endl;
    std::cout << "Comment: " + con[i].about_contact << std::endl;
}

void    phonebook::ft_search()
{
    int i = -1;
    std::string in;

    if (con_size == 0)
    {
        std::cout << GRN"You haven't any contact" << std::endl;
		return ;
    }
    show_contact();
    while (i < 1 || i > 8 || i > con_size)
    {
        std::cout << GRN"Enter number of contact: " << WHT;
		std::getline(std::cin, in);
        if (!std::cin)
            exit(1);
		i = std::atoi(in.c_str());
    }
    i--;
    ft_print(i);
}

int main()
{
    std::string line;
    phonebook point;

    while ((line = ft_prompt()) != "EXIT")
    {
        if (line == "ADD")
            ft_add(point);
        else if (line == "SEARCH")
            point.ft_search();
        else if (line == "EXIT")
            break ;
        else
            std::cout << RED"Wrong command!" << std::endl;
    }
}