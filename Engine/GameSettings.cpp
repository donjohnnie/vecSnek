#include "GameSettings.h"


GameSettings::GameSettings(const std::string & filename)
{
	std::ifstream in(filename);
	std::string option;
	while (std::getline(in, option))
	{
		if (option == "[Board Size]")
		{
			in >> board_w >> board_h;
			continue;
		}
		if (option == "[Tile Size]")
		{
			in >> tilesize;
			continue;
		}
		if (option == "[Speedup Rate]")
		{
			in >> speedup;
			continue;
		}
		option = std::string();
	}
}
