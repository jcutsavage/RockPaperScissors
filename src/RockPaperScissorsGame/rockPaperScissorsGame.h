#pragma once

#include <memory>

using std::unique_ptr;

class componentBuilder;
class inputInterpreter;

class rockPaperScissorsGame {
    public:

    rockPaperScissorsGame();

    ~rockPaperScissorsGame() = default;

    void startGame();

    bool isGameRunning();

    void playNextRound();

    private:

    bool game_running = false;

    unique_ptr<componentBuilder> comp_builder;
    unique_ptr<inputInterpreter> interpreter;
};