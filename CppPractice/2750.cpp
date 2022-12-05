#include <iostream>

int main()
{
    int N;
    std::cin >> N;

    int arr[N];
    int i = 0;
    while (i<N)
    {
        std::cin >> arr[i];
        i++;
    }

    int j = 0;
    int r = 0;
    while (j<N)
    {
        r=j+1;
        while (r<N)
        {
            int tmp;
            if (arr[j]>arr[r])
            {
                tmp = arr[j];
                arr[j] = arr[r];
                arr[r] = tmp;
            }
            r++;
        }
        j++;
    }

    i=0;
    while (i<N)
    {
        std::cout << arr[i] << "\n";
        i++;
    }
    return 0;
}
