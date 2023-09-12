
#include "rockPaperScissorsGame.h"

int main() {
    rockPaperScissorsGame game;

    game.startGame();

    while(game.isGameRunning())
    {
        game.playNextRound();
    }

    return 0;
}