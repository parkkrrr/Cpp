#include <iostream>

int main()
{

    int matrix[3][3];
    // int n=matrix.length();
    // int m=matrix[0].length();

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            scanf("%d", &matrix[i][j]);
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%d ", matrix[i][j]);
        std::cout << "\n";
    }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
            if (matrix[i][j] == 6)
                printf("%d * %d ", i,j);
                //break


    return 0;
}