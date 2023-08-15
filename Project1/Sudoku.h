#include "imgui.h"
#include <map>
#include <string>
#include "Level1.h"

namespace sudoku {

	

	void runSudoku(bool mainRun);
	void victoryWindow();
	void printEntries();
	void clearMaps();

	

	void saveGame();
	void loadGame();
	void entryPopup();

	static float menuBarSize = 18;
	static float windowH = 666 + menuBarSize;
	static float windowW = 666;
	static float buttonHW = windowW / 10.5;
	static ImVec2 squareSize(windowW / 3, (windowH - menuBarSize) / 3);
	static ImVec2 buttonSize(buttonHW, buttonHW);
	

	namespace level1 {
		
	}
}

