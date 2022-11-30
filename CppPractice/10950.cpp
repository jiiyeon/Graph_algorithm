#include <iostream>

int main()
{
    int N, i;
    std::cin >> N;

    i=0;
    while (i < N)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a + b << std::endl;
        i++;
    }

    return 0;
}
