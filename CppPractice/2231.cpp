#include <iostream>
#include <vector>

// 생성자 반환 함수
int ft_maker(int num)
{

    int sum;
    int mod;

    int n=1;
    while (n<num)
    {
        sum = n;
        mod = n;
        while (mod)
        {
            sum += mod % 10;
            mod /= 10;
        }
        if (sum==num)
            return n;
        n++;
    }
    return 0;
}

int main()
{
    int input;
    std::cin >> input;

    std::cout << ft_maker(input) << "\n";

    return 0;
}
