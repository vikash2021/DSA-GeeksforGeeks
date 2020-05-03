#include <bits/stdc++.h>
using namespace std;

int findIslands(vector<int> A[], int N, int M);

int main() {

    int T;
    cin >> T;
    while (T--) {
        int N, M;
        cin >> N >> M;
        vector<int> A[N];
        for (int i = 0; i < N; i++) {
            vector<int> temp(M);
            A[i] = temp;
            for (int j = 0; j < M; j++) {
                cin >> A[i][j];
            }
        }
        cout << findIslands(A, N, M) << endl;
    }
    return 0;
}// } Driver Code Ends


/*you are required to complete this method*/

/*  Function to find number of islands in the given graph
*   A[]: input array
*   N, M: Row and column of given matrix
*/
int isSafe(vector<int> M[], int row, int col, vector<vector<bool>> &visited,
           int ROW, int COL) {
    // Check boundary conditions for i and j. Also check if node is not already
    // visited and is currently 1.
    return (row >= 0) && (row < ROW) && (col >= 0) && (col < COL) &&
           (M[row][col] && !visited[row][col]);
}

void dfs(vector<int> A[], int i, int j, vector<vector<bool>> &vis, int N,
         int M) {

    int row[] = {-1, -1, -1, 0,
                 0,  1,  1,  1}; // Check for all 8 neighbours of i and j
    int col[] = {-1, 0, 1, -1, 1, -1, 0, 1};

    vis[i][j] = true;

    for (int k = 0; k < 8; k++) // Checking for all 8 neighbouring sides
    {
        if ((i + row[k] < N && j + col[k] < M) &&
            (isSafe(A, i + row[k], j + col[k], vis, N,
                    M))) { // checking if node is not visited
            dfs(A, i + row[k], j + col[k], vis, N,
                M); // and A[i+row[k]][j+col[k]] is 1, call dfs again
                    // exit(0);
        }
    }
}

int findIslands(vector<int> A[], int N, int M) {
    vector<vector<bool>> visited(
        N,
        vector<bool>(
            M, false)); // Created a visited array intially all false(unvisited)
    int count = 0;      // Number of different islands
    for (int i = 0; i < N; i++) // Loop through every point in the matrix
    {
        for (int j = 0; j < M; j++) {
            if (!visited[i][j] and A[i][j]) { // If point is not already visited
                                              // and A[i][j] is an island
                dfs(A, i, j, visited, N, M);  // Call dfs
                // exit(0);
                count += 1;
            }
        }
    }
    return count;
}
