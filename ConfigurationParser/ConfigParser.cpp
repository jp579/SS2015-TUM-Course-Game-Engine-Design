#include "ConfigParser.h"
#include <string>
#include <fstream>
#include <vector>

std::vector<std::string> s = {"spinning", "spinSpeed", "backgroundColor", "terrainPath", "terrainWidth", "terrainDepth", "terrainHeight"};


ConfigParser::ConfigParser()
{
	
	

}


ConfigParser::~ConfigParser()
{


}


bool ConfigParser::listStringCompare(std::string str){
	return (std::find(s.begin(), s.end(), str) != s.end());
}


void ConfigParser::load(std::string str){
	int skip = 0;
	// stream to read file
	std::ifstream ifs(str);

	// check if file is open
	if (ifs.is_open()){
		std::cout << "file is open" << std::endl;

		// read words and print them in the console
		std::string word;

		// read every word in the file
		while (ifs >> word){
			if (listStringCompare(word))
			{
			
			}
			
			
		}
	}	
}