#pragma once

#include <string>

#include "UserAffirmationEnum.h"

class inputInterpreter {
    public:

    virtual ~inputInterpreter(){};

    virtual UserAffirmationEnum getUserAffirmation(std::string) = 0;
};