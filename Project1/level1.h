#pragma once
#include <map>

namespace sudoku {

	namespace level1 {

		void runLevel1(bool& x, std::string& key);
		void initLevel1();
		void initAnswerKey();
		void clearMaps();
		bool queryVictory();
		static bool firstPass{ true };

		void squareOne(bool& x, std::string& key);
		void squareTwo(bool& x, std::string& key);
		void squareThree(bool& x, std::string& key);
		void squareFour(bool& x, std::string& key);
		void squareFive(bool& x, std::string& key);
		void squareSix(bool& x, std::string& key);
		void squareSeven(bool& x, std::string& key);
		void squareEight(bool& x, std::string& key);
		void squareNine(bool& x, std::string& key);

		static std::map<std::string, std::string> initLevel; // poorly named, can't think of something better at this time
		static std::map<std::string, std::string> AnswerKey;

	}

}