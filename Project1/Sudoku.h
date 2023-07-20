#include "imgui.h"
#include <map>
#include <string>

namespace sudoku {
	void runSudoku(bool mainRun);
	void victoryWindow();
	bool queryVictory();
	void printEntries();
	void clearMaps();

	void squareOne(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareTwo(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareThree(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareFour(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareFive(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareSix(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareSeven(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareEight(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareNine(bool& x, std::map<char, std::string>*& submission, char& key);

	void saveGame();
	void loadGame();
	void entryPopup();
	void initLevel1();
	void initLevel1AnswerKey();

	static float menuBarSize = 18;
	static float windowH = 666 + menuBarSize;
	static float windowW = 666;
	static float buttonHW = windowW / 10.5;
	static ImVec2 squareSize(windowW / 3, (windowH - menuBarSize) / 3);
	static ImVec2 buttonSize(buttonHW, buttonHW);
	

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

		static std::map<char, std::string> box1AnswerKey;
		static std::map<char, std::string> box2AnswerKey;
		static std::map<char, std::string> box3AnswerKey;
		static std::map<char, std::string> box4AnswerKey;
		static std::map<char, std::string> box5AnswerKey;
		static std::map<char, std::string> box6AnswerKey;
		static std::map<char, std::string> box7AnswerKey;
		static std::map<char, std::string> box8AnswerKey;
		static std::map<char, std::string> box9AnswerKey;
	}
}

