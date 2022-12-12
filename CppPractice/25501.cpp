#include <iostream>
#include <string>

int cnt;

int ft_recursion(std::string str, int l, int r)
{
    cnt++;
    if (l >= r)
        return 1;
    else if (str[l] != str[r])
        return 0;
    else
        return ft_recursion(str, l+1, r-1);
}

int isPalindrome(std::string str)
{
    return ft_recursion(str, 0, sizeof(str)-1);
}

int main()
{
    int N;
    std::cin >> N;

    int i=0;
    while (i<N)
    {
        std::string input;
        std::cin >> input;

        int cnt=0;
        std::cout << isPalindrome(input) << " " << cnt << "\n";
        i++;
    }

    return 0;
}
