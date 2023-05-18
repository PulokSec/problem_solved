#include <bits/stdc++.h>


using namespace std;

// Define a structure to represent a node in the graph
struct Node {
    char label;         // label of the node
    int distance;       // distance from the source node
    vector<pair<Node*, int>> neighbors; // neighbors of the node and their weights
    
    Node(char l) : label(l), distance(INT_MAX) {}
};

// Dijkstra's algorithm to find the shortest paths from a source node
void dijkstra(Node* source) {
    priority_queue<pair<int, Node*>, vector<pair<int, Node*>>, greater<pair<int, Node*>>> pq; // min-heap to get the minimum distance node
    
    // Set the distance of the source node to 0 and push it to the priority queue
    source->distance = 0;
    pq.push(make_pair(0, source));
    
    // Process the nodes until the priority queue is empty
    while (!pq.empty()) {
        // Get the node with minimum distance
        Node* current = pq.top().second;
        pq.pop();
        
        // Update the distances of its neighbors if a shorter path is found
        for (auto neighbor : current->neighbors) {
            Node* neighborNode = neighbor.first;
            int weight = neighbor.second;
            int distance = current->distance + weight;
            if (distance < neighborNode->distance) {
                neighborNode->distance = distance;
                pq.push(make_pair(distance, neighborNode));
                cout << pq.top().second << " " << pq.top().first << endl;
            }
        }
    }
}

int main() {
    // Create the nodes of the graph
    Node A('A'), B('B'), C('C'), E('E'), F('F'), G('G'), H('H'), I('I'), J('J');
    
    // Add the neighbors and their weights to each node
    A.neighbors = {{&B, 2}, {&C, 1}, {&I, 18}, {&J, 5}};
    B.neighbors = {{&A, 2}, {&C, 7}, {&J, 6}, {&F, 13}};
    C.neighbors = {{&A, 1}, {&B, 7}, {&E, 9}};
    E.neighbors = {{&B, 20}, {&C, 9}, {&G, 5}};
    F.neighbors = {{&B, 13}, {&G, 1}, {&H, 21}};
    G.neighbors = {{&E, 5}, {&F, 1}};
    H.neighbors = {{&B, 15}, {&F, 21}, {&I, 7}};
    I.neighbors = {{&A, 18}, {&H, 7}, {&J, 6}};
    J.neighbors = {{&A, 5}, {&B, 6}, {&I, 6}};
    
    // Find the shortest paths from node E
    dijkstra(&E);
    
    // Print the distances from node E to all other nodes
    cout << "Shortest paths from node E:" << endl;
    cout << "A: " << A.distance << endl;
    cout << "B: " << B.distance << endl;
    cout << "C: " << C.distance << endl;
    cout << "E: " << E.distance << endl;
    cout << "F: " << F.distance << endl;
    cout << "G: " << G.distance << endl;
    cout << "H: " << H.distance << endl;
    cout << "I: " << I.distance << endl;
    cout << "J: " << J.distance << endl;
}
