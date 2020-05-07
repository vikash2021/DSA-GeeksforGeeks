int Graph::levels( int x, int in){
    
    int level[V+1];             // Make a level array to store every node level from x
    bool visited[V+1];          // Make a visited array to mark whether the node is visited or not
    
    memset(level, 0, sizeof(level));
    
    queue<int> q;   
    q.push(x);                  // Push the current node x to queue
    
    visited[x] = true;          // Mark the node as visited
    level[x] = 0;               // Mark the level of root node as 0
    
    while(!q.empty()){          // Apply BFS, while queue is not empty
        x = q.front();          // Take q.front() in x
        q.pop();                // Pop from queue
        for(auto b : adj[x]){   // Traverse for each adjacent vertex 
            if(!visited[b]){    // If the current adjacent vertex is not visited
                q.push(b);      // Push the adjacent vertec to q
                level[b] = level[x]+1;  // Increase the level of adjacent vertex 1 + level of its parent(current node)
                visited[b] = true; // Mark the adjacent node as visited
            }
        }
    }
    
     return level[in];      // Return level of the desired node.
    
}
