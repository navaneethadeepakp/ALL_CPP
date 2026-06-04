#include "Sed.hpp"
#include <iostream>
#include <fstream>

Sed::Sed(std::string filename) : _inFile(filename), _outFile(filename + ".replace") {}
Sed::~Sed() {}

void Sed::ft_sed(std::string s1, std::string s2) {
	std::ifstream ifs(_inFile.c_str());
	if (!ifs.is_open()) {
		std::cerr << "Error: Unable to open input file: " << _inFile << std::endl;
		return ;
	}
	std::string content;
	std::string line;
	while (std::getline(ifs, line)) {
		content += line;
		if (!ifs.eof()) {
			content += '\n';
		}
	}
	ifs.close();
	if (s1.empty()) {
		std::cerr << "Error: Search string s1 cannot be empty." << std::endl;
		return ;
	}
	size_t pos = 0;
	while ((pos = content.find(s1, pos)) != std::string::npos) {
		content.erase(pos, s1.length());
		content.insert(pos,s2);
		pos += s2.length();
	}
	std::ofstream ofs(_outFile.c_str());
	if (!ofs.is_open()) {
		std::cerr << "Error: Unable to create output file: " << _outFile << std::endl;
		return ;
	}
	ofs << content;
	ofs.close();
}