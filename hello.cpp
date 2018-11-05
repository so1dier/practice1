#include <iostream>

int function_1()
{
   return 1+1;
}


int CalculateAgeIn100Years(const int years)
{
    return years+100;
}

int main()
{
    std::cout << "Hello" << std::endl;
    std::cout << CalculateAgeIn100Years(18) << std::endl;
}
