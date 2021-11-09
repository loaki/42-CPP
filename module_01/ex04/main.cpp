/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jfeuilla <jfeuilla@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 15:32:21 by jfeuilla          #+#    #+#             */
/*   Updated: 2021/11/09 16:34:11 by jfeuilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int main(int ac, char **av)
{
    std::string line;
    std::string text;
    std::string result;
    size_t start;
    size_t end;

    if(ac != 4 || av[2].empty() || av[3].empty())
    {
        std::cout << "Error : wrong parameters" << std::endl;
        return (0);
    }
    std::ifstream readFile(av[1]);
    if(!readFile)
    {
        std::cout << "Error : can't open file" << std::endl;
        return (0);
    }
    while(getline(readFile, line))
        text += (readout + '\n');
    end = text.find(av[2], start);
    printf(end, start);
}