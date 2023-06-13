#include "imgui.h"
#include <map>
#include <string>

namespace sudoku {
	void runSudoku(bool mainRun);

	void squareOne(bool& x, std::string& submission, int& key);
	void squareTwo(bool& x, std::string& submission, int& key);
	void entry();
	void selectionWindow();
	void init();


	static float windowHW = 666;
	static float buttonHW = windowHW / 10.5;
	static ImVec2 squareSize(windowHW / 3, windowHW / 3);
	static ImVec2 iconSize(squareSize.x / 3, squareSize.x / 3);
	static ImVec2 buttonSize(buttonHW, buttonHW);
	

	namespace level1 {
		static std::map<int, std::string> box1;
		static std::map<int, std::string> box2;
		static std::map<int, std::string> box3;
		static std::map<int, std::string> box4;
		static std::map<int, std::string> box5;
		static std::map<int, std::string> box6;
		static std::map<int, std::string> box7;
		static std::map<int, std::string> box8;
		static std::map<int, std::string> box9;

	}
}

