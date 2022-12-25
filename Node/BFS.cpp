/* Input
- 유한한 노드와 각 노드가 연결된 노드 정보가 한 줄씩 들어옴
- 예를 들어 1에 2,3,4가 연결된 경우 "1 2 3 4\n"가 입력됨
- "quit\n" 입력 시 입력 종료 
- 입력받은 데이터는 vector 타입 board로 저장 */

/* Breath-First Search(BFS) : 너비 우선 탐색
시작 정점 방문 후, 그 시작 정점과 인접한 모든 정점들을 우선 탐색함.
간선의 가중치가 1인경우 목표 정점까지의 최단 거리를 구할 때 활용 가능한 방법 */

#include <iostream>
#include <vector>
#include <string>
#include <queue>

void bfs_node(int start, std::vector<std::string> board)
{
    bool visited[sizeof(board)];

    std::queue<int> que;
    que.push(start);
    visited[start]=true;

    while(!que.empty())
    {
        int x = que.front(); // STL queue에서 pop은 제일 앞의 원소를 반환하지 않고 삭제
        que.pop();
        std::cout << x << ' ';

        int i=1;
        while (i<sizeof(board[x]))
        {
            int y = board[x][i];
            if (!visited[y])
            {
                que.push(y);
                visited[y]=true;
            }
            i++;
        }
    }
}

int main()
{
    std::vector<std::string> board;
    std::string raw;

    // 데이터 입력
    while(1)
    {
        std::getline(std::cin, raw);
        board.push_back(raw);
        if (board.back()=="quit")
            break;
    }

    bfs_node(board[0][0], board);
    return 0;
}
