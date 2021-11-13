/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: uterese <uterese@student.21-school.ru>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/18 22:55:23 by uterese           #+#    #+#             */
/*   Updated: 2021/10/19 11:42:02 by uterese          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#define RED "\001\e[0;31m\002"
#define GRN "\001\e[0;32m\002"
#define WHT "\001\e[0m\002"

class Karen
{
    private :
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);
        void exit(void);
    public :
        Karen();
        void complain(std::string level);
        std::string lvl[5];
};
int find_command(std::string input);