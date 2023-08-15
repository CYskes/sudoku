#include <string>
#include "level1.h"
#include "Sudoku.h"


void level1::initLevel()
{
    std::string a;
    a = " ";

    sudoku::clearMaps();

    level1::box1.insert(std::make_pair('a', " "));
    level1::box1.insert(std::make_pair('b', " "));
    level1::box1.insert(std::make_pair('c', "4"));
    level1::box1.insert(std::make_pair('d', "9"));
    level1::box1.insert(std::make_pair('e', " "));
    level1::box1.insert(std::make_pair('f', " "));
    level1::box1.insert(std::make_pair('g', " "));
    level1::box1.insert(std::make_pair('h', " "));
    level1::box1.insert(std::make_pair('i', "3"));

    level1::box2.insert(std::make_pair('a', " "));
    level1::box2.insert(std::make_pair('b', "5"));
    level1::box2.insert(std::make_pair('c', " "));
    level1::box2.insert(std::make_pair('d', "7"));
    level1::box2.insert(std::make_pair('e', "3"));
    level1::box2.insert(std::make_pair('f', "4"));
    level1::box2.insert(std::make_pair('g', " "));
    level1::box2.insert(std::make_pair('h', "2"));
    level1::box2.insert(std::make_pair('i', "1"));

    level1::box3.insert(std::make_pair('a', " "));
    level1::box3.insert(std::make_pair('b', " "));
    level1::box3.insert(std::make_pair('c', " "));
    level1::box3.insert(std::make_pair('d', "6"));
    level1::box3.insert(std::make_pair('e', " "));
    level1::box3.insert(std::make_pair('f', " "));
    level1::box3.insert(std::make_pair('g', " "));
    level1::box3.insert(std::make_pair('h', "4"));
    level1::box3.insert(std::make_pair('i', "9"));

    level1::box4.insert(std::make_pair('a', " "));
    level1::box4.insert(std::make_pair('b', "3"));
    level1::box4.insert(std::make_pair('c', "5"));
    level1::box4.insert(std::make_pair('d', " "));
    level1::box4.insert(std::make_pair('e', "9"));
    level1::box4.insert(std::make_pair('f', " "));
    level1::box4.insert(std::make_pair('g', " "));
    level1::box4.insert(std::make_pair('h', "7"));
    level1::box4.insert(std::make_pair('i', "6"));

    level1::box5.insert(std::make_pair('a', " "));
    level1::box5.insert(std::make_pair('b', "9"));
    level1::box5.insert(std::make_pair('c', " "));
    level1::box5.insert(std::make_pair('d', " "));
    level1::box5.insert(std::make_pair('e', " "));
    level1::box5.insert(std::make_pair('f', " "));
    level1::box5.insert(std::make_pair('g', " "));
    level1::box5.insert(std::make_pair('h', "1"));
    level1::box5.insert(std::make_pair('i', " "));

    level1::box6.insert(std::make_pair('a', "4"));
    level1::box6.insert(std::make_pair('b', "8"));
    level1::box6.insert(std::make_pair('c', " "));
    level1::box6.insert(std::make_pair('d', " "));
    level1::box6.insert(std::make_pair('e', "3"));
    level1::box6.insert(std::make_pair('f', " "));
    level1::box6.insert(std::make_pair('g', "9"));
    level1::box6.insert(std::make_pair('h', "2"));
    level1::box6.insert(std::make_pair('i', " "));

    level1::box7.insert(std::make_pair('a', "3"));
    level1::box7.insert(std::make_pair('b', "1"));
    level1::box7.insert(std::make_pair('c', " "));
    level1::box7.insert(std::make_pair('d', " "));
    level1::box7.insert(std::make_pair('e', " "));
    level1::box7.insert(std::make_pair('f', "9"));
    level1::box7.insert(std::make_pair('g', " "));
    level1::box7.insert(std::make_pair('h', " "));
    level1::box7.insert(std::make_pair('i', " "));

    level1::box8.insert(std::make_pair('a', "9"));
    level1::box8.insert(std::make_pair('b', "7"));
    level1::box8.insert(std::make_pair('c', " "));
    level1::box8.insert(std::make_pair('d', "1"));
    level1::box8.insert(std::make_pair('e', "8"));
    level1::box8.insert(std::make_pair('f', "2"));
    level1::box8.insert(std::make_pair('g', " "));
    level1::box8.insert(std::make_pair('h', "6"));
    level1::box8.insert(std::make_pair('i', " "));

    level1::box9.insert(std::make_pair('a', "2"));
    level1::box9.insert(std::make_pair('b', " "));
    level1::box9.insert(std::make_pair('c', " "));
    level1::box9.insert(std::make_pair('d', " "));
    level1::box9.insert(std::make_pair('e', " "));
    level1::box9.insert(std::make_pair('f', "3"));
    level1::box9.insert(std::make_pair('g', "1"));
    level1::box9.insert(std::make_pair('h', " "));
    level1::box9.insert(std::make_pair('i', " "));
}

