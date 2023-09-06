#include <string>
#include "level1.h"
#include "Sudoku.h"

// need to change the storage structure.  Moving from level1::box1 -> level1::initLevel(makepair("a1", " "));

using namespace sudoku;

void sudoku::level1::initLevel1()
{
    level1::clearMaps();

    sudoku::submission = level1::initLevel;

    level1::initLevel->insert(std::make_pair("a1", " "));
    level1::initLevel->insert(std::make_pair("b1", " "));
    level1::initLevel->insert(std::make_pair("c1", "4"));
    level1::initLevel->insert(std::make_pair("d1", "9"));
    level1::initLevel->insert(std::make_pair("e1", " "));
    level1::initLevel->insert(std::make_pair("f1", " "));
    level1::initLevel->insert(std::make_pair("g1", " "));
    level1::initLevel->insert(std::make_pair("h1", " "));
    level1::initLevel->insert(std::make_pair("i1", "3"));
                                 
    level1::initLevel->insert(std::make_pair("a2", " "));
    level1::initLevel->insert(std::make_pair("b2", "5"));
    level1::initLevel->insert(std::make_pair("c2", " "));
    level1::initLevel->insert(std::make_pair("d2", "7"));
    level1::initLevel->insert(std::make_pair("e2", "3"));
    level1::initLevel->insert(std::make_pair("f2", "4"));
    level1::initLevel->insert(std::make_pair("g2", " "));
    level1::initLevel->insert(std::make_pair("h2", "2"));
    level1::initLevel->insert(std::make_pair("i2", "1"));
                                      
    level1::initLevel->insert(std::make_pair("a3", " "));
    level1::initLevel->insert(std::make_pair("b3", " "));
    level1::initLevel->insert(std::make_pair("c3", " "));
    level1::initLevel->insert(std::make_pair("d3", "6"));
    level1::initLevel->insert(std::make_pair("e3", " "));
    level1::initLevel->insert(std::make_pair("f3", " "));
    level1::initLevel->insert(std::make_pair("g3", " "));
    level1::initLevel->insert(std::make_pair("h3", "4"));
    level1::initLevel->insert(std::make_pair("i3", "9"));
                                     
    level1::initLevel->insert(std::make_pair("a4", " "));
    level1::initLevel->insert(std::make_pair("b4", "3"));
    level1::initLevel->insert(std::make_pair("c4", "5"));
    level1::initLevel->insert(std::make_pair("d4", " "));
    level1::initLevel->insert(std::make_pair("e4", "9"));
    level1::initLevel->insert(std::make_pair("f4", " "));
    level1::initLevel->insert(std::make_pair("g4", " "));
    level1::initLevel->insert(std::make_pair("h4", "7"));
    level1::initLevel->insert(std::make_pair("i4", "6"));
                               
    level1::initLevel->insert(std::make_pair("a5", " "));
    level1::initLevel->insert(std::make_pair("b5", "9"));
    level1::initLevel->insert(std::make_pair("c5", " "));
    level1::initLevel->insert(std::make_pair("d5", " "));
    level1::initLevel->insert(std::make_pair("e5", " "));
    level1::initLevel->insert(std::make_pair("f5", " "));
    level1::initLevel->insert(std::make_pair("g5", " "));
    level1::initLevel->insert(std::make_pair("h5", "1"));
    level1::initLevel->insert(std::make_pair("i5", " "));
                                  
    level1::initLevel->insert(std::make_pair("a6", "4"));
    level1::initLevel->insert(std::make_pair("b6", "8"));
    level1::initLevel->insert(std::make_pair("c6", " "));
    level1::initLevel->insert(std::make_pair("d6", " "));
    level1::initLevel->insert(std::make_pair("e6", "3"));
    level1::initLevel->insert(std::make_pair("f6", " "));
    level1::initLevel->insert(std::make_pair("g6", "9"));
    level1::initLevel->insert(std::make_pair("h6", "2"));
    level1::initLevel->insert(std::make_pair("i6", " "));
                                        
    level1::initLevel->insert(std::make_pair("a7", "3"));
    level1::initLevel->insert(std::make_pair("b7", "1"));
    level1::initLevel->insert(std::make_pair("c7", " "));
    level1::initLevel->insert(std::make_pair("d7", " "));
    level1::initLevel->insert(std::make_pair("e7", " "));
    level1::initLevel->insert(std::make_pair("f7", "9"));
    level1::initLevel->insert(std::make_pair("g7", " "));
    level1::initLevel->insert(std::make_pair("h7", " "));
    level1::initLevel->insert(std::make_pair("i7", " "));
                                        
    level1::initLevel->insert(std::make_pair("a8", "9"));
    level1::initLevel->insert(std::make_pair("b8", "7"));
    level1::initLevel->insert(std::make_pair("c8", " "));
    level1::initLevel->insert(std::make_pair("d8", "1"));
    level1::initLevel->insert(std::make_pair("e8", "8"));
    level1::initLevel->insert(std::make_pair("f8", "2"));
    level1::initLevel->insert(std::make_pair("g8", " "));
    level1::initLevel->insert(std::make_pair("h8", "6"));
    level1::initLevel->insert(std::make_pair("i8", " "));
                                           
    level1::initLevel->insert(std::make_pair("a9", "2"));
    level1::initLevel->insert(std::make_pair("b9", " "));
    level1::initLevel->insert(std::make_pair("c9", " "));
    level1::initLevel->insert(std::make_pair("d9", " "));
    level1::initLevel->insert(std::make_pair("e9", " "));
    level1::initLevel->insert(std::make_pair("f9", "3"));
    level1::initLevel->insert(std::make_pair("g9", "1"));
    level1::initLevel->insert(std::make_pair("h9", " "));
    level1::initLevel->insert(std::make_pair("i9", " "));

}

