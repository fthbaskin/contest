#include <bits/stdc++.h>
using namespace std;

void DFS(int node, vector<vector<int>> &adj, unordered_map<int, bool> &visited, int &counter)
{
    visited[node] = true;
    for (int x : adj[node])
    {
        if (!visited[x])
        {
            counter += 1;
            DFS(x, adj, visited, counter);
        }
    }
}

int DFScounter(int node, vector<vector<int>> &adj)
{
    unordered_map<int, bool> visited;
    int counter = 1;
    DFS(node, adj, visited, counter);
    return counter;
}

int main()
{
    int n;
    scanf("%d", &n);
    vector<vector<int>> adj(n + 1);
    int u, v;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &u, &v);
        if (u != v)
        {
            adj[u].push_back(v);
        }
    }
    int max = n * n;
    int cnt = 0;
    for (int i = 1; i <= n; i++)
    {
        cnt += DFScounter(i, adj);
    }
    cout << max - cnt << endl;

    return 0;
}