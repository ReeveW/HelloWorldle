#include <string>
#include "model.h"

Model::Model() {}

std::string colour(std::string c){
    if(c == "red"){
        return "\033[31m";
    }else if(c == "green"){
        return "\033[32m";
    }else if(c == "yellow"){
        return "\033[33m";
    }
    return "\033[30m";
}

std::string Model::yearGuess(int year) {
    std::string s;

    if(answer.releaseYear == year) {
        s += colour("green") + std::to_string(year);
    }else if(answer.releaseYear > year){
        if(answer.releaseYear - 5 > year){
            s += colour("red") + std::to_string(year);
        }else{
            s += colour("yellow") + std::to_string(year);
        }
    }else{
        if(answer.releaseYear + 5 < year){
            s += colour("red") + std::to_string(year);
        }else{
            s += colour("yellow") + std::to_string(year);
        }
    }
    return s;
}

std::string Model::levelGuess(Level level){
    if(answer.level == level){
        //green
    }else{
        // red
    }
}

std::string Model::memoryGuess(MemoryManagement mem) {
    if(answer.mem == mem){
        //green
    }else{
        //red
    }
}

std::string Model::parentGuess(ParentLanguage p) {
    if(answer.parentLanguage == p){
        //green
    }else{
        //red
    }
}

std::string Model::implementationGuess(Implementation i) {
    if(answer.implementation == i){
        //green
    }else if(answer.implementation == Implementation::Hybrid){
        //orange
    }else{
        //red
    }
}

std::string Model::guess(std::string guess) {
    LanguageData guessLanguage;
    for(auto l : languages){
        if(l.name == guess){
            guessLanguage = l;
        }
    }
    std::string s;
    s += yearGuess(guessLanguage.releaseYear);
    s += levelGuess(guessLanguage.level);
    s += implementationGuess(guessLanguage.implementation);
    s += parentGuess(guessLanguage.parentLanguage);
    s += memoryGuess(guessLanguage.mem);
    s += "\033[30m";
    return s;
}

bool Model::isValidGuess(std::string guess){
    for(auto l : languages){
        if(l.name == guess){
            return true;
        }
    }
    return false;
}