void level1::initAnswerKey() {

   level1::AnswerKey.insert(std::make_pair("a1", "2"));
   level1::AnswerKey.insert(std::make_pair("b1", "6"));
   level1::AnswerKey.insert(std::make_pair("c1", "4"));
   level1::AnswerKey.insert(std::make_pair("d1", "9"));
   level1::AnswerKey.insert(std::make_pair("e1", "8"));
   level1::AnswerKey.insert(std::make_pair("f1", "1"));
   level1::AnswerKey.insert(std::make_pair("g1", "7"));
   level1::AnswerKey.insert(std::make_pair("h1", "5"));
   level1::AnswerKey.insert(std::make_pair("i1", "3"));
                                         
   level1::AnswerKey.insert(std::make_pair("a2", "8"));
   level1::AnswerKey.insert(std::make_pair("b2", "5"));
   level1::AnswerKey.insert(std::make_pair("c2", "9"));
   level1::AnswerKey.insert(std::make_pair("d2", "7"));
   level1::AnswerKey.insert(std::make_pair("e2", "3"));
   level1::AnswerKey.insert(std::make_pair("f2", "4"));
   level1::AnswerKey.insert(std::make_pair("g2", "6"));
   level1::AnswerKey.insert(std::make_pair("h2", "2"));
   level1::AnswerKey.insert(std::make_pair("i2", "1"));
                                       
   level1::AnswerKey.insert(std::make_pair("a3", "3"));
   level1::AnswerKey.insert(std::make_pair("b3", "1"));
   level1::AnswerKey.insert(std::make_pair("c3", "7"));
   level1::AnswerKey.insert(std::make_pair("d3", "6"));
   level1::AnswerKey.insert(std::make_pair("e3", "5"));
   level1::AnswerKey.insert(std::make_pair("f3", "2"));
   level1::AnswerKey.insert(std::make_pair("g3", "8"));
   level1::AnswerKey.insert(std::make_pair("h3", "4"));
   level1::AnswerKey.insert(std::make_pair("i3", "9"));
                                          
   level1::AnswerKey.insert(std::make_pair("a4", "1"));
   level1::AnswerKey.insert(std::make_pair("b4", "3"));
   level1::AnswerKey.insert(std::make_pair("c4", "5"));
   level1::AnswerKey.insert(std::make_pair("d4", "8"));
   level1::AnswerKey.insert(std::make_pair("e4", "9"));
   level1::AnswerKey.insert(std::make_pair("f4", "2"));
   level1::AnswerKey.insert(std::make_pair("g4", "4"));
   level1::AnswerKey.insert(std::make_pair("h4", "7"));
   level1::AnswerKey.insert(std::make_pair("i4", "6"));
                                        
   level1::AnswerKey.insert(std::make_pair("a5", "2"));
   level1::AnswerKey.insert(std::make_pair("b5", "9"));
   level1::AnswerKey.insert(std::make_pair("c5", "7"));
   level1::AnswerKey.insert(std::make_pair("d5", "5"));
   level1::AnswerKey.insert(std::make_pair("e5", "4"));
   level1::AnswerKey.insert(std::make_pair("f5", "6"));
   level1::AnswerKey.insert(std::make_pair("g5", "3"));
   level1::AnswerKey.insert(std::make_pair("h5", "1"));
   level1::AnswerKey.insert(std::make_pair("i5", "8"));
                                      
   level1::AnswerKey.insert(std::make_pair("a6", "4"));
   level1::AnswerKey.insert(std::make_pair("b6", "8"));
   level1::AnswerKey.insert(std::make_pair("c6", "6"));
   level1::AnswerKey.insert(std::make_pair("d6", "7"));
   level1::AnswerKey.insert(std::make_pair("e6", "3"));
   level1::AnswerKey.insert(std::make_pair("f6", "1"));
   level1::AnswerKey.insert(std::make_pair("g6", "9"));
   level1::AnswerKey.insert(std::make_pair("h6", "2"));
   level1::AnswerKey.insert(std::make_pair("i6", "5"));
                                           
   level1::AnswerKey.insert(std::make_pair("a7", "3"));
   level1::AnswerKey.insert(std::make_pair("b7", "1"));
   level1::AnswerKey.insert(std::make_pair("c7", "8"));
   level1::AnswerKey.insert(std::make_pair("d7", "6"));
   level1::AnswerKey.insert(std::make_pair("e7", "4"));
   level1::AnswerKey.insert(std::make_pair("f7", "9"));
   level1::AnswerKey.insert(std::make_pair("g7", "5"));
   level1::AnswerKey.insert(std::make_pair("h7", "2"));
   level1::AnswerKey.insert(std::make_pair("i7", "7"));
                                           
   level1::AnswerKey.insert(std::make_pair("a8", "9"));
   level1::AnswerKey.insert(std::make_pair("b8", "7"));
   level1::AnswerKey.insert(std::make_pair("c8", "5"));
   level1::AnswerKey.insert(std::make_pair("d8", "1"));
   level1::AnswerKey.insert(std::make_pair("e8", "8"));
   level1::AnswerKey.insert(std::make_pair("f8", "2"));
   level1::AnswerKey.insert(std::make_pair("g8", "4"));
   level1::AnswerKey.insert(std::make_pair("h8", "6"));
   level1::AnswerKey.insert(std::make_pair("i8", "3"));
                                     
   level1::AnswerKey.insert(std::make_pair("a9", "2"));
   level1::AnswerKey.insert(std::make_pair("b9", "6"));
   level1::AnswerKey.insert(std::make_pair("c9", "4"));
   level1::AnswerKey.insert(std::make_pair("d9", "5"));
   level1::AnswerKey.insert(std::make_pair("e9", "7"));
   level1::AnswerKey.insert(std::make_pair("f9", "3"));
   level1::AnswerKey.insert(std::make_pair("g9", "1"));
   level1::AnswerKey.insert(std::make_pair("h9", "9"));
   level1::AnswerKey.insert(std::make_pair("i9", "8"));
}

