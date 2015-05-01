// ConfigurationParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConfigParser.h"
#include <string>

int _tmain(int argc, _TCHAR* argv[])
{
	
	ConfigParser cp;
	cp.load("game.cfg");

	printf("spinning: %.2f, spinSpeed: %.2f \n", cp.getSpinning(), cp.getSpinSpeed());
	std::cout << "TerrainPath: " << cp.getTerrainPath() << std::endl;
	printf("Backgroundcolors (rbg) %.2f %.2f %.2f \n", cp.getBackgroundColor().r, cp.getBackgroundColor().b, cp.getBackgroundColor().g);
	printf("terrainWidth: %.2f, terrainDepth: %.2f, terrainHeight: %.2f \n", cp.getTerrainWidth(), cp.getTerrainDepth(), cp.getTerrainHeight());
	system("pause");
	return 0;
}