void level1::initAnswerKey() {

   level1::box1AnswerKey.insert(std::make_pair('a', "2"));
   level1::box1AnswerKey.insert(std::make_pair('b', "6"));
   level1::box1AnswerKey.insert(std::make_pair('c', "4"));
   level1::box1AnswerKey.insert(std::make_pair('d', "9"));
   level1::box1AnswerKey.insert(std::make_pair('e', "8"));
   level1::box1AnswerKey.insert(std::make_pair('f', "1"));
   level1::box1AnswerKey.insert(std::make_pair('g', "7"));
   level1::box1AnswerKey.insert(std::make_pair('h', "5"));
   level1::box1AnswerKey.insert(std::make_pair('i', "3"));

   level1::box2AnswerKey.insert(std::make_pair('a', "8"));
   level1::box2AnswerKey.insert(std::make_pair('b', "5"));
   level1::box2AnswerKey.insert(std::make_pair('c', "9"));
   level1::box2AnswerKey.insert(std::make_pair('d', "7"));
   level1::box2AnswerKey.insert(std::make_pair('e', "3"));
   level1::box2AnswerKey.insert(std::make_pair('f', "4"));
   level1::box2AnswerKey.insert(std::make_pair('g', "6"));
   level1::box2AnswerKey.insert(std::make_pair('h', "2"));
   level1::box2AnswerKey.insert(std::make_pair('i', "1"));

   level1::box3AnswerKey.insert(std::make_pair('a', "3"));
   level1::box3AnswerKey.insert(std::make_pair('b', "1"));
   level1::box3AnswerKey.insert(std::make_pair('c', "7"));
   level1::box3AnswerKey.insert(std::make_pair('d', "6"));
   level1::box3AnswerKey.insert(std::make_pair('e', "5"));
   level1::box3AnswerKey.insert(std::make_pair('f', "2"));
   level1::box3AnswerKey.insert(std::make_pair('g', "8"));
   level1::box3AnswerKey.insert(std::make_pair('h', "4"));
   level1::box3AnswerKey.insert(std::make_pair('i', "9"));

   level1::box4AnswerKey.insert(std::make_pair('a', "1"));
   level1::box4AnswerKey.insert(std::make_pair('b', "3"));
   level1::box4AnswerKey.insert(std::make_pair('c', "5"));
   level1::box4AnswerKey.insert(std::make_pair('d', "8"));
   level1::box4AnswerKey.insert(std::make_pair('e', "9"));
   level1::box4AnswerKey.insert(std::make_pair('f', "2"));
   level1::box4AnswerKey.insert(std::make_pair('g', "4"));
   level1::box4AnswerKey.insert(std::make_pair('h', "7"));
   level1::box4AnswerKey.insert(std::make_pair('i', "6"));

   level1::box5AnswerKey.insert(std::make_pair('a', "2"));
   level1::box5AnswerKey.insert(std::make_pair('b', "9"));
   level1::box5AnswerKey.insert(std::make_pair('c', "7"));
   level1::box5AnswerKey.insert(std::make_pair('d', "5"));
   level1::box5AnswerKey.insert(std::make_pair('e', "4"));
   level1::box5AnswerKey.insert(std::make_pair('f', "6"));
   level1::box5AnswerKey.insert(std::make_pair('g', "3"));
   level1::box5AnswerKey.insert(std::make_pair('h', "1"));
   level1::box5AnswerKey.insert(std::make_pair('i', "8"));

   level1::box6AnswerKey.insert(std::make_pair('a', "4"));
   level1::box6AnswerKey.insert(std::make_pair('b', "8"));
   level1::box6AnswerKey.insert(std::make_pair('c', "6"));
   level1::box6AnswerKey.insert(std::make_pair('d', "7"));
   level1::box6AnswerKey.insert(std::make_pair('e', "3"));
   level1::box6AnswerKey.insert(std::make_pair('f', "1"));
   level1::box6AnswerKey.insert(std::make_pair('g', "9"));
   level1::box6AnswerKey.insert(std::make_pair('h', "2"));
   level1::box6AnswerKey.insert(std::make_pair('i', "5"));

   level1::box7AnswerKey.insert(std::make_pair('a', "3"));
   level1::box7AnswerKey.insert(std::make_pair('b', "1"));
   level1::box7AnswerKey.insert(std::make_pair('c', "8"));
   level1::box7AnswerKey.insert(std::make_pair('d', "6"));
   level1::box7AnswerKey.insert(std::make_pair('e', "4"));
   level1::box7AnswerKey.insert(std::make_pair('f', "9"));
   level1::box7AnswerKey.insert(std::make_pair('g', "5"));
   level1::box7AnswerKey.insert(std::make_pair('h', "2"));
   level1::box7AnswerKey.insert(std::make_pair('i', "7"));

   level1::box8AnswerKey.insert(std::make_pair('a', "9"));
   level1::box8AnswerKey.insert(std::make_pair('b', "7"));
   level1::box8AnswerKey.insert(std::make_pair('c', "5"));
   level1::box8AnswerKey.insert(std::make_pair('d', "1"));
   level1::box8AnswerKey.insert(std::make_pair('e', "8"));
   level1::box8AnswerKey.insert(std::make_pair('f', "2"));
   level1::box8AnswerKey.insert(std::make_pair('g', "4"));
   level1::box8AnswerKey.insert(std::make_pair('h', "6"));
   level1::box8AnswerKey.insert(std::make_pair('i', "3"));

   level1::box9AnswerKey.insert(std::make_pair('a', "2"));
   level1::box9AnswerKey.insert(std::make_pair('b', "6"));
   level1::box9AnswerKey.insert(std::make_pair('c', "4"));
   level1::box9AnswerKey.insert(std::make_pair('d', "5"));
   level1::box9AnswerKey.insert(std::make_pair('e', "7"));
   level1::box9AnswerKey.insert(std::make_pair('f', "3"));
   level1::box9AnswerKey.insert(std::make_pair('g', "1"));
   level1::box9AnswerKey.insert(std::make_pair('h', "9"));
   level1::box9AnswerKey.insert(std::make_pair('i', "8"));
}

