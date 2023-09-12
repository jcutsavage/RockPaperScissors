#include "standardInputInterpreter.h"

#include <algorithm>

standardInputInterpreter::standardInputInterpreter() {

}

UserAffirmationEnum standardInputInterpreter::getUserAffirmation(std::string input) {

    // Convert string to lowercase
    std::transform(input.begin(), input.end(), input.begin(), ::tolower);

    UserAffirmationEnum conversion = UserAffirmationEnum::NO;

    if(input.compare("yes") || input.compare("y"))
        conversion = UserAffirmationEnum::YES;
    else if(input.compare("maybe"))
        conversion = UserAffirmationEnum::MAYBE;
    
    return conversion;
}