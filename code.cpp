#include <bits/stdc++.h>
#define N 4
using namespace std;
bool solveQueen(int board[N][N], int col, int N);
bool isSafe(int board, int row, int col);
int main(int argc, char const *argv[])
{
    int board[N][N]={0};
   
    if (solveQueen(board, 0, N))
    {
        for (int i = 1; i < N; i++)
        {
            for (int j = 1; j < N; j++)
            {
                cout << board[i][j] << " " << endl;
            }
        }
    }
    return 0;
}

bool solveQueen(int board, int col, int N)
{
    if (col > N || col == N)
    {
        return (true);
    }
    else
    {
        for (int k = 1; k < N; k++)
        {
            if (isSafe(board, i, col))
            {
                board[i][col]=1;
                if(solveQueen(board, col+1, N))
                {
                    return(true);
                }
                board[i][col]=0;
            }
        }
    }
}
bool isSafe(int board, int row, int col)
{
    for (int i = 1; i < col; i++)
    {
        if (board[row][i] == 1)
        {
            return (false);
        }
        return (true);
        
    }
    
}