/*
조건1 : 8*8 바둑판을 자른다 == [a:a+8][:8] 범위로 모든 경우의 수를 검사
조건2 : 시작점이 W인지 B인지에 따라 칠하는 개수 비교
*/

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


// B로 시작하는 보드라고 가정할 때 바꿀 원소의 개수
int count_startB(std::string input_str[8][8])
{
    int cnt = 0;
    int i=0;
    while (i<8)
    {
        int j=0;
        while(j<8)
        {
            if (j%2==0 && (input_str[i][j]!="B"))
                cnt++;
            else if (j%2==1 && (input_str[i][j]!="W"))
                cnt++;
            j++;
        }
        i++;
    }
    return cnt;
}

// W로 시작하는 보드라고 가정할 때 바꿀 원소의 개수
int count_startW(std::string input_str[8][8])
{
    int cnt = 0;
    int i=0;
    while (i<8)
    {
        int j=0;
        while(j<8)
        {
            if (j%2==0 && (input_str[i][j]!="W"))
                cnt++;
            else if (j%2==1 && (input_str[i][j]!="B"))
                cnt++;
            j++;
        }
        i++;
    }
    return cnt;
}


int main()
{
    // input
    int row, col;
    std::cin >> row >> col;

    std::string input_str[row];
    int i=0;
    while (i<row)
    {
        std::cin >> input_str[i];
        i++;
    }

    // 8*8 복사 후 바꿀 원소의 개수 체크
    i=0;
    std::vector<int> res;
    while(i+8<row)
    {
        int j=0;
        while (j+8<col)
        {
            std::string slide[8][8];
            copy(&input_str[8][8], &input_str[8][8] + 8*8, &slide[0][0]);
            
            int int_B = count_startB(slide);
            int int_W = count_startW(slide);
            res.push_back(int_B);
            res.push_back(int_W);
            j++;
        }
        i++;
    }

    std::cout << *std::min_element(res.begin(), res.end()) << "\n";

    return 0;
}
