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

int main()
{
    // Print Welcome message 
    print("You are a secret agent breaking into a secure server room\n");
    print("You need to enter the correct codes to continue...\n");
   
    const int CodeA = 4;
    const int CodeB = 5;
    const int CodeC = 5;
    
    const int sum = CodeA + CodeB + CodeC;
    const int product = CodeA * CodeB * CodeC;

    // Print statment
    print("\n");
    print("+ There are 3 numbers in the code\n");
    print("+ The codes add-up to: ");
    print(sum);
    print("\n");
    print("+ The codes multiply to give: ");
    print(product);
    print("\n");

    //Get users guess
    int GuessA, GuessB, GuessC, GuessSum, GuessProduct;
    
    int tries = 3;
    while (true) {    
        print("\n");
        std::cin >> GuessA >> GuessB >> GuessC;

        // Game wins decision
        GuessSum = GuessA + GuessB + GuessC;
        GuessProduct = GuessA * GuessB * GuessC;

        if (GuessSum == sum && GuessProduct == product) {
            print("You win");
            break;
        }
        print("Your code wrong\n");
        tries--;
        if (tries <= 0) {
            print("You was catched.... \nGAME OVER\n");
            break;
        }
        print("Tries left - ");
        print(tries);
        print("\n");
    }


    return 0;
}
