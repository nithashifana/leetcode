void dfs(char** grid, int m, int n, int i, int j) {
    if(i < 0|| j < 0 || i > m - 1 || j > n - 1 || grid[i][j] != '1') {
        return;
    }

    grid[i][j] = '2';
    dfs(grid, m, n, i + 1, j);
    dfs(grid, m, n, i, j + 1);
    dfs(grid, m, n, i - 1, j);
    dfs(grid, m, n, i, j - 1);
}

int numIslands(char** grid, int gridSize, int* gridColSize) {
    int c = 0;
    for(int i = 0; i < gridSize ; i ++) {
        for(int j = 0; j < gridColSize[i]; j ++) {
            if(grid[i][j] == '1') {
                c ++;
                dfs(grid, gridSize, gridColSize[i], i, j);
            }
        }
    }
    return c;
}