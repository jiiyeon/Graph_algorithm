#include <iostream>
#include <string>
#include <algorithm>

int main()
{
    std::string input;
    std::getline(std::cin, input);

    int i = 0;
    int cnt = 0;
    while (1)
    {
        if (!input[i])
            break;
        
        // 시작
        if (i==0 && input[0] != ' ')
            cnt++;

        // 반복조건
        if ((input[i-1] == ' ') && (input[i] != ' '))
        {
            cnt++;
        }
        i++;
    }

    std::cout << cnt << "\n";

    return 0;
}
