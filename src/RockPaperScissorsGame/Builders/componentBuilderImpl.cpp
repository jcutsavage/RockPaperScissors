#include "componentBuilderImpl.h"

#include "standardInputInterpreter.h"

componentBuilderImpl::componentBuilderImpl() {

}

unique_ptr<inputInterpreter> componentBuilderImpl::buildInterpreter() {

    unique_ptr<inputInterpreter> interpreter = unique_ptr<inputInterpreter>(new standardInputInterpreter());

    return std::move(interpreter);
}