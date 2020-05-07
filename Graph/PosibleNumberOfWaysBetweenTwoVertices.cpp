void countPathsUtil(list<int> *adj, int u, int d, bool *visited,int &pathCount) {
    visited[u] = true; // Mark the current node as visited

    if (u == d) // If current node is equal to destination node increase the count
        pathCount++;

    else {
        list<int>::iterator i;
        for (i = adj[u].begin(); i != adj[u].end();++i) 
                         // Traverse for all connected nodes
            if (!visited[*i]) // If connected node is not visited
                countPathsUtil(adj, *i, d, visited,pathCount);
                    
                     // Call the function for adjacent node
    }
    visited[u] = false; // Mark the current node visited as false
}

int Graph::countPaths(int s, int d) {
    bool *visited = new bool[V + 1];
    memset(visited, false, sizeof(visited));

    int pathCount = 0;
    countPathsUtil(
        adj, s, d, visited,
        pathCount); // Call the function to calculate path from s to d
    return pathCount;
}