bool level1::queryVictory() {
    if (
        level1::box1 == level1::box1AnswerKey &&
        level1::box2 == level1::box2AnswerKey &&
        level1::box3 == level1::box3AnswerKey &&
        level1::box4 == level1::box4AnswerKey &&
        level1::box5 == level1::box5AnswerKey &&
        level1::box6 == level1::box6AnswerKey &&
        level1::box7 == level1::box7AnswerKey &&
        level1::box8 == level1::box8AnswerKey &&
        level1::box9 == level1::box9AnswerKey
        )
        return true;
    else
        return false;
}

void level1::squareOne(bool& entry, std::map<char, std::string>*& submission, char& key)
{
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, sudoku::menuBarSize));
    ImGui::Begin("1", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 1-1
    if (ImGui::Button((level1::box1.at('a')).c_str(), "a", sudoku::buttonSize)) {
        submission = &level1::box1;
        key = 'a';
        entry = true;
    }

    // Button 1-2
    ImGui::SameLine();
    if (ImGui::Button((level1::box1.at('b')).c_str(), "b", sudoku::buttonSize)) {
        submission = &level1::box1;
        key = 'b';
        entry = true;
    }

    // Button 1-3
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "c", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "d", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-5
    ImGui::SameLine();
    if (ImGui::Button((level1::box1.at('e')).c_str(), "e", sudoku::buttonSize)) {
        submission = &level1::box1;
        key = 'e';
        entry = true;
    }

    // Button 1-6
    ImGui::SameLine();
    if (ImGui::Button((level1::box1.at('f')).c_str(), "f", sudoku::buttonSize)) {
        submission = (&level1::box1);
        key = 'f';
        entry = true;
    }

    // Button 1-7
    if (ImGui::Button((level1::box1.at('g')).c_str(), "g", sudoku::buttonSize)) {
        submission = (&level1::box1);
        key = 'g';
        entry = true;
    }

    // Button 1-8
    ImGui::SameLine();
    if (ImGui::Button((level1::box1.at('h')).c_str(), "h", sudoku::buttonSize)) {
        submission = (&level1::box1);
        key = 'h';
        entry = true;
    }

    // Button 1-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "i", sudoku::buttonSize);
    ImGui::PopStyleColor(1);
    ImGui::End();
}

