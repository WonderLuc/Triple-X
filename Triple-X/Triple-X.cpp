// Triple-X.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

int main()
{
    // Print Welcome message 
    std::cout << "You are a secret agent breaking into a secure server room\n";
    std::cout << "You need to enter the correct codes to continue...\n";

    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 5;
    
    const int sum = CodeA + CodeB + CodeC;
    const int product = CodeA * CodeB * CodeC;

    // Print statment
    std::cout << std::endl;
    std::cout << "+ There are 3 numbers in the code" << std::endl;
    std::cout << "+ The codes add-up to: " << sum << std::endl;
    std::cout << "+ The codes multiply to give: " << product << std::endl;

    //Get users guess
    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
    
    int tries = 3;
    while (true) {    
        std::cout << std::endl;
        std::cin >> GuessA >> GuessB >> GuessC;

        // Game wins decision
        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        if (GuessSum == sum && GuessProduct == product) {
            std::cout << "You win" << std::endl;
            break;
        }
        std::cout << "You code is wrong" << std::endl;
        tries--;
        if (tries <= 0) {
            std::cout << "You was catched.... \nGAME OVER" << std::endl;
            break;
        }
        std::cout << "Tries left - " << tries << std::endl;
    }


    return 0;
}
