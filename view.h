#pragma once

#include "model.h"
#include <string>

class View {
    public:
        void run(Model& model);

    private:
        std::string ask();
        void displayAns(const std::string &ans);
};
