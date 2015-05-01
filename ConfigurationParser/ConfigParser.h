#pragma once
#include <string>
#include <fstream>
#include <cstdlib>
#include <iostream>

class ConfigParser
{
public:
	struct Color{
		float r,g,b;
	};
	void load(std::string str);

private:
	float spinning, spinSpeed,
			terrainWidth, terrainDepth, terrainHeight;

	Color backgroundColor;

	std::string terrainPath;

	ConfigParser();
	~ConfigParser();
};

