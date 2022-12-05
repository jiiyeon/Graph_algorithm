#include <iostream>

int main()
{
    int N, answer_idx;
    std::cin >> N >> answer_idx;

    int num_arr[N];
    int i = 0;
    while (i<N)
    {
        std::cin >> num_arr[i];
        i++;
    }

    i=0;
    int j=0;
    while (i<N)
    {
        j=i+1;
        while (j<N)
        {
            if(num_arr[i]<num_arr[j])
            {
                int tmp = num_arr[i];
                num_arr[i] = num_arr[j];
                num_arr[j] = tmp;
            }
            j++;
        }
        i++;
    }

    std::cout << num_arr[answer_idx - 1] << "\n";

    return 0;
}
