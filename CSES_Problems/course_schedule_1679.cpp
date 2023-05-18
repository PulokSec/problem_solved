#include<bits/stdc++.h>
using namespace std;
const int N = 2e5;

vector<int>adj_list[N];
int visited[N];
bool isPossible = true;
stack<int>course_stack;

void dfs(int node) {
    visited[node] = 1;

    for(int adj_node: adj_list[node]) {
        if(visited[adj_node] == 0) {
            dfs(adj_node);
        }
        else if(visited[adj_node] == 1) {
            isPossible = false;
            break;
        }
    }

    course_stack.push(node);
}

int main() {
    int n, m;
    cin >> n >> m;

    for(int i = 0 ; i < m ; i++) {
        int u, v;
        cin >> u >> v; // u -> v
        adj_list[u].push_back(v);
    }

    for(int i = 1 ; i <= n ; i++) {
        if(visited[i] == 0) {
            dfs(i);
        }
    }

    if(isPossible){
      while(!course_stack.empty()) {
        cout << course_stack.top() << " ";
        course_stack.pop();
    }
    cout<<endl;
    }
    else{
    cout <<"IMPOSSIBLE"<< endl;
    }
    return 0;

}