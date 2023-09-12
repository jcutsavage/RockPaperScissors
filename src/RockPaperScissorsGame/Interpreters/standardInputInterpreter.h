#pragma once

#include "inputInterpreter.h"

class standardInputInterpreter : public inputInterpreter {
    public:

    standardInputInterpreter();

    ~standardInputInterpreter() = default;

    UserAffirmationEnum getUserAffirmation(std::string) override;
};