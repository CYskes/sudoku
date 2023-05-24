#include "imgui.h"

namespace sudoku {
	void runSudoku(bool mainRun);
	void squareOne();

	static float windowHW = 999;
	static ImVec2 squareSize(windowHW / 3, windowHW / 3);
	static ImVec2 iconSize(squareSize.x / 3, squareSize.x / 3);

}

