#include "Languages.h"

std::vector<LanguageData> languages = {
    {"c++", 1985, Level::Low, Implementation::Compiled, ParentLanguage::C, MemoryManagement::Manual, "New standards are released roughly every 3 years!\n\nstd::cout << \"Hello World!\" << std::endl;"},
    {"python", 1991, Level::High, Implementation::Interpreted, ParentLanguage::ABC, MemoryManagement::GarbageCollected, "Python was named after Monty Python, not the snake!\n\nprint(\"Goodbye, World!\")"},
    {"javascript", 1995, Level::High, Implementation::Hybrid, ParentLanguage::Java, MemoryManagement::GarbageCollected, "Did you know JavaScript was built in just 10 days?\n\nconsole.log(\"Goodbye, World!\");"},
    {"c", 1972, Level::Low, Implementation::Compiled, ParentLanguage::B, MemoryManagement::Manual, "C was the language Howard used before C++!\n\nprintf(\"Goodbye, World!\");"},
    {"objective-c", 1984, Level::High, Implementation::Compiled, ParentLanguage::C, MemoryManagement::ARC, "Objective-C was the language of choice for the first ever web browser!\n\n@autoreleasepool {NSLog(@\"Goodbye, World!\");}"},
    {"typescript", 2012, Level::High, Implementation::Compiled, ParentLanguage::JavaScript, MemoryManagement::GarbageCollected, "TypeScript is a superset of JavaScript, so any valid JavaScript code is also valid TypeScript code!\n\nlet message: string = \"Goodbye World\";\nconsole.log(message);",
    }
};