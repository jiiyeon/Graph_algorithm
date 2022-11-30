#include <iostream>

int main()
{
    while(1)
    {
        int a, b;
        std::cin >> a >> b;
        
        if (a==b && a==0)
            return 0;
        std::cout << a+b << std::endl;
    }
}