bool level1::queryVictory() {
    if (
        *level1::initLevel == level1::AnswerKey
        )
        return true;
    else
        return false;
}

void level1::clearMaps() {
    level1::initLevel->clear();
}

void level1::runLevel1(bool& entryBool, std::string& key) {
    if (firstPass) {
        initLevel1();
        initAnswerKey();
        firstPass = false;
    }

    level1::squareOne(entryBool, key);
    level1::squareTwo(entryBool, key);
    level1::squareThree(entryBool, key);
    level1::squareFour(entryBool, key);
    level1::squareFive(entryBool, key);
    level1::squareSix(entryBool, key);
    level1::squareSeven(entryBool, key);
    level1::squareEight(entryBool, key);
    level1::squareNine(entryBool, key);
}

void level1::squareOne(bool& entry, std::string& key)
{
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, sudoku::menuBarSize));
    ImGui::Begin("1", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 1-1
    if (ImGui::Button((level1::initLevel->at("a1")).c_str(), "a1", sudoku::buttonSize)) {
        key = "a1";
        sudoku::key = "a1";
        entry = true;
    }

    // Button 1-2
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("b1")).c_str(), "b1", sudoku::buttonSize)) {
        key = "b1";
        entry = true;
    }

    // Button 1-3
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "c1", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "d1", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 1-5
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("e1")).c_str(), "e1", sudoku::buttonSize)) {
        key = "e1";
        entry = true;
    }

    // Button 1-6
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("f1")).c_str(), "f1", sudoku::buttonSize)) {
        key = "f1";
        entry = true;
    }

    // Button 1-7
    if (ImGui::Button((level1::initLevel->at("g1")).c_str(), "g1", sudoku::buttonSize)) {
        key = "g1";
        entry = true;
    }

    // Button 1-8
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("h1")).c_str(), "h1", sudoku::buttonSize)) {
        key = "h1";
        entry = true;
    }

    // Button 1-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "i1", sudoku::buttonSize);
    ImGui::PopStyleColor(1);
    ImGui::End();
}

