#include <stdio.h>
#include<math.h>
#include <stdlib.h>

int main()
{

    int x = 0;
    int y = 0;
    char ch;
    scanf("%c", &ch);

    while (ch != '\n')
    {
        if (ch == 'E')
            x++;
        else if (ch == 'W')
            x--;
        else if (ch == 'N')
            y++;
        else if (ch == 'S')
            y--;
        scanf("%c", &ch);
    }

    if (x >= 0 && y >= 0)
    {
        for (int i = 1; i <= x; i++)
        {
            printf("E");
        }
        for (int i = 1; i <= y; i++)
        {
            printf("N");
        }
    }

    if (x <= 0 && y >= 0)
    {
        for (int i = 1; i <= y; i++)
        {
            printf("N");
        }
        for (int i = 1; i <= abs(x); i++)
        {
            printf("W");
        }
    }

    if (x <= 0 && y <= 0)
    {
        for (int i = 1; i <= abs(y); i++)
        {
            printf("S");
        }
        for (int i = 1; i <= abs(x); i++)
        {
            printf("W");
        }
    }

    if (x >= 0 && y <= 0)
    {
        for (int i = 1; i <= x; i++)
        {
            printf("E");
        }
        for (int i = 1; i <= abs(y); i++)
        {
            printf("S");
        }
    }

    return 0;
}