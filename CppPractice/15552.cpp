#include <iostream>

int main()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int T, i;
    std::cin >> T;

    i=0;
    while (i<T)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << a+b << "\n";
        i++;
    }
    return 0;
}
