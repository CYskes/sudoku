#include "Sudoku.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

#pragma warning(disable: 4996)

// Buttons are all using ButtonCy to avoid naming conflicts with standard button function caused by multiple instances of " ".

/*
To do:
- answer key check
- save function
- reset button
- levels
*/


bool submittingEntry{ false };
bool victory{ false };
char key{};
auto* submission = &sudoku::level1::box2;


void sudoku::runSudoku(bool mainRun)
{
    if (ImGui::BeginMainMenuBar()) {
        if (ImGui::BeginMenu("File")) {
            if (ImGui::MenuItem("Save")) {
                sudoku::saveGame();
            }
            if(ImGui::MenuItem("Load")){
                sudoku::loadGame();
            }
            if (ImGui::MenuItem("Reset Game")) {
                sudoku::initLevel1();
            }
            ImGui::EndMenu();
        }
    }
    ImGui::EndMainMenuBar();
    
    squareOne(submittingEntry, submission, key);
    squareTwo(submittingEntry, submission, key);
    squareThree(submittingEntry,submission, key);
    squareFour(submittingEntry, submission, key);
    squareFive(submittingEntry, submission, key);
    squareSix(submittingEntry, submission, key);
    squareSeven(submittingEntry, submission, key);
    squareEight(submittingEntry, submission, key);
    squareNine(submittingEntry, submission, key);
    
    if (victory)
        sudoku::victoryWindow();

    if (submittingEntry) {
        ImGui::OpenPopup("entry");
        sudoku::entryPopup();
    }
}

void sudoku::victoryWindow(){
    ImGui::SetNextWindowSize(ImVec2(300, 200));
    ImGui::SetNextWindowPos(ImVec2((windowW / 2) - 150, (windowH / 2) - 100));
    ImGui::OpenPopup("victoryWindow");
    if (ImGui::BeginPopup("victoryWindow")) {
        ImGui::Text("You are victorious!! Congratulations");
        ImGui::SetCursorPos(ImVec2(50, 50));
        if (ImGui::Button("Close", ImVec2(200, 100))) {
            victory = false;
            ImGui::CloseCurrentPopup();
        }
        ImGui::EndPopup();
    }
}

bool sudoku::queryVictory() {
    if (
        sudoku::level1::box1 == sudoku::level1::box1AnswerKey &&
        sudoku::level1::box2 == sudoku::level1::box2AnswerKey &&
        sudoku::level1::box3 == sudoku::level1::box3AnswerKey &&
        sudoku::level1::box4 == sudoku::level1::box4AnswerKey &&
        sudoku::level1::box5 == sudoku::level1::box5AnswerKey &&
        sudoku::level1::box6 == sudoku::level1::box6AnswerKey &&
        sudoku::level1::box7 == sudoku::level1::box7AnswerKey &&
        sudoku::level1::box8 == sudoku::level1::box8AnswerKey &&
        sudoku::level1::box9 == sudoku::level1::box9AnswerKey
        )
        return true;
    else
        return false;
}

void sudoku::printEntries() {
    for (auto const& [key, val] : sudoku::level1::box1) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box1AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box2) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box2AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box3) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box3AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box4) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box4AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box5) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box5AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box6) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box6AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box7) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box7AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box8) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box8AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box9) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << std::endl;
    for (auto const& [key, val] : sudoku::level1::box9AnswerKey) {
        std::cout << key << " : " << val << "\n";
    }
    std::cout << "\n\nEnd of Entries" << std::endl;
}

void sudoku::clearMaps() {
    sudoku::level1::box1.clear();
    sudoku::level1::box2.clear();
    sudoku::level1::box3.clear();
    sudoku::level1::box4.clear();
    sudoku::level1::box5.clear();
    sudoku::level1::box6.clear();
    sudoku::level1::box7.clear();
    sudoku::level1::box8.clear();
    sudoku::level1::box9.clear();
}

