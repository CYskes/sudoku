#include "Sudoku.h"
#include "level1.h"
#include <iostream>
#include <stdio.h>
#include <string>
#include <fstream>

#pragma warning(disable: 4996)

// Buttons are all using ButtonCy to avoid naming conflicts with standard button function caused by multiple instances of " ".

/*
To do:
- levels
- players
*/


// I will likely need to break into classes so that each player is it's one rendition of the game/level

// Player could be a class passed into runSudoku which would be able to pull all memory data from that.
// Switching players would prompt it to feed run sudoku with a new set of data.  player class would contain a level save file,
// raw level data could be pulled from the level.h file.

 


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
                switch (currentLevel)
                {
                case 1: level1::initLevel1(); break;
                case 2: break;
                    
                }
            }
            ImGui::EndMenu();
        }
    }
    ImGui::EndMainMenuBar();
    
   /* switch (currentLevel)
    {
    case 1: level1::runLevel1(sudoku::submittingEntry, sudoku::key); break;
    default:
        break;
    }*/

    level1::runLevel1(sudoku::submittingEntry, sudoku::key);
    
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
    switch (sudoku::currentLevel)
    {
    case 1: return level1::queryVictory(); break;
    
    }
}

void sudoku::printEntries() {
    if (sudoku::level1::initLevel->empty())
        std::cout << "Container is empty" << std::endl;
    for (auto const& [key, val] : *sudoku::level1::initLevel) {
        std::cout << key << " : " << val << "\n";
    }
}

void sudoku::saveGame() {
    std::string saveName{ "savedGame" };
    saveName += currentLevel + ".txt";
    std::ofstream saveFile{ saveName, std::ios::trunc };
    if (saveFile) {
        for (auto const& [key, val] : *sudoku::level1::initLevel) {
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
        for (auto& [key, val] : *sudoku::level1::initLevel) {
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
            level1::initLevel->at(key) = std::string(" ");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            victory = sudoku::queryVictory();
        }
        if (ImGui::Button("1", buttonSize)) {
            level1::initLevel->at(sudoku::key) = std::string("1");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("2", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("2");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("3", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("3");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        if (ImGui::Button("4", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("4");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("5", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("5");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("6", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("6");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        if (ImGui::Button("7", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("7");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("8", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("8");
            ImGui::CloseCurrentPopup();
            submittingEntry = false;
            if (sudoku::queryVictory()) {
                victory = true;
            }
        }
        ImGui::SameLine();
        if (ImGui::Button("9", buttonSize)) {
            (*sudoku::submission).at(key) = std::string("9");
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
