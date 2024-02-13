#include <iostream>
#include <cstdlib>
#include <ctime>

int game(int maxnum);

int main()
{
    int n;
    srand(time(NULL));

    std::cout << "Anna suurin kaytettava numero: ";
    std::cin >> n;

    n = game(n);

    std::cout << "\nArvausten maara: " << n << std::endl;

    std::cout << "\nPaina ENTER sulkeaksesi";

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return 0;
}

int game(int maxnum)
{
    int count = 0;
    int num;
    int inputNum = 0;

    num = rand() % maxnum + 1;

    while(inputNum != num)
    {
        std::cout << "\nArvaa numero: ";
        std::cin >> inputNum;

        if(inputNum < num)
        {
            std::cout << "\nLuku on suurempi" << std::endl;
        }
        else if(inputNum > num)
        {
            std::cout << "\nLuku on pienempi" << std::endl;
        }
        else
        {
            std::cout << "\nOikea vastaus!\nOikea vastaus!\nOikea vastaus!\nOikea vastaus!\nOikea vastaus!" << std::endl;
        }

        count++;
    }

    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    return count;
}
