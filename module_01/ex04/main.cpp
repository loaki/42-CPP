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
    std::string replaced;
    size_t pos;

    text = "";
    if(ac != 4 || std::string(av[2]).empty() || std::string(av[3]).empty())
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
    pos = 0;
    while(std::getline(readFile, line))
        text += (line + '\n');
    while((pos = text.find(av[2], pos)) != std::string::npos)
	{
		text.erase(pos, std::string(av[2]).length());
        text.insert(pos, av[3]);
        pos += std::string(av[3]).length();
	}
    replaced = av[1] + std::string(".replace");
	std::ofstream outfile(replaced.c_str());
	outfile << text << std::endl;
	outfile.close();
}