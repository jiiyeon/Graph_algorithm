#include <iostream>

int ft_fiboancci(int N)
{
    int res;
    if (N==0)
        res = 0;
    else if (N==1)
        res = 1;
    else
        res = ft_fiboancci(N-2) + ft_fiboancci(N-1);

    return res;
}

int main()
{
    int input;
    std::cin >> input;

    std::cout << ft_fiboancci(input) << "\n";
    
    return 0;
}
