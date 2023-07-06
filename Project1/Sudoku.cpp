#include "Sudoku.h"
#include <iostream>
#include <stdio.h>
#include <string>

#pragma warning(disable: 4996)

// Buttons are all using ButtonCy to avoid naming conflicts with standard button function caused by multiple instances of " ".

bool dumbdumb = false;
char key{};
auto* submission = &sudoku::level1::box2;


void sudoku::runSudoku(bool mainRun)
{
    static ImGuiTableFlags flags = ImGuiTableFlags_RowBg;
    
    squareOne(dumbdumb, submission, key);
    squareTwo(dumbdumb, submission, key);

    /*squareThree(dumbdumb,submission, key);
    squareFour(dumbdumb, submission, key);
    squareFive(dumbdumb, submission, key);
    squareSix(dumbdumb, submission, key);
    squareSeven(dumbdumb,submission, key);
    squareEight(dumbdumb, submission, key);
    squareNine(dumbdumb, submission, key);*/
    

    if (dumbdumb) {
        ImGui::OpenPopup("entry");
    }
    if (ImGui::BeginPopup("entry")) {
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



void sudoku::squareOne(bool& entry, std::map<char, std::string>* submission, char& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::Begin("1", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 1-1
    if (ImGui::Button((sudoku::level1::box1.at('a')).c_str(), "a", buttonSize)) {
        submission = (&sudoku::level1::box1);
        key = 'a';
        entry = true;
    }

    // Button 1-2
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box1.at('b')).c_str(), "b", buttonSize)) {
        submission = (&sudoku::level1::box1);
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
        submission = (&sudoku::level1::box1);
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


void sudoku::squareTwo(bool& entry, std::map<char, std::string>* submission, char& key)
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

/*
void sudoku::squareThree(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 0));
    ImGui::Begin("3", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("17", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareFour(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, windowHW * 1 / 3));
    ImGui::Begin("4", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("44", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    submission = sudoku::level1::box3;
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareFive(bool& x, std::map<char, std::string>& submission, char& key){
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 1 / 3));
    ImGui::Begin("5", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("55", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareSix(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 1 / 3));
    ImGui::Begin("6", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("66", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareSeven(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, windowHW * 2 / 3));
    ImGui::Begin("7", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("77", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareEight(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 2 / 3));
    ImGui::Begin("8", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("88", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}

void sudoku::squareNine(bool& x, std::map<char, std::string>& submission, char& key) {
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2 / 3, windowHW * 2 / 3));
    ImGui::Begin("9", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("99", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}
*/

void sudoku::init()
{
    std::string a;
    a = " ";
    /* Tried using a for loop, think it was broken as map was throwing out of range exceptions.
    I have switched to explicit initialization.  Hopefull it works, then i can fix the loop later.


    * for(char i = 'a'; i < 109; i++)
    * sudoku::level1::box1.insert(std::make_pair(i, a));
    sudoku::level1::box2.insert(std::make_pair(i, a));
    sudoku::level1::box3.insert(std::make_pair(i, a));
    sudoku::level1::box4.insert(std::make_pair(i, a));
    sudoku::level1::box5.insert(std::make_pair(i, a));
    sudoku::level1::box6.insert(std::make_pair(i, a));
    sudoku::level1::box7.insert(std::make_pair(i, a));
    sudoku::level1::box8.insert(std::make_pair(i, a));
    sudoku::level1::box9.insert(std::make_pair(i, a));
    
    */

    sudoku::level1::box1.insert(std::make_pair('a', a));
    sudoku::level1::box1.insert(std::make_pair('b', a));
    sudoku::level1::box1.insert(std::make_pair('c', a));
    sudoku::level1::box1.insert(std::make_pair('d', a));
    sudoku::level1::box1.insert(std::make_pair('e', a));
    sudoku::level1::box1.insert(std::make_pair('f', a));
    sudoku::level1::box1.insert(std::make_pair('g', a));
    sudoku::level1::box1.insert(std::make_pair('h', a));
    sudoku::level1::box1.insert(std::make_pair('i', a));

    sudoku::level1::box2.insert(std::make_pair('a', a));
    sudoku::level1::box2.insert(std::make_pair('b', a));
    sudoku::level1::box2.insert(std::make_pair('c', a));
    sudoku::level1::box2.insert(std::make_pair('d', a));
    sudoku::level1::box2.insert(std::make_pair('e', a));
    sudoku::level1::box2.insert(std::make_pair('f', a));
    sudoku::level1::box2.insert(std::make_pair('g', a));
    sudoku::level1::box2.insert(std::make_pair('h', a));
    sudoku::level1::box2.insert(std::make_pair('i', a));

    sudoku::level1::box3.insert(std::make_pair('a', a));
    sudoku::level1::box3.insert(std::make_pair('b', a));
    sudoku::level1::box3.insert(std::make_pair('c', a));
    sudoku::level1::box3.insert(std::make_pair('d', a));
    sudoku::level1::box3.insert(std::make_pair('e', a));
    sudoku::level1::box3.insert(std::make_pair('f', a));
    sudoku::level1::box3.insert(std::make_pair('g', a));
    sudoku::level1::box3.insert(std::make_pair('h', a));
    sudoku::level1::box3.insert(std::make_pair('i', a));

    sudoku::level1::box4.insert(std::make_pair('a', a));
    sudoku::level1::box4.insert(std::make_pair('b', a));
    sudoku::level1::box4.insert(std::make_pair('c', a));
    sudoku::level1::box4.insert(std::make_pair('d', a));
    sudoku::level1::box4.insert(std::make_pair('e', a));
    sudoku::level1::box4.insert(std::make_pair('f', a));
    sudoku::level1::box4.insert(std::make_pair('g', a));
    sudoku::level1::box4.insert(std::make_pair('h', a));
    sudoku::level1::box4.insert(std::make_pair('i', a));

    sudoku::level1::box5.insert(std::make_pair('a', a));
    sudoku::level1::box5.insert(std::make_pair('b', a));
    sudoku::level1::box5.insert(std::make_pair('c', a));
    sudoku::level1::box5.insert(std::make_pair('d', a));
    sudoku::level1::box5.insert(std::make_pair('e', a));
    sudoku::level1::box5.insert(std::make_pair('f', a));
    sudoku::level1::box5.insert(std::make_pair('g', a));
    sudoku::level1::box5.insert(std::make_pair('h', a));
    sudoku::level1::box5.insert(std::make_pair('i', a));

    sudoku::level1::box6.insert(std::make_pair('a', a));
    sudoku::level1::box6.insert(std::make_pair('b', a));
    sudoku::level1::box6.insert(std::make_pair('c', a));
    sudoku::level1::box6.insert(std::make_pair('d', a));
    sudoku::level1::box6.insert(std::make_pair('e', a));
    sudoku::level1::box6.insert(std::make_pair('f', a));
    sudoku::level1::box6.insert(std::make_pair('g', a));
    sudoku::level1::box6.insert(std::make_pair('h', a));
    sudoku::level1::box6.insert(std::make_pair('i', a));

    sudoku::level1::box7.insert(std::make_pair('a', a));
    sudoku::level1::box7.insert(std::make_pair('b', a));
    sudoku::level1::box7.insert(std::make_pair('c', a));
    sudoku::level1::box7.insert(std::make_pair('d', a));
    sudoku::level1::box7.insert(std::make_pair('e', a));
    sudoku::level1::box7.insert(std::make_pair('f', a));
    sudoku::level1::box7.insert(std::make_pair('g', a));
    sudoku::level1::box7.insert(std::make_pair('h', a));
    sudoku::level1::box7.insert(std::make_pair('i', a));

    sudoku::level1::box8.insert(std::make_pair('a', a));
    sudoku::level1::box8.insert(std::make_pair('b', a));
    sudoku::level1::box8.insert(std::make_pair('c', a));
    sudoku::level1::box8.insert(std::make_pair('d', a));
    sudoku::level1::box8.insert(std::make_pair('e', a));
    sudoku::level1::box8.insert(std::make_pair('f', a));
    sudoku::level1::box8.insert(std::make_pair('g', a));
    sudoku::level1::box8.insert(std::make_pair('h', a));
    sudoku::level1::box8.insert(std::make_pair('i', a));

    sudoku::level1::box9.insert(std::make_pair('a', a));
    sudoku::level1::box9.insert(std::make_pair('b', a));
    sudoku::level1::box9.insert(std::make_pair('c', a));
    sudoku::level1::box9.insert(std::make_pair('d', a));
    sudoku::level1::box9.insert(std::make_pair('e', a));
    sudoku::level1::box9.insert(std::make_pair('f', a));
    sudoku::level1::box9.insert(std::make_pair('g', a));
    sudoku::level1::box9.insert(std::make_pair('h', a));
    sudoku::level1::box9.insert(std::make_pair('i', a));
}
