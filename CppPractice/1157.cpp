#include <iostream>
#include <string>
#include <array>
#include <algorithm>

int main()
{
    /* 배열으로 알파벳 등장 횟수 집계*/
    std::array<int, 26> cnt = {0,};

    std::string input;
    std::cin >> input;

    int i = 0;
    while (i < input.length())
    {
        /* 아스키코드 활용
        cnt의 원소를 각각 A-Z에 매칭 
        예를 들어 input이 a일 경우, A의 아스키코드는 65이므로 cnt[static_cast<int>(input)-65]++ */
        char c = toupper(input[i]);
        cnt[static_cast<int>(c)-65]++;
        i++;
    }
    int cnt_max = *std::max_element(cnt.begin(), cnt.end());
    
    if (std::count(cnt.begin(), cnt.end(), cnt_max) != 1)
        std::cout << "?" << "\n";
    else
    {
        int idx = std::distance(cnt.begin(), std::find(cnt.begin(), cnt.end(), cnt_max));
        std::cout << static_cast<char>(idx + 65) << "\n";
    }
    return 0;
}
