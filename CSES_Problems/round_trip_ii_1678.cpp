#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;
vector<int> adj_list[N];
int visited[N];
vector<int>node_stack;

int detect_route(int node){
  visited[node] = 1;

  for(int adj_node: adj_list[node]) {
        if(visited[adj_node] == 0) {
            detect_route(adj_node);
            // if(got_cycle) {
            //     return true;
            // }
        node_stack.push_back(adj_node);
        }
        else if(visited[adj_node] == 1) {
            node_stack.push_back(adj_node);
            return true;
        }
    }
    visited[node] = 2;
    return false;
}

int main(){
  int n,m;
  cin >> n >> m ;
  for(int i=0;i<m;i++){
    int a,b;
    cin >> a >> b;
    adj_list[a].push_back(b);
  }
  bool route_found = false;

  for(int i = 1 ; i <= n ; i++) {
        if(visited[i] == 0) {
            int got_route = detect_route(i);
            if(got_route) {
                route_found = true;
                break;
            }
        }
    }
    if(route_found){
        cout << node_stack.size()<<endl;
    for(int i = 0 ; i < node_stack.size() ; i++) {
        cout << node_stack[i]<<" ";
    }
    }
    else {
        cout<<"IMPOSSIBLE"<<endl;
    }
  
  return 0;
}