void level1::squareTwo(bool& entry, std::map<char, std::string>*& submission, char& key)
{
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x, sudoku::menuBarSize));
    ImGui::Begin("2", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 2-1
    if (ImGui::Button((level1::box2.at('a')).c_str(), "a", sudoku::buttonSize)) {
        submission = &level1::box2;
        key = 'a';
        entry = true;
    }

    // Button 2-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("5", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-3
    ImGui::SameLine();
    if (ImGui::Button((level1::box2.at('c')).c_str(), "c", sudoku::buttonSize)) {
        submission = &level1::box2;
        key = 'c';
        entry = true;
    }

    // Button 2-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-5
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("3", "e", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-6
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("4", "f", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-7
    if (ImGui::Button((level1::box2.at('g')).c_str(), "g", sudoku::buttonSize)) {
        submission = &level1::box2;
        key = 'g';
        entry = true;
    }

    // Button 2-8
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("2", "h", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-9
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("1", "i", sudoku::buttonSize);
    ImGui::PopStyleColor(1);
    ImGui::End();
}

void sudoku::squareThree(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2((squareSize.x) * 2, menuBarSize));
    ImGui::Begin("3", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 3-1
    if (ImGui::Button((sudoku::level1::box3.at('a')).c_str(), "a", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'a';
        entry = true;
    }

    // Button 3-2
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box3.at('b')).c_str(), "b", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'b';
        entry = true;
    }

    // Button 3-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box3.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'c';
        entry = true;
    }

    // Button 3-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "d", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 3-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box3.at('e')).c_str(), "e", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'e';
        entry = true;
    }

    // Button 3-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box3.at('f')).c_str(), "f", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'f';
        entry = true;
    }

    // Button 3-7
    if (ImGui::Button((sudoku::level1::box3.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box3;
        key = 'g';
        entry = true;
    }

    // Button 3-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "h", buttonSize);
    ImGui::PopStyleColor(1);

    //Button 3-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "i", buttonSize);
    ImGui::PopStyleColor(1);

    ImGui::End();
}

void sudoku::squareFour(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, squareSize.y + menuBarSize));
    ImGui::Begin("4", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 4-1
    if (ImGui::Button((sudoku::level1::box4.at('a')).c_str(), "a", buttonSize)) {
        submission = &sudoku::level1::box4;
        key = 'a';
        entry = true;
    }

    // Button 4-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "b", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-3
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("5", "c", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-4
    if (ImGui::Button((sudoku::level1::box4.at('d')).c_str(), "d", buttonSize)) {
        submission = &sudoku::level1::box4;
        key = 'd';
        entry = true;
    }

    // Button 4-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "e", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box4.at('f')).c_str(), "f", buttonSize)) {
        submission = &sudoku::level1::box4;
        key = 'f';
        entry = true;
    }

    // Button 4-7
    if (ImGui::Button((sudoku::level1::box4.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box4;
        key = 'g';
        entry = true;
    }

    // Button 4-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", "h", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "i", buttonSize);
    ImGui::PopStyleColor(1);

    ImGui::End();
}

void sudoku::squareFive(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(squareSize.x, squareSize.y + menuBarSize));
    ImGui::Begin("5", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 5-1
    if (ImGui::Button((sudoku::level1::box5.at('a')).c_str(), "a", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'a';
        entry = true;
    }

    // Button 5-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "b", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 5-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box5.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'c';
        entry = true;
    }

    // Button 5-4
    if (ImGui::Button((sudoku::level1::box5.at('d')).c_str(), "d", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'd';
        entry = true;
    }

    // Button 5-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box5.at('e')).c_str(), "e", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'e';
        entry = true;
    }

    // Button 5-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box5.at('f')).c_str(), "f", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'f';
        entry = true;
    }

    // Button 5-7
    if (ImGui::Button((sudoku::level1::box5.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'g';
        entry = true;
    }

    // Button 5-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "h", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 5-9
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box5.at('i')).c_str(), "i", buttonSize)) {
        submission = &sudoku::level1::box5;
        key = 'i';
        entry = true;
    }

    ImGui::End();
}

