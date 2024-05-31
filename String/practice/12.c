#include <stdio.h>
#include <string.h>

void bubbleSort(char arr[][100], int n)
{
    char temp[100];
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j + 1]);
                strcpy(arr[j + 1], temp);
            }
        }
    }
}

int main()
{
    int n;

    printf("Input number of strings: ");
    scanf("%d", &n);
    getchar();

    char strings[n][100];

    printf("Input strings:\n");
    for (int i = 0; i < n; i++)
    {
        fgets(strings[i], sizeof(strings[i]), stdin);
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    bubbleSort(strings, n);

    printf("\nThe strings appear after sorting:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s\n", strings[i]);
    }

    return 0;
}
