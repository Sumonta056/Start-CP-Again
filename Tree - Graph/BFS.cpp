#include <iostream>
#include <vector>
#include <queue>

using namespace std;

void bfs(int start, vector<vector<int>> &adjList)
{
    vector<bool> visited(adjList.size(), false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    while (!q.empty())
    {
        int vertex = q.front();
        q.pop();
        cout << vertex << " " << endl;
        // Visit all neighbors of that vertex : adjList[vertex]
        for (int neighbor : adjList[vertex])
        {
            if (!visited[neighbor])
            {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}

int main()
{
    int n = 5;
    vector<vector<int>> adjList(n);
    adjList[0].push_back(1);
    adjList[1].push_back(2);
    adjList[2].push_back(3);
    adjList[2].push_back(4);
    adjList[3].push_back(0);

    cout << "BFS starting from vertex 0: ";
    bfs(0, adjList);

    return 0;
}