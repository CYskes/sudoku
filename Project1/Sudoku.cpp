#include "Sudoku.h"
#include <iostream>
#include <stdio.h>
#include <string>

#pragma warning(disable: 4996)

// Buttons are all using ButtonCy to avoid naming conflicts with standard button function caused by multiple instances of " ".

/*
To do:
- answer key check
- save function
- reset button
- levels
*/


bool dumbdumb = false;
char key{};
auto* submission = &sudoku::level1::box2;


void sudoku::runSudoku(bool mainRun)
{
    static ImGuiTableFlags flags = ImGuiTableFlags_RowBg;
    
    squareOne(dumbdumb, submission, key);
    squareTwo(dumbdumb, submission, key);
    squareThree(dumbdumb,submission, key);
    squareFour(dumbdumb, submission, key);
    squareFive(dumbdumb, submission, key);
    squareSix(dumbdumb, submission, key);
    squareSeven(dumbdumb, submission, key);
    squareEight(dumbdumb, submission, key);
    squareNine(dumbdumb, submission, key);
    

    if (dumbdumb) {
        ImGui::OpenPopup("entry");
    }
    if (ImGui::BeginPopup("entry")) {
        if (ImGui::Button("Clear", ImVec2(206, buttonHW))) {
            (*submission).at(key) = " ";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        if (ImGui::Button("1", buttonSize)) {
            (*submission).at(key) = "1";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::SameLine();
        if (ImGui::Button("2", buttonSize)) {
            (*submission).at(key) = "2";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::SameLine();
        if (ImGui::Button("3", buttonSize)) {
            (*submission).at(key) = "3";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        if (ImGui::Button("4", buttonSize)) {
            (*submission).at(key) = "4";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::SameLine();
        if (ImGui::Button("5", buttonSize)) {
            (*submission).at(key) = "5";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::SameLine();
        if (ImGui::Button("6", buttonSize)) {
            (*submission).at(key) = "6";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        if (ImGui::Button("7", buttonSize)) {
            (*submission).at(key) = "7";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }ImGui::SameLine();
        if (ImGui::Button("8", buttonSize)) {
            (*submission).at(key) = "8";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }ImGui::SameLine();
        if (ImGui::Button("9", buttonSize)) {
            (*submission).at(key) = "9";
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::EndPopup();
    }
}



void sudoku::squareOne(bool& entry, std::map<char, std::string>*& submission, char& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, 0));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 0));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 0));
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
    ImGui::SetNextWindowPos(ImVec2(0, windowHW * 1 / 3));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 1 / 3));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 1 / 3));
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
    ImGui::SetNextWindowPos(ImVec2(0, windowHW * 2 / 3));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 2 / 3));
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
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 2 / 3));
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

void sudoku::init()
{
    std::string a;
    a = " ";

    for (char i = 'a'; i < 106; i++) {
        sudoku::level1::box1.insert(std::make_pair(i, a));
        sudoku::level1::box2.insert(std::make_pair(i, a));
        sudoku::level1::box3.insert(std::make_pair(i, a));
        sudoku::level1::box4.insert(std::make_pair(i, a));
        sudoku::level1::box5.insert(std::make_pair(i, a));
        sudoku::level1::box6.insert(std::make_pair(i, a));
        sudoku::level1::box7.insert(std::make_pair(i, a));
        sudoku::level1::box8.insert(std::make_pair(i, a));
        sudoku::level1::box9.insert(std::make_pair(i, a));
    }
}
