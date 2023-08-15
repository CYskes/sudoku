#pragma once
#include <map>

namespace level1 {

	void initLevel();
	void initAnswerKey();
	bool queryVictory();

	void squareOne(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareTwo(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareThree(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareFour(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareFive(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareSix(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareSeven(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareEight(bool& x, std::map<char, std::string>*& submission, char& key);
	void squareNine(bool& x, std::map<char, std::string>*& submission, char& key);

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