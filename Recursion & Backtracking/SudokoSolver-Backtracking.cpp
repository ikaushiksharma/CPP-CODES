#define N 9
#include <bits/stdc++.h>
using namespace std;
void print(int arr[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
            cout << arr[i][j] << " ";
        cout << endl;
    }
}

bool isSafe(int grid[N][N], int row, int col, int num)
{
    for (int i = 0; i < N; i++)
    {
        if (grid[row][i] == num)
            return false;
    }
    for (int i = 0; i < N; i++)
    {
        if (grid[i][col] == num)
            return false;
    }
    int rowStart = row - row % 3;
    int colStart = col - col % 3;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (grid[i + rowStart][j +
                                   colStart] == num)
                return false;
    return true;
}

bool solveSuduko(int grid[N][N], int row, int col)
{
    if (row == N && col == N)
        return true;
    if (col == N)
    {
        row++;
        col = 0;
    }
    if (grid[row][col] > 0)
        return solveSuduko(grid, row, col + 1); //RecursiveCall
    for (int num = 1; num <= N; num++)
    {
        if (isSafe(grid, row, col, num))
        {
            grid[row][col] = num;
            if (solveSuduko(grid, row, col + 1))
                return true;
            grid[row][col] = 0;
        }
    }    
    return false;
}
int main()
{
    int grid[N][N] = {{8, 9, 2, 0, 0, 5, 0, 0, 3},
                      {0, 0, 5, 1, 3, 0, 0, 4, 0},
                      {0, 4, 0, 7, 0, 8, 5, 0, 0},
                      {0, 6, 0, 0, 0, 0, 4, 0, 5},
                      {0, 1, 0, 0, 0, 0, 0, 3, 0},
                      {7, 0, 9, 0, 0, 0, 0, 8, 0},
                      {0, 0, 6, 8, 0, 1, 0, 9, 0},
                      {0, 3, 0, 0, 6, 4, 7, 0, 0},
                      {4, 0, 0, 3, 0, 0, 2, 6, 1}};

    if (solveSuduko(grid, 0, 0))
        print(grid);
    else
        cout << "no solution  exists " << endl;

    return 0;
}