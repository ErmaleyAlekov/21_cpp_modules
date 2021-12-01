/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 19:58:56 by uterese           #+#    #+#             */
/*   Updated: 2021/12/01 15:30:27 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137) \
        , target("default") {}
ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) \
     : Form("ShrubberyCreationForm", 145, 137), target(Target) {}
ShrubberyCreationForm::~ShrubberyCreationForm() {}
std::string	ShrubberyCreationForm::getTarget() const
{return (target);}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obj) \
    : Form(obj.getName(), obj.getGrSign(), obj.getGrExec())
{
    Signed = obj.getAnswer();
    target = obj.getTarget();
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obj)
{
	Signed = obj.getAnswer();
	target = obj.getTarget();
	return (*this);
}
const char *ShrubberyCreationForm::FileExc::what() const throw()
{return ("File cannot be created!");}

void inFile(std::ofstream &file)
{
    int center = 0; 
    int order = 6;
    int offset = 0;
    int lvlbranch = 0;
    for (int i = 0; i <= order; ++i) center = center + i;
    for (int i = 0; i < center; ++i) file << " ";
    file << "/\\" << std::endl;
    for (int lvl = order; lvl >= 1; --lvl)
    {
      for (int i = 0; i < center - offset - 1; ++i) file << " ";
      file << "*/";
      for (int i = 0; i < offset * 2; ++i) file << "$";
      file << "\\*" << std::endl;
      for (int branch = 0; branch <= lvlbranch; ++branch)
        {
            ++offset;
            for (int i = 0;i < center - offset; ++i) file << " ";
            file << "/";
            for (int i = 0; i < offset * 2; ++i) file << "$";
            file << "\\" << std::endl;
        }
        ++lvlbranch;
    }
    for (int i = 0; i < center - 1; ++i) file << " ";
    file << "[$]" << std::endl;
    for (int i = 0; i < center - 1; ++i) file << " ";
    file << "[$]" << std::endl;
    for (int i = 0; i < center - 1; ++i) file << " ";
    file << "[$]" << std::endl;
}

void ShrubberyCreationForm::Action() const
{
    std::ofstream file(getTarget(), std::ofstream::out);
    if (file.fail())
        throw ShrubberyCreationForm::FileExc();
    else
        inFile(file);
    file.close();
}