#include <iostream>
#include <cmath>

int main()
{
    std::cout << "This is Kevin!\n";
    std::cout<<"Hi, please enter two whole numbers: ";

    int x,y;

    std::cin >> x >> y;
    std::cout << "Addition: " << x + y << std::endl;
    std::cout << "Subtraction: " << x - y << std::endl;
    std::cout << "Multiplication: " <<x * y << std::endl;
    if(x != 0 && y != 0)
    {
        std::cout << "Division: " << x / y << std::endl;
    }
    else
    {
        std::cout<<"CANT DO THAT"<<std::endl;
    }
    std::cout << "Remainder: " <<x % y << std::endl;
    std::cout << "Square Root: " << sqrt(x) << std::endl;
    std::cout << "Square: " << pow(x, y) << std::endl;

    return 0;
}
