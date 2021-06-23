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

    return 0;
}