void level1::squareTwo(bool& entry, std::string& key)
{
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x, sudoku::menuBarSize));
    ImGui::Begin("2", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 2-1
    if (ImGui::Button((level1::initLevel->at("a2")).c_str(), "a2", sudoku::buttonSize)) {
        key = "a2";
        entry = true;
    }

    // Button 2-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("5", "b2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c2")).c_str(), "c2", sudoku::buttonSize)) {
        key = "c2";
        entry = true;
    }

    // Button 2-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", "d2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-5
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("3", "e2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-6
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("4", "f2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-7
    if (ImGui::Button((level1::initLevel->at("g2")).c_str(), "g2", sudoku::buttonSize)) {
        key = "g2";
        entry = true;
    }

    // Button 2-8
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("2", "h2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 2-9
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::SameLine(); ImGui::Button("1", "i2", sudoku::buttonSize);
    ImGui::PopStyleColor(1);
    ImGui::End();
}

void level1::squareThree(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2((sudoku::squareSize.x) * 2, sudoku::menuBarSize));
    ImGui::Begin("3", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 3-1
    if (ImGui::Button((level1::initLevel->at("a3")).c_str(), "a3", sudoku::buttonSize)) {
        key = "a3";
        entry = true;
    }

    // Button 3-2
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("b3")).c_str(), "b3", sudoku::buttonSize)) {
        key = "b3";
        entry = true;
    }

    // Button 3-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c3")).c_str(), "c3", sudoku::buttonSize)) {
        key = "c3";
        entry = true;
    }

    // Button 3-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "d3", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 3-5
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("e3")).c_str(), "e3", sudoku::buttonSize)) {
        key = "e3";
        entry = true;
    }

    // Button 3-6
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("f3")).c_str(), "f3", sudoku::buttonSize)) {
        key = "f3";
        entry = true;
    }

    // Button 3-7
    if (ImGui::Button((level1::initLevel->at("g3")).c_str(), "g3", sudoku::buttonSize)) {
        key = "g3";
        entry = true;
    }

    // Button 3-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "h3", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    //Button 3-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "i3", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    ImGui::End();
}

void level1::squareFour(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, sudoku::squareSize.y + sudoku::menuBarSize));
    ImGui::Begin("4", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 4-1
    if (ImGui::Button((level1::initLevel->at("a4")).c_str(), "a4", sudoku::buttonSize)) {
        key = "a4";
        entry = true;
    }

    // Button 4-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "b4", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-3
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("5", "c4", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-4
    if (ImGui::Button((level1::initLevel->at("d4")).c_str(), "d4", sudoku::buttonSize)) {
        key = "d4";
        entry = true;
    }

    // Button 4-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "e4", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-6
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("f4")).c_str(), "f4", sudoku::buttonSize)) {
        key = "f4";
        entry = true;
    }

    // Button 4-7
    if (ImGui::Button((level1::initLevel->at("g4")).c_str(), "g4", sudoku::buttonSize)) {
        key = "g4";
        entry = true;
    }

    // Button 4-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", "h4", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 4-9
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "i4", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    ImGui::End();
}

void level1::squareFive(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x, sudoku::squareSize.y + sudoku::menuBarSize));
    ImGui::Begin("5", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 5-1
    if (ImGui::Button((level1::initLevel->at("a5")).c_str(), "a5", sudoku::buttonSize)) {
        key = "a5";
        entry = true;
    }

    // Button 5-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "b5", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 5-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c5")).c_str(), "c5", sudoku::buttonSize)) {
        key = "c5";
        entry = true;
    }

    // Button 5-4
    if (ImGui::Button((level1::initLevel->at("d5")).c_str(), "d5", sudoku::buttonSize)) {
        key = "d5";
        entry = true;
    }

    // Button 5-5
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("e5")).c_str(), "e5", sudoku::buttonSize)) {
        key = "e5";
        entry = true;
    }

    // Button 5-6
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("f5")).c_str(), "f5", sudoku::buttonSize)) {
        key = "f5";
        entry = true;
    }

    // Button 5-7
    if (ImGui::Button((level1::initLevel->at("g5")).c_str(), "g5", sudoku::buttonSize)) {
        key = "g5";
        entry = true;
    }

    // Button 5-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "h5", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 5-9
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("i5")).c_str(), "i5", sudoku::buttonSize)) {
        key = "i5";
        entry = true;
    }

    ImGui::End();
}

