#include "imgui.h"
#include <map>
#include <string>

namespace sudoku {
	void runSudoku(bool mainRun);

	void squareOne(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareTwo(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareThree(bool& x, std::map<char, std::string>& submission, char& key);
	void squareFour(bool& x, std::map<char, std::string>& submission, char& key);
	void squareFive(bool& x, std::map<char, std::string>& submission, char& key);
	void squareSix(bool& x, std::map<char, std::string>& submission, char& key);
	void squareSeven(bool& x, std::map<char, std::string>& submission, char& key);
	void squareEight(bool& x, std::map<char, std::string>& submission, char& key);
	void squareNine(bool& x, std::map<char, std::string>& submission, char& key);

	void init();


	static float windowHW = 666;
	static float buttonHW = windowHW / 10.5;
	static ImVec2 squareSize(windowHW / 3, windowHW / 3);
	static ImVec2 iconSize(squareSize.x / 3, squareSize.x / 3);
	static ImVec2 buttonSize(buttonHW, buttonHW);
	//static std::map<char, std::string>& submission{level1::box2};
	

	namespace level1 {
		static std::map<char, std::string> box1;
		static std::map<char, std::string> box2;
		static std::map<char, std::string> box3;
		static std::map<char, std::string> box4;
		static std::map<char, std::string> box5;
		static std::map<char, std::string> box6;
		static std::map<char, std::string> box7;
		static std::map<char, std::string> box8;
		static std::map<char, std::string> box9;

		static std::map<char, std::string> answerKey;
	}
}

