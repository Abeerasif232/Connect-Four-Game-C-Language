#include <stdio.h>

void printgrid(char grid[6][7], int slot, int p);
int win(char grid[6][7], int p);

int main()
{
    char grid[6][7];
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            grid[i][j] = ' ';
        }
    }
    printf("Welcome to Connect-4 Game! It will be fun, so let's begin.\n");
    printf("|0|1|2|3|4|5|6|\n");
    printf("\n|%c|%c|%c|%c|%c|%c|%c|\n", grid[0][0], grid[0][1], grid[0][2], grid[0][3], grid[0][4], grid[0][5], grid[0][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[1][0], grid[1][1], grid[1][2], grid[1][3], grid[1][4], grid[1][5], grid[1][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[2][0], grid[2][1], grid[2][2], grid[2][3], grid[2][4], grid[2][5], grid[2][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[3][0], grid[3][1], grid[3][2], grid[3][3], grid[3][4], grid[3][5], grid[3][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[4][0], grid[4][1], grid[4][2], grid[4][3], grid[4][4], grid[4][5], grid[4][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[5][0], grid[5][1], grid[5][2], grid[5][3], grid[5][4], grid[5][5], grid[5][6]);
    printf("---------------\n");
    int turns = 0, i = 2, player, slot;
    while (turns != 43)
    {
        if (i % 2 == 0)
        {
            player = 1;
        }
        else
        {
            player = 2;
        }
        i++;
        turns++;
        printf("\nPlayer-%d please enter slot number (0-6) >> ", player);
        scanf("%d", &slot);
        printf("\n");
        printgrid(grid, slot, player);
        printf("\n");
        int w = win(grid, player);
        if (w == 1)
        {
            break;
        }
    }

    return 0;
}

void printgrid(char grid[6][7], int slot, int p)
{
    char c = 'O';
    if (p == 1)
    {
        c = 'X';
    }
    if (slot == 0)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][0] == ' ')
            {
                grid[i][0] = c;
                break;
            }
        }
    }
    else if (slot == 1)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][1] == ' ')
            {
                grid[i][1] = c;
                break;
            }
        }
    }
    else if (slot == 2)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][2] == ' ')
            {
                grid[i][2] = c;
                break;
            }
        }
    }
    else if (slot == 3)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][3] == ' ')
            {
                grid[i][3] = c;
                break;
            }
        }
    }
    else if (slot == 4)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][4] == ' ')
            {
                grid[i][4] = c;
                break;
            }
        }
    }
    else if (slot == 5)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][5] == ' ')
            {
                grid[i][5] = c;
                break;
            }
        }
    }
    else if (slot == 6)
    {
        for (int i = 6; i >= 0; i--)
        {
            if (grid[i][6] == ' ')
            {
                grid[i][6] = c;
                break;
            }
        }
    }
    printf("|0|1|2|3|4|5|6|\n");
    printf("\n|%c|%c|%c|%c|%c|%c|%c|\n", grid[0][0], grid[0][1], grid[0][2], grid[0][3], grid[0][4], grid[0][5], grid[0][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[1][0], grid[1][1], grid[1][2], grid[1][3], grid[1][4], grid[1][5], grid[1][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[2][0], grid[2][1], grid[2][2], grid[2][3], grid[2][4], grid[2][5], grid[2][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[3][0], grid[3][1], grid[3][2], grid[3][3], grid[3][4], grid[3][5], grid[3][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[4][0], grid[4][1], grid[4][2], grid[4][3], grid[4][4], grid[4][5], grid[4][6]);
    printf("|%c|%c|%c|%c|%c|%c|%c|\n", grid[5][0], grid[5][1], grid[5][2], grid[5][3], grid[5][4], grid[5][5], grid[5][6]);
    printf("---------------\n");
}

int win(char grid[6][7], int p)
{
    int w = 0;
    for (int i = 0; i < 6; i++)
    {
        if (grid[i][0] == grid[i][1] && grid[i][1] == grid[i][2] && grid[i][2] == grid[i][3] && (grid[i][0] != ' ' && grid[i][1] != ' ' && grid[i][2] != ' ' && grid[i][3] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
        if (grid[i][1] == grid[i][2] && grid[i][2] == grid[i][3] && grid[i][3] == grid[i][4] && (grid[i][1] != ' ' && grid[i][2] != ' ' && grid[i][3] != ' ' && grid[i][4] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
        if (grid[i][2] == grid[i][3] && grid[i][3] == grid[i][4] && grid[i][4] == grid[i][5] && (grid[i][2] != ' ' && grid[i][3] != ' ' && grid[i][4] != ' ' && grid[i][5] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
        if (grid[i][3] == grid[i][4] && grid[i][4] == grid[i][5] && grid[i][5] == grid[i][6] && (grid[i][3] != ' ' && grid[i][4] != ' ' && grid[i][5] != ' ' && grid[i][6] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
    }

    for (int j = 0; j < 7; j++)
    {
        if (grid[0][j] == grid[1][j] && grid[1][j] == grid[2][j] && grid[2][j] == grid[3][j] && (grid[0][j] != ' ' && grid[1][j] != ' ' && grid[2][j] != ' ' && grid[3][j] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
        if (grid[1][j] == grid[2][j] && grid[2][j] == grid[3][j] && grid[3][j] == grid[4][j] && (grid[1][j] != ' ' && grid[2][j] != ' ' && grid[3][j] != ' ' && grid[4][j] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
        if (grid[2][j] == grid[3][j] && grid[3][j] == grid[4][j] && grid[4][j] == grid[5][j] && (grid[2][j] != ' ' && grid[3][j] != ' ' && grid[4][j] != ' ' && grid[5][j] != ' '))
        {
            printf("Game Over!\nPlayer-%d won the game!", p);
            w = 1;
        }
    }

    // For first diagonals
    if (grid[0][0] == grid[1][1] && grid[1][1] == grid[2][2] && grid[2][2] == grid[3][3] && (grid[0][0] != ' ' && grid[1][1] != ' ' && grid[2][2] != ' ' && grid[3][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[0][1] == grid[1][2] && grid[1][2] == grid[2][3] && grid[2][3] == grid[3][4] && (grid[0][1] != ' ' && grid[1][2] != ' ' && grid[2][3] != ' ' && grid[3][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[0][2] == grid[1][3] && grid[1][3] == grid[2][4] && grid[2][4] == grid[3][5] && (grid[0][2] != ' ' && grid[1][3] != ' ' && grid[2][4] != ' ' && grid[3][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[0][3] == grid[1][4] && grid[1][4] == grid[2][5] && grid[2][5] == grid[3][6] && (grid[0][3] != ' ' && grid[1][4] != ' ' && grid[2][5] != ' ' && grid[3][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    // For second diagonals
    if (grid[3][0] == grid[2][1] && grid[2][1] == grid[1][2] && grid[1][2] == grid[0][3] && (grid[3][0] != ' ' && grid[2][1] != ' ' && grid[1][2] != ' ' && grid[0][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[3][1] == grid[2][2] && grid[2][2] == grid[1][2] && grid[1][3] == grid[0][4] && (grid[3][1] != ' ' && grid[2][2] != ' ' && grid[1][3] != ' ' && grid[0][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[3][2] == grid[2][3] && grid[2][3] == grid[1][4] && grid[1][4] == grid[0][5] && (grid[3][2] != ' ' && grid[2][3] != ' ' && grid[1][4] != ' ' && grid[0][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[3][3] == grid[2][4] && grid[2][4] == grid[1][5] && grid[1][5] == grid[0][6] && (grid[3][3] != ' ' && grid[2][4] != ' ' && grid[1][5] != ' ' && grid[0][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    // For third
    if (grid[1][0] == grid[2][1] && grid[2][1] == grid[3][2] && grid[3][2] == grid[4][3] && (grid[1][0] != ' ' && grid[2][1] != ' ' && grid[3][2] != ' ' && grid[4][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[1][1] == grid[2][2] && grid[2][2] == grid[3][3] && grid[3][3] == grid[4][4] && (grid[1][1] != ' ' && grid[2][2] != ' ' && grid[3][3] != ' ' && grid[4][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[1][2] == grid[2][3] && grid[2][3] == grid[3][4] && grid[3][4] == grid[4][5] && (grid[1][2] != ' ' && grid[2][3] != ' ' && grid[3][4] != ' ' && grid[4][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[1][3] == grid[2][4] && grid[2][4] == grid[3][5] && grid[3][5] == grid[4][6] && (grid[1][3] != ' ' && grid[2][4] != ' ' && grid[3][5] != ' ' && grid[4][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    // for fourth
    if (grid[4][0] == grid[3][1] && grid[3][1] == grid[2][2] && grid[2][2] == grid[1][3] && (grid[4][0] != ' ' && grid[3][1] != ' ' && grid[2][2] != ' ' && grid[1][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[4][1] == grid[3][2] && grid[3][2] == grid[2][2] && grid[2][3] == grid[1][4] && (grid[4][1] != ' ' && grid[3][2] != ' ' && grid[2][3] != ' ' && grid[1][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[4][2] == grid[3][3] && grid[3][3] == grid[2][4] && grid[2][4] == grid[1][5] && (grid[4][2] != ' ' && grid[3][3] != ' ' && grid[2][4] != ' ' && grid[1][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[4][3] == grid[3][4] && grid[3][4] == grid[2][5] && grid[2][5] == grid[1][6] && (grid[4][3] != ' ' && grid[3][4] != ' ' && grid[2][5] != ' ' && grid[1][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    // For fifth
    if (grid[2][0] == grid[3][1] && grid[3][1] == grid[4][2] && grid[4][2] == grid[5][3] && (grid[2][0] != ' ' && grid[3][1] != ' ' && grid[4][2] != ' ' && grid[5][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[2][1] == grid[3][2] && grid[3][2] == grid[4][3] && grid[4][3] == grid[5][4] && (grid[2][1] != ' ' && grid[3][2] != ' ' && grid[4][3] != ' ' && grid[5][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[2][2] == grid[3][3] && grid[3][3] == grid[4][4] && grid[4][4] == grid[5][5] && (grid[2][2] != ' ' && grid[3][3] != ' ' && grid[4][4] != ' ' && grid[5][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[2][3] == grid[3][4] && grid[3][4] == grid[4][5] && grid[4][5] == grid[5][6] && (grid[2][3] != ' ' && grid[3][4] != ' ' && grid[4][5] != ' ' && grid[5][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    // for sixth
    if (grid[5][0] == grid[4][1] && grid[4][1] == grid[3][2] && grid[3][2] == grid[2][3] && (grid[5][0] != ' ' && grid[4][1] != ' ' && grid[3][2] != ' ' && grid[2][3] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[5][1] == grid[4][2] && grid[4][2] == grid[3][2] && grid[3][3] == grid[2][4] && (grid[5][1] != ' ' && grid[4][2] != ' ' && grid[3][3] != ' ' && grid[2][4] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[5][2] == grid[4][3] && grid[4][3] == grid[3][4] && grid[3][4] == grid[2][5] && (grid[5][2] != ' ' && grid[4][3] != ' ' && grid[3][4] != ' ' && grid[2][5] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }
    if (grid[5][3] == grid[4][4] && grid[4][4] == grid[3][5] && grid[3][5] == grid[2][6] && (grid[5][3] != ' ' && grid[4][4] != ' ' && grid[3][5] != ' ' && grid[2][6] != ' '))
    {
        printf("Game Over!\nPlayer-%d won the game!", p);
        w = 1;
    }

    return w;
}