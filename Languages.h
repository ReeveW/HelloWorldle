#pragma once

#include <string>
#include <vector>

enum class Level
{
    High,
    Low
};

enum class Implementation
{
    Compiled,
    Interpreted,
    Hybrid
};

enum class MemoryManagement
{
    Manual,
    GarbageCollected
};

enum class ParentLanguage
{
    C,
    ABC,
};

struct LanguageData
{
    std::string name;
    int releaseYear;
    Level level;
    Implementation implementation;
    ParentLanguage parentLanguage;
    MemoryManagement mem;
};

std::vector<LanguageData> languages = {{"C++", 1985, Level::Low, 
    Implementation::Compiled, ParentLanguage::C, MemoryManagement::Manual},
{"Python", 1991, Level::High, Implementation::Interpreted, ParentLanguage::ABC,
MemoryManagement::GarbageCollected}};
