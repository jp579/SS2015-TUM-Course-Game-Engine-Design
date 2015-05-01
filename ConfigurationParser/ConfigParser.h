#pragma once
#include <iostream>
#include <set>

class ConfigParser
{
public:
	struct Color{
		float r,g,b;
	};
	void load(std::string str);

	ConfigParser();
	~ConfigParser();
private:
	bool listStringCompare(std::string str);


	float spinning, spinSpeed,
			terrainWidth, terrainDepth, terrainHeight;

	Color backgroundColor;

	std::string terrainPath;

};