void level1::squareSix(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x * 2, sudoku::squareSize.y + sudoku::menuBarSize));
    ImGui::Begin("6", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 6-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("4", "a6", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("8", "b6", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c6")).c_str(), "c6", sudoku::buttonSize)) {
        key = "c6";
        entry = true;
    }

    // Button 6-4
    if (ImGui::Button((level1::initLevel->at("d6")).c_str(), "d6", sudoku::buttonSize)) {
        key = "d6";
        entry = true;
    }

    // Button 6-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "e6", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-6
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("f6")).c_str(), "f6", sudoku::buttonSize)) {
        key = "f6";
        entry = true;
    }

    // Button 6-7
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "g6", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "h6", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 6-9
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("i6")).c_str(), "i6", sudoku::buttonSize)) {
        key = "i6";
        entry = true;
    }

    ImGui::End();
}

void level1::squareSeven(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(0, (sudoku::squareSize.y * 2) + sudoku::menuBarSize));
    ImGui::Begin("7", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 7-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "a7", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "b7", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c7")).c_str(), "c7", sudoku::buttonSize)) {
        key = "c7";
        entry = true;
    }

    // Button 7-4
    if (ImGui::Button((level1::initLevel->at("d7")).c_str(), "d7", sudoku::buttonSize)) {
        key = "d7";
        entry = true;
    }

    // Button 7-5
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("e7")).c_str(), "e7", sudoku::buttonSize)) {
        key = "e7";
        entry = true;
    }

    // Button 7-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "f7", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 7-7
    if (ImGui::Button((level1::initLevel->at("g7")).c_str(), "g7", sudoku::buttonSize)) {
        key = "g7";
        entry = true;
    }

    // Button 7-8
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("h7")).c_str(), "h7", sudoku::buttonSize)) {
        key = "h7";
        entry = true;
    }

    // Button 7-9
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("i7")).c_str(), "i7", sudoku::buttonSize)) {
        key = "i7";
        entry = true;
    }

    ImGui::End();
}

void level1::squareEight(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x, (sudoku::squareSize.y * 2) + sudoku::menuBarSize));
    ImGui::Begin("8", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 8-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("9", "a8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-2
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("7", "b8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c8")).c_str(), "c8", sudoku::buttonSize)) {
        key = "c8";
        entry = true;
    }

    // Button 8-4
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "d8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-5
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("8", "e8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "f8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-7
    if (ImGui::Button((level1::initLevel->at("g8")).c_str(), "g8", sudoku::buttonSize)) {
        key = "g8";
        entry = true;
    }

    // Button 8-8
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("6", "h8", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 8-9
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("i8")).c_str(), "i8", sudoku::buttonSize)) {
        key = "i8";
        entry = true;
    }

    ImGui::End();
}

void level1::squareNine(bool& entry, std::string& key) {
    ImGui::SetNextWindowSize(sudoku::squareSize);
    ImGui::SetNextWindowPos(ImVec2(sudoku::squareSize.x * 2, (sudoku::squareSize.y * 2) + sudoku::menuBarSize));
    ImGui::Begin("9", (bool*)nullptr, ImGuiWindowFlags_NoTitleBar | ImGuiWindowFlags_NoResize);

    // Button 9-1
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("2", "a9", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-2
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("b9")).c_str(), "b9", sudoku::buttonSize)) {
        key = "b9";
        entry = true;
    }

    // Button 9-3
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("c9")).c_str(), "c9", sudoku::buttonSize)) {
        key = "c9";
        entry = true;
    }

    // Button 9-4
    if (ImGui::Button((level1::initLevel->at("d9")).c_str(), "d9", sudoku::buttonSize)) {
        key = "d9";
        entry = true;
    }

    // Button 9-5
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("e9")).c_str(), "e9", sudoku::buttonSize)) {
        key = "e9";
        entry = true;
    }

    // Button 9-6
    ImGui::SameLine();
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("3", "f9", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-7
    ImGui::PushStyleColor(ImGuiCol_Button, ImVec4(51, 51, 51, 1));
    ImGui::Button("1", "g9", sudoku::buttonSize);
    ImGui::PopStyleColor(1);

    // Button 9-8
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("h9")).c_str(), "h9", sudoku::buttonSize)) {
        key = "h9";
        entry = true;
    }

    // Button 9-9
    ImGui::SameLine();
    if (ImGui::Button((level1::initLevel->at("i9")).c_str(), "i9", sudoku::buttonSize)) {
        key = "i9";
        entry = true;
    }

    ImGui::End();
}

