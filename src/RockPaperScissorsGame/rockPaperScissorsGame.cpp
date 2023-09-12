
#include "rockPaperScissorsGame.h"

#include <iostream>
#include <string>
#include <algorithm>

#include "componentBuilderImpl.h"
#include "inputInterpreter.h"

rockPaperScissorsGame::rockPaperScissorsGame()
: comp_builder(unique_ptr<componentBuilderImpl>(new componentBuilderImpl())), 
  interpreter(comp_builder->buildInterpreter()) {

}

void rockPaperScissorsGame::startGame() {
    game_running = true;

    printf("Would you like to play a game of Rock Paper Scissors?");

    std::string response;

    std::cin >> response;

    UserAffirmationEnum converted_response = interpreter->getUserAffirmation(response);

    switch(converted_response) {
        case UserAffirmationEnum::NO:
            printf("That's a shame.... Goodbye!");
            game_running = false;
            break;
        case UserAffirmationEnum::YES:
            printf("Excellent!");
            game_running =true;
            break;
        case UserAffirmationEnum::MAYBE:
            printf("Well if you're not sure, I don't want to play with you. Good day!");
            game_running = false;
            break;

        default:
            break;
    }

}

void rockPaperScissorsGame::playNextRound() {
    game_running = false;
}

bool rockPaperScissorsGame::isGameRunning() {
    return game_running;
}