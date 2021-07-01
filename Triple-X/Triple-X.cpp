// Triple-X.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

void print(std::string str)
{
    std::cout << str;
}

void print(int number)
{
    std::cout << number;
}
void printWelcome(int level)
{
    print("You are a secret agent breaking into a secure server room on level ");
    print(level);
    print("\n");
    print("You need to enter the correct codes to continue...\n");
    print("And you have only two tries\n");
}

void printRules(int sum, int product) 
{
    print("\n");
    print("+ There are 3 numbers in the code\n");
    print("+ The codes add-up to: ");
    print(sum);
    print("\n");
    print("+ The codes multiply to give: ");
    print(product);
    print("\n");
}
bool playGame(int difficulty)
{
    printWelcome(difficulty);

    const int CodeA = 4 * difficulty;
    const int CodeB = 5;
    const int CodeC = 5;

    const int sum = CodeA + CodeB + CodeC;
    const int product = CodeA * CodeB * CodeC;

    printRules(sum, product);

    //Get users guess
    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;

    int tries = 2;
    while (true) {
        print("\n");
        std::cin >> GuessA >> GuessB >> GuessC;

        // Game wins decision
        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        if (GuessSum == sum && GuessProduct == product) {
            print("You win");
            return true;
        }
        print("Your code wrong\n");
        tries--;
        if (tries <= 0) {
            print("You was catched.... \nGAME OVER\n");
            return false;
        }
        print("Tries left - ");
        print(tries);
        print("\n");
    }


}
int main()
{
    int levelDifficulty = 1;
    while (true) {
        bool isLevelComplete = playGame(levelDifficulty);
        std::cin.clear();
        std::cin.ignore();
        if (isLevelComplete) {
            levelDifficulty++;
        }
        print("\n******************************\n");
    }
    
    return 0;
}