void sudoku::squareOne(bool& entry, std::map<char, std::string>*& submission, char& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, menuBarSize));
    ImGui::Begin("1", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 1-1
    if (ImGui::Button((sudoku::level1::box1.at('a')).c_str(), "a", buttonSize)) {
        submission = &sudoku::level1::box1;
        key = 'a';
        entry = true;
    }

    // Button 1-2
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box1.at('b')).c_str(), "b", buttonSize)) {
        submission = &sudoku::level1::box1;
        key = 'b';
        entry = true;
    }

    // Button 1-3
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4","c", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "d", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box1.at('e')).c_str(), "e", buttonSize)) {
        submission = &sudoku::level1::box1;
        key = 'e';
        entry = true;
    }

    // Button 1-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box1.at('f')).c_str(), "f", buttonSize)) {
        submission = (&sudoku::level1::box1);
        key = 'f';
        entry = true;
    }

    // Button 1-7
    if (ImGui::Button((sudoku::level1::box1.at('g')).c_str(), "g", buttonSize)) {
        submission = (&sudoku::level1::box1);
        key = 'g';
        entry = true;
    }

    // Button 1-8
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box1.at('h')).c_str(), "h", buttonSize)) {
        submission = (&sudoku::level1::box1);
        key = 'h';
        entry = true;
    }

    // Button 1-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "i", buttonSize);
    ImGui::PopStyleColor(1);
    ImGui::End();
}

void sudoku::squareTwo(bool& entry, std::map<char, std::string>*& submission, char& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(squareSize.x, menuBarSize));
    ImGui::Begin("2", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    
    // Button 2-1
    if (ImGui::Button((sudoku::level1::box2.at('a')).c_str(), "a", buttonSize)) {
        submission = &sudoku::level1::box2;
        key = 'a';
        entry = true;
    }

    // Button 2-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("5", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-3
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box2.at('c')).c_str(), "c", buttonSize)) {
        submission = &sudoku::level1::box2;
        key = 'c';
        entry = true;
    }

    // Button 2-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-5
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("3", "e", buttonSize);
    ImGui::PopStyleColor(1);
    
    // Button 2-6
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("4", "f", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-7
    if (ImGui::Button((sudoku::level1::box2.at('g')).c_str(), "g", buttonSize)) {
        submission = &sudoku::level1::box2;
        key = 'g';
        entry = true;
    }

    // Button 2-8
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("2","h", buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-9
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("1","i", buttonSize);
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
    ImGui::Button("6","d", buttonSize);
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
    ImGui::Button("4","h", buttonSize);
    ImGui::PopStyleColor(1);

    //Button 3-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9","i", buttonSize);
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

void sudoku::squareFive(bool& entry, std::map<char, std::string>*& submission, char& key){
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

void sudoku::saveGame() {
    std::ofstream saveFile{ "savedGame.txt", std::ios::trunc };
    if (saveFile) {
        for (auto const& [key, val] : sudoku::level1::box1) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box2) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box3) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box4) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box5) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box6) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box7) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box8) {
            saveFile << (val + "\n");
        }
        for (auto const& [key, val] : sudoku::level1::box9) {
            saveFile << (val + "\n");
        }
    }
    saveFile.close();
}

void sudoku::loadGame() {
    std::ifstream saveFile{ "savedGame.txt" };
    std::string value;
    if (saveFile)
    {
        for (auto& [key, val] : sudoku::level1::box1) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box2) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box3) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box4) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box5) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box6) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box7) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box8) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
        for (auto& [key, val] : sudoku::level1::box9) {
            std::getline(saveFile, value);
            if (value.empty())
                val = " ";
            else {
                val = value;
            }
        }
    }
    else {
        ImGui::OpenPopup("NoSavedGame");
        if (ImGui::BeginPopup("No Saved Game found")) {
        }

        saveFile.close();
    }
}

