#include <iostream>
#include <string>

int main()
{
    int total, N, i, res;
    std::cin >> total >> N;

    i = 0;
    res = 0;
    while (i<N)
    {
        int price, num;
        std::cin >> price >> num;
        res += price*num;
        i++;
    }

    std::string ans;
    ans = (total==res) ? "Yes" : "No";
    
    std::cout << ans << std::endl;

    return 0;
}
