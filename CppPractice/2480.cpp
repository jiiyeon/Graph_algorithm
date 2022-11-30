#include <iostream>

int main()
{
    int a, b, c, result;
    std::cin >> a >> b >> c;

    if (a==b && b==c)
        result = 10000 + a*1000;
    else if ((a==b && b!=c)||(a!=b && b==c)||(a==c && b!=c))
    {
        if (a==b || a==c)
            result = 1000 + a*100;
        else
            result = 1000 + b*100;
    }
    else
        result = std::max(std::max(a,b),c)*100;

    std::cout << result << std::endl;
    
    return 0;
}
