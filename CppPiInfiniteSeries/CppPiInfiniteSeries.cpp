//////////////////////////////////////////////written by mht83/////////////////////////////////////////

#include <iostream>

int main()
{
    long double sum = 0;
    long int num = 100000000,sign = 1;
    for (int i = 1; i < num; i += 2) {
        sum += (double)sign / i;
        sign *= -1;
    }
    std::cout << "Pi value is: "<<4*sum;
}
