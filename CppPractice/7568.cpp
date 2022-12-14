#include <iostream>
#include <vector>
#include <algorithm>

std::vector<int> ft_grade(std::vector<std::pair<int,int>> params)
{
    std::vector<int> grade_vec;

    int i=0;
    while(i<params.size())
    {
        int cnt=1;
        int j=0;
        while (j<params.size())
        {
            if ((params[i].first < params[j].first)&& (params[i].second < params[j].second))
                cnt++;
            j++;
        }
        grade_vec.push_back(cnt);
        i++;
    }
    return grade_vec;
}


int main()
{
    int N;
    std::cin >> N;

    std::vector<std::pair<int,int>> num_vec;
    int i=0;
    while (i<N)
    {
        int weight, height;
        std::cin >> weight >> height;
        num_vec.push_back(std::pair<int, int>(weight, height));
        i++;
    }

    std::vector<int> grade_vec = ft_grade(num_vec);

    i=0;
    while (i<N)
    {
        std::cout << grade_vec[i] << " ";
        i++;
    }

    return 0;
}
