#pragma once

#include "Model.h"
#include "View.h"
#include <string>
#include <vector>

class Controller {
    public:
        Controller(Model &model, View &view);
        void run();

    private:
        Model &model;
        View &view;
};
