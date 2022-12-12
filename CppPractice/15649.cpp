#include <iostream>
#include <vector>
#include <algorithm>

// M 개씩 꺼내어 경우의 수 만들기
void ft_dfs(int num_arr[], int M)
{


    return;
}

int main()
{
    int N, M;
    std::cin >> N >> M;

    // 1부터 N까지의 배열 만들기
    int num_arr[N];
    int i=0;
    while (i<N)
    {
        num_arr[i] = i;
        i++;
    }

    // M 개씩 꺼내어 경우의 수 만들기
    int visited[N];
    std::vector<int> stack;

    stack.push_back(0);
    while(stack[N])
    {
        int now = stack.pop();
        if (std::find(visited.start(), visited.end(), now)==now)
        {
            
        }

    }

    return 0;
}
