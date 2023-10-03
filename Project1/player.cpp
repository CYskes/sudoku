#include "player.h"
#include "Sudoku.h"
#include <string>
#include <fstream>


player::player(const char* name)
    : name{ name } {

}
// needs to append currenLevel properly.  If cast to a char it adds "\x1" instead of "1". 
// hard coded to lvl 1 currenly.
void player::saveGame() {
    std::string saveName{ std::string(this->name) + std::to_string(sudoku::currentLevel) + ("1.txt") };
    std::ofstream saveFile{ saveName, std::ios::trunc };
    if (saveFile) {
        for (auto const& [key, val] : *sudoku::level1::initLevel) {
            saveFile << (val + "\n");
        }
    }
    saveFile.close();
}

void player::loadGame() {
    if (std::ifstream saveFile{ this->name + std::to_string(sudoku::currentLevel) + (".txt") }) {
        std::string value;        
            for (auto& [key, val] : *sudoku::level1::initLevel) {
                std::getline(saveFile, value);
                if (value.empty())
                    val = " ";
                else {
                    val = value;
                }
            }
     saveFile.close();
    }
    // Only runs this once, popup doesn't stay visible. How do i pause and wait for the click without endlessly 
    //looping over this
    else {
        ImGui::OpenPopup("NoSavedGame");
        if (ImGui::BeginPopup("NoSavedGame")) {
            ImGui::Text("No Saved Game Found");
            if (ImGui::Button("OK")) {
                ImGui::CloseCurrentPopup();
            }
            ImGui::EndPopup();
        }
        //ImGui::EndPopup();
    }
}