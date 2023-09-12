#pragma once

#include <memory>

using std::unique_ptr;

class inputInterpreter;

class componentBuilder {
    public:

    virtual ~componentBuilder(){};

    virtual unique_ptr<inputInterpreter> buildInterpreter() = 0;
};