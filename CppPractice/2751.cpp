#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    int N, input;
    std::vector<int> num_vec;
    std::cin >> N;

    int i=0;
    while (i<N)
    {
        std::cin >> input;
        num_vec.push_back(input);
        i++;
    }

    sort(num_vec.begin(), num_vec.end());
    i=0;
    while (i<N)
    {
        std::cout << num_vec[i] << "\n";
        i++;
    }
    return 0;
}
