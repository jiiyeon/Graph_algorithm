#include <iostream>

int main()
{

    int year;
    bool answer = false;
    std::cin >> year;

    if (year%4==0 && year%100!=0)
        answer = true;
    else if (year%400==0)
        answer = true;
    
    std::cout << answer;

    return 0;
}
