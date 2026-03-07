#include "view.h"
#include <iostream>

//this is probably gonna change lowk i'm just spitballing rn
void View::run(Model &model) {
    std::cout << "a wonderful opening message to the game trust\n";

    while (true) {
        std::string guess = ask();
        std::string ans = model.guess(guess);
        displayAns(ans);

        /*
        this is going to be something that ends the game loop if they got it right
        if (ans == "smth") {
            std::cout << "you're so smart omg" << std::endl;
            break;
        } 
        */
    }
}

std::string View::ask() {
    std::string input;
    std::cout << "Enter a language guess: ";
    std::cin >> input;
    std::cout << std::endl; //i think this might change this is lowk just formatting
    return input;
}

void View::displayAns(const std::string &ans) {
    std::cout << ans << std::endl;
}
