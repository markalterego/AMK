#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <ctime>

class Game
{
public:
    Game(int num)
    {
        std::cout << "GAME CONSTRUCTOR: object initialized with " << num << " as the maximum value" << std::endl;
        srand(time(NULL));

        maxNumber = num;
        randomNumber = rand() % maxNumber + 1;

        numOfGuesses = 0;
    }
    ~Game()
    {
        std::cout << "GAME DESTRUCTOR: object cleared from stack memory" << std::endl;
        std::cout << "Press <RETURN> to close this window..." << std::endl;
        while(getchar() != '\n'); // filtering trash
    }
    void play(void)
    {
        while(playerGuess != randomNumber)
        {
            std::cout << "Give your guess between 1-" << maxNumber << std::endl;
            std::cin >> playerGuess;
            while(getchar() != '\n'); // filtering trash
            numOfGuesses++;

            if(playerGuess < randomNumber)
            {
                std::cout << "Your guess is too small" << std::endl;
            }
            else if(playerGuess > randomNumber)
            {
                std::cout << "Your guess is too big" << std::endl;
            }
            else
            {
                std::cout << "Your guess is right = " << playerGuess << std::endl;
            }
        }
        printGameResult();
    }
private:
    int maxNumber;
    int playerGuess;
    int randomNumber;
    int numOfGuesses;
    void printGameResult()
    {
        std::cout << "You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses" << std::endl;
    }
};

#endif // GAME_H