void sudoku::entryPopup() {
    if (ImGui::BeginPopup("entry"))
    {
        if (ImGui::Button("Clear", ImVec2(206, buttonHW))) {
            (*submission).at(key) = " ";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            victory = sudoku::queryVictory();
        }
        if (ImGui::Button("1", buttonSize)) {
            (*submission).at(key) = "1";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("2", buttonSize)) {
            (*submission).at(key) = "2";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("3", buttonSize)) {
            (*submission).at(key) = "3";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        if (ImGui::Button("4", buttonSize)) {
            (*submission).at(key) = "4";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("5", buttonSize)) {
            (*submission).at(key) = "5";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("6", buttonSize)) {
            (*submission).at(key) = "6";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        if (ImGui::Button("7", buttonSize)) {
            (*submission).at(key) = "7";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("8", buttonSize)) {
            (*submission).at(key) = "8";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("9", buttonSize)) {
            (*submission).at(key) = "9";
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }

        }
        if (ImGui::Button("print entries")) {
            sudoku::printEntries();
        }
        ImGui::EndPopup();
    }
}

void sudoku::initLevel1()
{
    std::string a;
    a = " ";

    sudoku::clearMaps();

    sudoku::level1::box1.insert(std::make_pair('a', " "));
    sudoku::level1::box1.insert(std::make_pair('b', " "));
    sudoku::level1::box1.insert(std::make_pair('c', "4"));
    sudoku::level1::box1.insert(std::make_pair('d', "9"));
    sudoku::level1::box1.insert(std::make_pair('e', " "));
    sudoku::level1::box1.insert(std::make_pair('f', " "));
    sudoku::level1::box1.insert(std::make_pair('g', " "));
    sudoku::level1::box1.insert(std::make_pair('h', " "));
    sudoku::level1::box1.insert(std::make_pair('i', "3"));
                                                      
    sudoku::level1::box2.insert(std::make_pair('a', " "));
    sudoku::level1::box2.insert(std::make_pair('b', "5"));
    sudoku::level1::box2.insert(std::make_pair('c', " "));
    sudoku::level1::box2.insert(std::make_pair('d', "7"));
    sudoku::level1::box2.insert(std::make_pair('e', "3"));
    sudoku::level1::box2.insert(std::make_pair('f', "4"));
    sudoku::level1::box2.insert(std::make_pair('g', " "));
    sudoku::level1::box2.insert(std::make_pair('h', "2"));
    sudoku::level1::box2.insert(std::make_pair('i', "1"));
                                                      
    sudoku::level1::box3.insert(std::make_pair('a', " "));
    sudoku::level1::box3.insert(std::make_pair('b', " "));
    sudoku::level1::box3.insert(std::make_pair('c', " "));
    sudoku::level1::box3.insert(std::make_pair('d', "6"));
    sudoku::level1::box3.insert(std::make_pair('e', " "));
    sudoku::level1::box3.insert(std::make_pair('f', " "));
    sudoku::level1::box3.insert(std::make_pair('g', " "));
    sudoku::level1::box3.insert(std::make_pair('h', "4"));
    sudoku::level1::box3.insert(std::make_pair('i', "9"));
                                                      
    sudoku::level1::box4.insert(std::make_pair('a', " "));
    sudoku::level1::box4.insert(std::make_pair('b', "3"));
    sudoku::level1::box4.insert(std::make_pair('c', "5"));
    sudoku::level1::box4.insert(std::make_pair('d', " "));
    sudoku::level1::box4.insert(std::make_pair('e', "9"));
    sudoku::level1::box4.insert(std::make_pair('f', " "));
    sudoku::level1::box4.insert(std::make_pair('g', " "));
    sudoku::level1::box4.insert(std::make_pair('h', "7"));
    sudoku::level1::box4.insert(std::make_pair('i', "6"));
                                                      
    sudoku::level1::box5.insert(std::make_pair('a', " "));
    sudoku::level1::box5.insert(std::make_pair('b', "9"));
    sudoku::level1::box5.insert(std::make_pair('c', " "));
    sudoku::level1::box5.insert(std::make_pair('d', " "));
    sudoku::level1::box5.insert(std::make_pair('e', " "));
    sudoku::level1::box5.insert(std::make_pair('f', " "));
    sudoku::level1::box5.insert(std::make_pair('g', " "));
    sudoku::level1::box5.insert(std::make_pair('h', "1"));
    sudoku::level1::box5.insert(std::make_pair('i', " "));
                                                      
    sudoku::level1::box6.insert(std::make_pair('a', "4"));
    sudoku::level1::box6.insert(std::make_pair('b', "8"));
    sudoku::level1::box6.insert(std::make_pair('c', " "));
    sudoku::level1::box6.insert(std::make_pair('d', " "));
    sudoku::level1::box6.insert(std::make_pair('e', "3"));
    sudoku::level1::box6.insert(std::make_pair('f', " "));
    sudoku::level1::box6.insert(std::make_pair('g', "9"));
    sudoku::level1::box6.insert(std::make_pair('h', "2"));
    sudoku::level1::box6.insert(std::make_pair('i', " "));
                                                      
    sudoku::level1::box7.insert(std::make_pair('a', "3"));
    sudoku::level1::box7.insert(std::make_pair('b', "1"));
    sudoku::level1::box7.insert(std::make_pair('c', " "));
    sudoku::level1::box7.insert(std::make_pair('d', " "));
    sudoku::level1::box7.insert(std::make_pair('e', " "));
    sudoku::level1::box7.insert(std::make_pair('f', "9"));
    sudoku::level1::box7.insert(std::make_pair('g', " "));
    sudoku::level1::box7.insert(std::make_pair('h', " "));
    sudoku::level1::box7.insert(std::make_pair('i', " "));
                                                      
    sudoku::level1::box8.insert(std::make_pair('a', "9"));
    sudoku::level1::box8.insert(std::make_pair('b', "7"));
    sudoku::level1::box8.insert(std::make_pair('c', " "));
    sudoku::level1::box8.insert(std::make_pair('d', "1"));
    sudoku::level1::box8.insert(std::make_pair('e', "8"));
    sudoku::level1::box8.insert(std::make_pair('f', "2"));
    sudoku::level1::box8.insert(std::make_pair('g', " "));
    sudoku::level1::box8.insert(std::make_pair('h', "6"));
    sudoku::level1::box8.insert(std::make_pair('i', " "));
                                                      
    sudoku::level1::box9.insert(std::make_pair('a', "2"));
    sudoku::level1::box9.insert(std::make_pair('b', " "));
    sudoku::level1::box9.insert(std::make_pair('c', " "));
    sudoku::level1::box9.insert(std::make_pair('d', " "));
    sudoku::level1::box9.insert(std::make_pair('e', " "));
    sudoku::level1::box9.insert(std::make_pair('f', "3"));
    sudoku::level1::box9.insert(std::make_pair('g', "1"));
    sudoku::level1::box9.insert(std::make_pair('h', " "));
    sudoku::level1::box9.insert(std::make_pair('i', " "));
}

void sudoku::initLevel1AnswerKey() {
    
    sudoku::level1::box1AnswerKey.insert(std::make_pair('a', "2"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('b', "6"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('c', "4"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('d', "9"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('e', "8"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('f', "1"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('g', "7"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('h', "5"));
    sudoku::level1::box1AnswerKey.insert(std::make_pair('i', "3"));

    sudoku::level1::box2AnswerKey.insert(std::make_pair('a', "8"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('b', "5"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('c', "9"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('d', "7"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('e', "3"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('f', "4"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('g', "6"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('h', "2"));
    sudoku::level1::box2AnswerKey.insert(std::make_pair('i', "1"));

    sudoku::level1::box3AnswerKey.insert(std::make_pair('a', "3"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('b', "1"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('c', "7"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('d', "6"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('e', "5"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('f', "2"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('g', "8"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('h', "4"));
    sudoku::level1::box3AnswerKey.insert(std::make_pair('i', "9"));

    sudoku::level1::box4AnswerKey.insert(std::make_pair('a', "1"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('b', "3"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('c', "5"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('d', "8"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('e', "9"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('f', "2"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('g', "4"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('h', "7"));
    sudoku::level1::box4AnswerKey.insert(std::make_pair('i', "6"));

    sudoku::level1::box5AnswerKey.insert(std::make_pair('a', "2"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('b', "9"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('c', "7"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('d', "5"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('e', "4"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('f', "6"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('g', "3"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('h', "1"));
    sudoku::level1::box5AnswerKey.insert(std::make_pair('i', "8"));

    sudoku::level1::box6AnswerKey.insert(std::make_pair('a', "4"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('b', "8"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('c', "6"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('d', "7"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('e', "3"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('f', "1"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('g', "9"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('h', "2"));
    sudoku::level1::box6AnswerKey.insert(std::make_pair('i', "5"));

    sudoku::level1::box7AnswerKey.insert(std::make_pair('a', "3"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('b', "1"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('c', "8"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('d', "6"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('e', "4"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('f', "9"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('g', "5"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('h', "2"));
    sudoku::level1::box7AnswerKey.insert(std::make_pair('i', "7"));

    sudoku::level1::box8AnswerKey.insert(std::make_pair('a', "9"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('b', "7"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('c', "5"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('d', "1"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('e', "8"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('f', "2"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('g', "4"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('h', "6"));
    sudoku::level1::box8AnswerKey.insert(std::make_pair('i', "3"));

    sudoku::level1::box9AnswerKey.insert(std::make_pair('a', "2"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('b', "6"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('c', "4"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('d', "5"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('e', "7"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('f', "3"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('g', "1"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('h', "9"));
    sudoku::level1::box9AnswerKey.insert(std::make_pair('i', "8"));
}
