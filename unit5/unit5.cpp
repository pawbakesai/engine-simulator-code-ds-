#include <iostream>
#include <vector>
#include <queue>
#include <string>
using namespace std;

int main()
{
    int n, m;

    cout << "AIRPORT CONNECTIVITY GRAPH USING BFS\n";

    cout << "Enter number of airports: ";
    cin >> n;

    vector<string> airport(n);
    vector<vector<int> > graph(n);

    cout << "\nEnter airport names:\n";
    for (int i = 0; i < n; i++)
    {
        cout << i << " - ";
        cin >> airport[i];
    }

    cout << "\nEnter number of flight connections: ";
    cin >> m;

    cout << "Enter connected airport numbers:\n";
    cout << "(Example: 0 1 means airport 0 to airport 1)\n";

    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;

        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    int start;
    cout << "\nEnter starting airport number: ";
    cin >> start;

    vector<bool> visited(n, false);
    queue<int> q;

    visited[start] = true;
    q.push(start);

    cout << "\nAirports reachable from "
         << airport[start] << ":\n";

    cout << airport[start] << " (Starting Airport)\n";

    while (!q.empty())
    {
        int current = q.front();
        q.pop();

        for (int i = 0; i < graph[current].size(); i++)
        {
            int next = graph[current][i];

            if (!visited[next])
            {
                visited[next] = true;
                q.push(next);

                cout << airport[next] << endl;
            }
        }
    }

    cout << "\nBFS traversal completed.\n";

    return 0;
}
