#include "imgui.h"

namespace sudoku {
	void runSudoku(bool mainRun);

	void squareOne();
	void squareTwo();
	const char* entry();

	static float windowHW = 666;
	static float buttonHW = windowHW / 10.5;
	static ImVec2 squareSize(windowHW / 3, windowHW / 3);
	static ImVec2 iconSize(squareSize.x / 3, squareSize.x / 3);

	namespace level1 {
		static const char* box1[9]{ " " };
		static const char* box2[9]{ " " };
		static const char* box3[9]{ " " };
		static const char* box4[9]{ " " };
		static const char* box5[9]{ " " };
		static const char* box6[9]{ " " };
		static const char* box7[9]{ " " };
		static const char* box8[9]{ " " };
		static const char* box9[9]{ " " };

	}
}

