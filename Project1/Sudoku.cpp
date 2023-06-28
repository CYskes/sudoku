#include "Sudoku.h"
#include <iostream>
#include <stdio.h>
#include <string>

#pragma warning(disable: 4996)

bool dumbdumb = false;
auto submission{ sudoku::level1::box2[0] };
int key{ 3 };

void sudoku::entry() {
    
}

void sudoku::runSudoku(bool mainRun)
{
    static ImGuiTableFlags flags = ImGuiTableFlags_RowBg;
    
    squareOne(dumbdumb, submission, key);

    squareTwo(dumbdumb, submission, key);

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2/3, 0));
    ImGui::Begin("3", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, windowHW * 1/3));
    ImGui::Begin("4", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1/3, windowHW * 1/3));
    ImGui::Begin("5", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2/3, windowHW * 1/3));
    ImGui::Begin("6", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    ImGui::End();ImGui::End();ImGui::End(); ImGui::End();
    if (dumbdumb) {
        ImGui::OpenPopup("entry");
    }
    if (ImGui::BeginPopup("entry")) {
        if (ImGui::Button("1", buttonSize)) {
            //submission.at(key) = (std::string("1") + "###" + (char)(48 + key));
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::SameLine();
        if (ImGui::Button("2", buttonSize)) {
            submission = ("2" + key);
            ImGui::CloseCurrentPopup();
            dumbdumb = false;
        }
        ImGui::EndPopup();
    }
}



void sudoku::squareOne(bool& entry, std::string& submission, int& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 0, windowHW * 0));
    ImGui::Begin("1", (bool*)nullptr , ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("1", ImVec2(buttonHW, buttonHW));
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


// Added buttonCy to help with ID key issues, swap all buttons to ButtonCy
void sudoku::squareTwo(bool& entry, std::string& submission, int& key)
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 0));
    ImGui::Begin("2", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    // Button 2-1
    if (ImGui::Button((sudoku::level1::box2.at(0) + "###" + "0").c_str(), buttonSize)) {
        submission = sudoku::level1::box2[0];
        key = 0;
        entry = true;
    }
    // Button 2-2
    ImGui::SameLine(); 
    if (ImGui::Button((sudoku::level1::box2.at(1) + "###" + "1").c_str(), buttonSize)) {
        submission = sudoku::level1::box2[1];
        key = 1;
        entry = true;
    }
    // Button 2-3
    ImGui::SameLine(); ImGui::Button("3", buttonSize);
    // Button 2-4
    ImGui::Button("4", buttonSize);
    // Button 2-5
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box2.at(4) + "###" + "4").c_str(), buttonSize)) {
        submission = sudoku::level1::box2[4];
        key = 4;
        entry = true;
    }
    // Button 2-6
    ImGui::SameLine();
    if (ImGui::Button((sudoku::level1::box2.at(5) + "###" + "5").c_str(), buttonSize)) {
        submission = sudoku::level1::box2.at(5);
        key = 5;
        entry = true;
    }
    ImGui::Button("7", buttonSize);
    ImGui::SameLine(); ImGui::Button("8", buttonSize);
    ImGui::SameLine(); ImGui::Button("9", buttonSize);
    ImGui::End();
}

void sudoku::selectionWindow()
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 0, windowHW * 0));
    ImGui::Begin("1", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    ImGui::Button("1", ImVec2(buttonHW, buttonHW));
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

void sudoku::init()
{
    std::string a;
    a = " ";
    for (int i{ 0 }; i < 9; i++) {
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
