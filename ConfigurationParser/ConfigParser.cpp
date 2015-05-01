#include "ConfigParser.h"
#include <string>
#include <fstream>

ConfigParser::ConfigParser()
{
}


ConfigParser::~ConfigParser()
{
}


bool ConfigParser::listStringCompare(std::string str){
	return true;
}


void ConfigParser::load(std::string str){
	
		std::ifstream ifs(str);
		// check if file is open
		if (ifs.is_open()){
			std::cout << "file is open";

			// read words and print them in the console
			std::string word;
			while (ifs >> word){
				std::cout << word << std::endl;
			
			}
		}

	
}