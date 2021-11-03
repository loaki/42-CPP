#include "Sed.hpp"

Sed::Sed()
{
}

void Sed::replace(std::string const &filename, std::string const &search, std::string const &replace)
{
	std::ifstream file;
	std::ofstream output;
	std::string line;

	if (filename.length() == 0)
		throw "Filename is empty.";
	else if (search.length() == 0)
		throw "Search string is empty.";
	else if (replace.length() == 0)
		throw "Replace string is empty.";
	file.open(filename);
	if (!file.is_open())
		throw "Input File couldn't be opened.";
	output.open(filename + ".replace", std::ios::trunc);
	if (!output.is_open())
		throw "Output File couldn't be opened.";
	while (std::getline(file, line))
	{
		size_t j;
		for (size_t i = 0; i < line.length(); i++)
		{
			j = 0;
			while (line[i + j] && j < search.length() && line[i + j] == search[j])
				j++;
			if (j == search.length())
			{
				i += j - 1;
				output << replace;
			}
			else
				output << line[i];
		}
		if (!file.eof())
			output << '\n';
	}
	file.close();
	output.close();
}
