#pragma once

#include "componentBuilder.h"

class componentBuilderImpl : public componentBuilder {
    public:

    componentBuilderImpl();

    ~componentBuilderImpl() = default;

    unique_ptr<inputInterpreter> buildInterpreter() override;
};