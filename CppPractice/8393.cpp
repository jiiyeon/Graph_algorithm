#include <iostream>

int main()
{
    int N, i, result;
    std::cin >> N;

    i=1;
    result=0;
    while (i<N+1)
    {
        result+=i;
        i++;
    }
    
    std::cout << result << std::endl;
    
    return 0;
}
