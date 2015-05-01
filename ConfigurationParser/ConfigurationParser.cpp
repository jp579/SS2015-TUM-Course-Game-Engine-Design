// ConfigurationParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConfigParser.h"
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	
	ConfigParser cp;
	cp.load("game.cfg");

	std::cout.precision(2);
	std::cout << std::fixed;
	std::cout << "Spinning: " << cp.getSpinning() << " Spinspeed: " << cp.getSpinSpeed() << std::endl;
	std::cout << "TerrainPath: " << cp.getTerrainPath() << std::endl;
	std::cout << "Background Color rgb " << cp.getBackgroundColor().r << " " << cp.getBackgroundColor().b << " " << cp.getBackgroundColor().g << std::endl;
	std::cout << "Terrain:" << std::endl;
	std::cout << "	Width :	" << cp.getTerrainWidth() << std::endl;
	std::cout << "	Depth :	" << cp.getTerrainDepth() << std::endl;
	std::cout << "	Height: " << cp.getTerrainHeight() << std::endl;
	system("pause");
	return 0;
}

