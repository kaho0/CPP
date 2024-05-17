#include <stdio.h>

int main()
{
    int n;
  scanf("%d",&n);
    char str[100];
    printf("Enter the string of length %d: ", n * n);
    scanf("%s", str);
    int id = 0;
    char arr[n][n];

    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
                arr[i][j] = str[id++];
                
            }
        }
    
    for (int i = 0; i < n; i++)
    {

        for (int j = 0; j < n; j++)
        {
            printf("%c", arr[j][i]);
        }
        printf("\n");
    }
}