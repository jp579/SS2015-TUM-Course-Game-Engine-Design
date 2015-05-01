// ConfigurationParser.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "ConfigParser.h"

int _tmain(int argc, _TCHAR* argv[])
{
	
	ConfigParser cp;
	cp.load("game.cfg");
	system("pause");
	return 0;
}

