#include "Sudoku.h"
#include <iostream>
#include <stdio.h>
#include <string>

#pragma warning(disable: 4996)

const char* sudoku::entry() {
    const char* selection{ " " };
}

void sudoku::runSudoku(bool mainRun)
{
    static ImGuiTableFlags flags = ImGuiTableFlags_RowBg;
    static ImVec2 cellPadding(0,0);

    squareOne();

    squareTwo();

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 2/3, 0));
    ImGui::Begin("3", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
   /* ImGui::BeginTable("3", 3);
    for (int i{ 0 }; i < 9; i++) {
        ImGui::TableNextRow;
        ImGui::Text("%", i);
    }*/

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
}



void sudoku::squareOne()
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 0, windowHW * 0));
    ImGui::Begin("1", (bool*)nullptr , ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    //ImGui::SetNextWindowPos(ImVec2(0, 0));
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

void sudoku::squareTwo()
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1 / 3, windowHW * 0));
    ImGui::Begin("2", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    if (ImGui::Button(sudoku::level1::box2[0], ImVec2(buttonHW, buttonHW))) {
        sudoku::level1::box2[0] = "1";

    }

    ImGui::SameLine(); ImGui::Button("2", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(buttonHW, buttonHW));
    ImGui::Button("4", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button(" ", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button(" ", ImVec2(buttonHW, buttonHW));
    ImGui::Button("7", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(buttonHW, buttonHW));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(buttonHW, buttonHW));
    ImGui::End();
}
