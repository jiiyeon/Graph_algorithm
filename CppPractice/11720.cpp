#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    char num_arr[N];
    std::cin >> num_arr;

    int i = 0;
    int res = 0;
    while (i<N)
    {
        res += static_cast<int>(num_arr[i])-48;
        i++;
    }
    std::cout << res << std::endl;

    return 0;
}
