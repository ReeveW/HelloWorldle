#pragma once
#include <string>

enum class Level {
    High, Low
};

enum class Implementation {
    Compiled, Interpreted, Hybrid
};

enum class MemoryManagement {
    Manual, GarbageCollected
};

enum class ParentLanguage {
    C, ABC, 
};

struct LanguageData {
    std::string name;
    int releaseYear;
    Level level;
    Implementation implementation;
    ParentLanguage parentLanguage;
    MemoryManagement mem;
};

class Model {
    private:
        LanguageData answer;
    public:
        Model();
        ~Model();
        std::string memoryGuess(MemoryManagement mem);
        std::string parentGuess(ParentLanguage p);
        std::string implementationGuess(Implementation i);
        std::string levelGuess(Level level);
        std::string yearGuess(int year);
        std::string guess(std::string language);
        bool isValidGuess(std::string language);
};