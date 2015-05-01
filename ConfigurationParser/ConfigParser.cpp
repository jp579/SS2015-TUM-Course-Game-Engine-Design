#include "ConfigParser.h"
#include <string>
#include <fstream>
#include <cstdlib>
#include <sstream>

ConfigParser::ConfigParser()
{
	
	

}
ConfigParser::~ConfigParser()
{


}
void ConfigParser::load(std::string str){
	// to read the values  
	int skip = 0;

	// stream to read file
	std::ifstream ifs(str);

	// check if file is open
	if (ifs.is_open()){
		std::cout << "file is open" << std::endl;
		
		// string for line
		std::string line;
		// string for the first word in the line
		std::string word;


		int i = 0;
		// loop line by line
		while (getline(ifs,line)){
			//get the components in the lin
			std::istringstream iss(line);
			iss >> word;

			if (word.compare("spinning") == 0){
				iss >> spinning;
				//std::cout << "spinning " << spinning << std::endl;
			}

			else if (word.compare("spinSpeed") == 0){
				iss >> spinSpeed;
				//std::cout << "spinSpeed " << spinSpeed << std::endl;
			}

			else if (word.compare("backgroundColor") == 0){
				iss >> backgroundColor.r >> backgroundColor.g >> backgroundColor.b;
				//std::cout << color.r << " " << color.g << " " << color.b << std::endl;
			}
			else if (word.compare("terrainPath") == 0){
				iss >> terrainPath;
				//std::cout << terrainPath << std::endl;
			}
			else if (word.compare("terrainDepth") == 0){
				iss >> terrainDepth;
			}
			else if (word.compare("terrainWidth") == 0){
				iss >> terrainWidth;
			}
			else if (word.compare("terrainHeight") == 0){
				iss >> terrainHeight;
			}
			else {
				if (!word.empty())
				std::cout << "Error: unknown Parameter!" << std::endl;
			}
			//empty word
			word = "";

		}
	}
	ifs.close();
	if (!ifs.is_open())
	{
		std::cout << "file closed...OK" << std::endl << std::endl;
	}
	else
		std::cout << "Error: file not closed!" << std::endl;
}
float ConfigParser::getSpinning(){
	return spinning;
}
float ConfigParser::getSpinSpeed(){
	return spinSpeed;
}
float ConfigParser::getTerrainWidth(){
	return terrainWidth;
}
float ConfigParser::getTerrainDepth(){
	return terrainDepth;
}
float ConfigParser::getTerrainHeight(){
	return terrainHeight;
}
ConfigParser::Color ConfigParser::getBackgroundColor(){
	return backgroundColor;
}
std::string ConfigParser::getTerrainPath(){
	return terrainPath;
}