#pragma once
#include <string>
#include <fstream>

class GameSettings
{
public:
	GameSettings() = default;
	GameSettings(const std::string& filename);

	int		getTileSize()		const { return tilesize; }
	int		getBoardWidth()		const { return board_w; }
	int		getBoardHeight()	const { return board_h; }
	float	getSpeedUp()		const { return speedup; }

private:
	int tilesize;
	int board_w;
	int board_h;
	float speedup;

};

