#include "Sudoku.h"
#include <iostream>
#include <stdio.h>

#pragma warning(disable: 4996)

void sudoku::runSudoku(bool mainRun)
{
    static ImGuiTableFlags flags = ImGuiTableFlags_RowBg;
    static ImVec2 cellPadding(0,0);

    squareOne();

    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 1/3, 0));
    ImGui::Begin("2", (bool*)mainRun, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize | ImGuiWindowFlags_NoDecoration);
    /*if (ImGui::BeginTable("2", 3, 0, squareSize)) {
        for (int row = 0; row < 4; row++) {
            ImGui::TableNextRow();
            ImGui::TableNextColumn();
            ImGui::Text("Row %d", row);
            ImGui::TableNextColumn();
            ImGui::Text("Some contents");
            ImGui::TableNextColumn();
            ImGui::Text("123.456");
        }
        ImGui::EndTable();
    }*/
    
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

    ImGui::End();ImGui::End();ImGui::End(); ImGui::End(); ImGui::End();
}



void sudoku::squareOne()
{
    ImGui::SetNextWindowSize(squareSize);
    ImGui::SetNextWindowPos(ImVec2(windowHW * 0, windowHW * 0));
    ImGui::Begin("1", (bool*)nullptr , ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);
    //ImGui::SetNextWindowPos(ImVec2(0, 0));
    ImGui::Button("1", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("2", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("3", ImVec2(100, 100));
    ImGui::Button("4", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("5", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("6", ImVec2(100, 100));
    ImGui::Button("7", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("8", ImVec2(100, 100));
    ImGui::SameLine(); ImGui::Button("9", ImVec2(100, 100));
    ImGui::End();
}