void sudoku::squareSix(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(squareSize.x * 2, squareSize.y + menuBarSize));
    ImGui::Begin("6", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 6-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "a", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("8", "b", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box6.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box6;
        key = 'c';
        entry = true;
    }

    // Button 6-4
    if (ImGui::Button((sudoku::level1::box6.at('d')).c_str(), "d", buttonSize)) {
        submission = &sudoku::level1::box6;
        key = 'd';
        entry = true;
    }

    // Button 6-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "e", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box6.at('f')).c_str(), "f", buttonSize)) {
        submission = &sudoku::level1::box6;
        key = 'f';
        entry = true;
    }

    // Button 6-7
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "g", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "h", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-9
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box6.at('i')).c_str(), "i", buttonSize)) {
        submission = &sudoku::level1::box6;
        key = 'i';
        entry = true;
    }

    ImGui::End();
}

void sudoku::squareSeven(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, (squareSize.y * 2) + menuBarSize));
    ImGui::Begin("7", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 7-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "a", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "b", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box7.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'c';
        entry = true;
    }

    // Button 7-4
    if (ImGui::Button((sudoku::level1::box7.at('d')).c_str(), "d", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'd';
        entry = true;
    }

    // Button 7-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box7.at('e')).c_str(), "e", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'e';
        entry = true;
    }

    // Button 7-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "f", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-7
    if (ImGui::Button((sudoku::level1::box7.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'g';
        entry = true;
    }

    // Button 7-8
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box7.at('h')).c_str(), "h", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'h';
        entry = true;
    }

    // Button 7-9
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box7.at('i')).c_str(), "i", buttonSize)) {
        submission = &sudoku::level1::box7;
        key = 'i';
        entry = true;
    }

    ImGui::End();
}

void sudoku::squareEight(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(squareSize.x, (squareSize.y * 2) + menuBarSize));
    ImGui::Begin("8", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 8-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "a", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", "b", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box8.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box8;
        key = 'c';
        entry = true;
    }

    // Button 8-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "d", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("8", "e", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "f", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-7
    if (ImGui::Button((sudoku::level1::box8.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box8;
        key = 'g';
        entry = true;
    }

    // Button 8-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "h", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-9
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box8.at('i')).c_str(), "i", buttonSize)) {
        submission = &sudoku::level1::box8;
        key = 'i';
        entry = true;
    }

    ImGui::End();
}

void sudoku::squareNine(bool& entry, std::map<char, std::string>*& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(squareSize.x * 2, (squareSize.y * 2) + menuBarSize));
    ImGui::Begin("9", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 9-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "a", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-2
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box9.at('b')).c_str(), "b", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'b';
        entry = true;
    }

    // Button 9-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box9.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'c';
        entry = true;
    }

    // Button 9-4
    if (ImGui::Button((sudoku::level1::box9.at('d')).c_str(), "d", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'd';
        entry = true;
    }

    // Button 9-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box9.at('e')).c_str(), "e", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'e';
        entry = true;
    }

    // Button 9-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "f", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-7
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "g", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-8
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box9.at('h')).c_str(), "h", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'h';
        entry = true;
    }

    // Button 9-9
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box9.at('i')).c_str(), "i", buttonSize)) {
        submission = &sudoku::level1::box9;
        key = 'i';
        entry = true;
    }

    ImGui::End();
}