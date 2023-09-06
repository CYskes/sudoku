#include "imgui.h"
#include <map>
#include <string>
#include "Level1.h"

namespace sudoku {

	void runSudoku(bool mainRun);
	void victoryWindow();
	void printEntries();	
	bool queryVictory();
	void saveGame();
	void loadGame();
	void entryPopup();

	inline float menuBarSize = 18;
	inline float windowH = 666 + menuBarSize;
	inline float windowW = 666;
	inline float buttonHW = windowW / 10.5;
	inline ImVec2 squareSize(windowW / 3, (windowH - menuBarSize) / 3);
	inline ImVec2 buttonSize(buttonHW, buttonHW);
	inline bool submittingEntry{ false };
	inline bool victory{ false };
	inline std::string key;
	inline std::map<std::string, std::string>* submission;
	inline int currentLevel = 1 ;
}

