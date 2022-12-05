#include <iostream>
#include <vector>

int main()
{

    int N, MAX, input;
    std::vector<int> num_vec;
    std::cin >> N >> MAX;

    int i=0;
    while (i<N)
    {
        std::cin >> input;
        num_vec.push_back(input);
        i++;
    }

    int k1 = 0, k2 = 0, k3 = 0;
    int num_max=0;
    int res;
    while (k1<N)
    {
        k2=k1+1;
        while(k2<N)
        {
            k3=k2+1;
            while(k3<N)
            {
                res = num_vec[k1]+num_vec[k2]+num_vec[k3];
                if (res>num_max && (res<MAX || res==MAX))
                    num_max=res;
                k3++;
            }
            k2++;
        }
        k1++;
    }
    std::cout << num_max << "\n";

    return 0;
}
