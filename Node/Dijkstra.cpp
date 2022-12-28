/* Dijkstra

Input
- 유한한 노드와 각 노드를 연결하는 엣지의 가중치가 한 줄씩 들어옴
- 예를 들어 1에 2가 연결되고 가중치가 3인경우 "1 2 3\n"이 입력됨
- "quit\n" 입력 시 입력 종료 
- 입력받은 데이터는 vector 타입 board로 저장 */

#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <queue>
#include <algorithm>
#define INF 1e9

std::vector<std::pair<std::string,int>> dijkstra(int node_size, int edge_size, std::vector<std::pair<std::string,std::pair<std::string, int>>> board, std::string start)
{
    /* 최단거리벡터 선언 및 초기화
    node의 이름이 res_node_name에 존재하는지 확인하고, 없을 경우 val을 INF로 설정하여 res에 추가 */
    std::vector<std::pair<std::string, int>> res;
    std::vector<std::string> res_node_name;

    int i=0;
    std::string node_tmp;
    while (i<edge_size)
    {
        node_tmp = board[i].first();
        auto it = std::find(res_node_name.begin(), res_node_name.end(), node_tmp);
        if(it!= res_node_name.end())
        {
            res_node_name.push_back(node_tmp);
            res.push_back(make_pair(node_tmp, INF));
        }
        i++;
    }

    // dijkstra
    std::priority_queue<std::pair<std::string,int>> qu;
    qu.push({start,0});

    while(!qu.empty())
    {
        std::string here = qu.top().first; // 방문할 노드의 이름
        int cost = qu.top().second; // 방문할 노드까지의 edge val
        
        qu.pop();

        int i=0
        while(1)
        {
            if (board[i].first!=here)
                break;
            
            std::string next = board[i].second.first;
            auto it = std::find()
            int next_cost = board[i].second.second;

            // 현재 점을 거쳐서 가면 next에 저장된 val보다 더 짧아질 경우 값을 갱신하고 큐에 넣음
            int idx_here = std::find(res[0].first, res[node_size-1], here);
            int idx_next = std::find(res[0].first, res[node_size-1], next);
            if (res[next].second > res[here].second + next_cost )
            {
                res[next].second = res[here].second + next_cost;
                qu.push({next, res[idx_next]});
            }
        }
    }
    return qu;
}

int main()
{
    // 데이터 입력
    int node_size; // node 개수, edge 개수
    int edge_size;

    std::cin >> node_size >> edge_size;

    // edge 정보 : {A, {B, N}} -> A에서 B까지 N만큼 걸림
    std::vector<std::pair<std::string,std::pair<std::string, int>>> board;
    std::string raw, node_start, node_end, edge_val;

    while(1)
    {
        std::getline(std::cin, raw);
        if (raw=="quit") break;

        std::istringstream raw_split(raw); // 입력받은 문자열을 공백 기준으로 나눔
        raw_split >> node_start >> node_end >> edge_val; // 나눈 문자열을 변수에 대입

        board.push_back(make_pair(node_start, make_pair(node_end, std::stoi(edge_val))));
    }
    std::sort(board.begin(), board.end());

    std::string start; // 시작점
    std::cin >> start;


    // dijkstra




    return 0;
}
