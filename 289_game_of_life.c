
void gameOfLife(int **board, int boardSize, int *boardColSize)
{
    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardColSize[i]; j++)
        {
            int neighbours = 0;

            for (int di = -1; di <= 1; di++)
            {
                for (int dj = -1; dj <= 1; dj++)
                {
                    if (di == 0 && dj == 0)
                        continue;
                    int ni = i + di, nj = j + dj;
                    if (ni >= 0 && ni < boardSize && nj >= 0 && nj < boardColSize[i])
                        if (board[ni][nj] == 1 || board[ni][nj] == -1)
                            neighbours++;
                }
            }

            if (board[i][j] == 1 && (neighbours < 2 || neighbours > 3))
                board[i][j] = -1;
            if (board[i][j] == 0 && neighbours == 3)
                board[i][j] = 2;
        }
    }

    for (int i = 0; i < boardSize; i++)
    {
        for (int j = 0; j < boardColSize[i]; j++)
        {
            if (board[i][j] == -1)
                board[i][j] = 0;
            if (board[i][j] == 2)
                board[i][j] = 1;
        }
    }
}

/*
possible combinations:
2 was dead remains dead -> can keep as 0
3 was dead turns alive -> 3
4 was alive remains alive -> can keep 1
5 was alive turns dead -> 4
*/