#include <stdio.h>

int main()
{

    char str[13];
    scanf("%12s", &str);
    int id = 0;
    char arr[4][4];

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            if (((i == 0 && j == 0)) || (i == 0 && j == 2) || (i == 2 && j == 0) || (i == 2 && j == 2))
            {
                arr[i][j] = '_';
            }
            else
            {
                arr[i][j] = str[id];
                id++;
            }
        }
    }

    for (int i = 0; i < 4; i++)
    {

        for (int j = 0; j < 4; j++)
        {
            printf("%c", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}