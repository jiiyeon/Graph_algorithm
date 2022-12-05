#include <iostream>

int main()
{
    int N = 5;
    int num_arr[N];
    std::cin >> num_arr[0] >> num_arr[1] >> num_arr[2] >> num_arr[3] >> num_arr[4];

    int i = 0;
    int j = 0;
    while (i<N)
    {
        j = i+1;
        while (j<N)
        {
            if (num_arr[i]<num_arr[j])
            {
                int tmp = num_arr[i];
                num_arr[i] = num_arr[j];
                num_arr[j] = tmp;
            }
            j++;
        }
        i++;
    }

    int sum = 0;
    i = 0;
    while (i<N)
    {
        sum += num_arr[i];
        i++;
    }

    //평균
    std::cout << sum/N << "\n";

    //중앙값
    std::cout << num_arr[2] << "\n";

    return 0;
}
