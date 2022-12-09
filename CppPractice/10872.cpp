// f(n) = n*f(n-1)

#include <iostream>

int ft_factorial(int N)
{
    int res = 1;

    if (N>0)
    {
        res = N*ft_factorial(N-1);
    }
    return res;
}

int main()
{
    int input;
    std::cin >> input;

    std::cout << ft_factorial(input) << "\n";

    return 0;
}
