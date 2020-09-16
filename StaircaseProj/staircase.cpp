// StaircaseProj.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double x{};
    std::cout << "Enter value of x: ";
    std::cin >> x;
    // This local variable should hold the result of stair( x )
    int stair{};

    // TASK: write code that calculates an integer value
    // corresponding to the value of the function stair( x ) here
    double num = x;

    if (x < 0) {
        for (double i = x; i < -1.0; i++)
        {
            stair -= 1;
        }
        stair -= 1;
    }

    if (x >= 0)
    {
        for (double i = 0; i <= num; i++)
        {
            stair += 1;
        }
        stair -= 1;
    }

    std::cout << "The value of stair(x) is: ";
    std::cout << stair;
    std::cout << std::endl;
    return 0;
}
