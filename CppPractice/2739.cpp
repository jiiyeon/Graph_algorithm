#include <iostream>

int main()
{
    int n, i;
    std::cin >> n;

    i = 1;
    while (i < 10)
    {
        std::cout << n << " * " << i << " = " << n*i << std::endl;
        i++;
    }
    return 0;
}
