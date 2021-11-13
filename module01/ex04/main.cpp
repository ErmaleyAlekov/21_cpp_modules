/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 20:18:18 by uterese           #+#    #+#             */
/*   Updated: 2021/10/20 13:39:15 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"

size_t    ft_replace(char *open, std::ofstream &file, std::string s1, std::string s2)
{
    std::ifstream openf;
    std::string data;
    size_t index;

    openf.open(open);
    if (!openf.is_open())
    {
        std::cout << RED"Error: Cannot read file!" << std::endl;
        exit(1);
    }
    while (!openf.eof())
        data += openf.get();
    openf.close();
    data.resize(data.size() - 1);
    index = data.find(s1);
    if (index == std::string::npos)
    {
        std::cout << RED"Cannot find this string [" + s1 + "]!" << std::endl;
        return (index);
    }
    while ((index = data.find(s1, index)) != std::string::npos && s1 != s2)
    {
        data = data.substr(0, index) + s2 + data.substr(index + s1.size());
        index += s2.length();
    }
    file << data;
    return (0);
}

int main(int arg, char **argv)
{
    std::ofstream file;
    size_t index;

    if (arg != 4)
    {
        std::cout << RED"Error: Bad number of arguments!" << std::endl;
        exit(1);
    }
    std::string s1 = argv[2]; 
    std::string s2 = argv[3];
    if (s1 == "" || s2 == "")
    {
        std::cout << RED"Error: second or third argument is empty!" << std::endl;
        exit(1);
    }
    file.open("FILENAME.replace");
    if (!file.is_open())
        exit(1);
    index = ft_replace(argv[1], file, s1, s2);
    if (index == std::string::npos)
        std::cout << RED"Nothing to replace! Look at [FILENAME.replace] file" << std::endl;
    else
        std::cout << GRN"All done! Look at [FILENAME.replace] file." << std::endl;
    file.close();
    return (0);
}