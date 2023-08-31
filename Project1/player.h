#pragma once
#include <map>
#include <string>
#include <vector>

class player {
public:
	const char* name;
	std::map <std::string, std::map<std::string, std::string>> savedGames;
};