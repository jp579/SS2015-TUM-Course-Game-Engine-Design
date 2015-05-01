#pragma once
#include <iostream>
#include <set>

class ConfigParser
{
public:
	struct Color{
		float r,g,b;
	} color;
	
	// getters
	float getSpinning();
	float getSpinSpeed();
	


	void load(std::string str);

	ConfigParser();
	~ConfigParser();
private:
	
	float spinning, spinSpeed,
			terrainWidth, terrainDepth, terrainHeight;

	Color backgroundColor;

	std::string terrainPath;

};

