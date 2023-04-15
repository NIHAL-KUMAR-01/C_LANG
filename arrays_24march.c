#include <stdio.h>
int main()
{
    printf("for rows address \n");
    int arrays1[3][3] = {{20, 21, 22}, {15, 16, 12}, {20, 14, 18}};
    int address, badd = 1048, w = 2, n = 3; // badd-base address given 5000
    // address[i][j] = I + W * (i - l_row) * N + (j - l_col)

    // l_row- lower bound of row=0
    // N- number of columns =3
    // l_col - lower bound of column=0
    // w-size of data =2
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("address(%d,%d)= %d\n", i, j, (badd + w * (i - 0) * n) + (j - 0));
        }
    }
    printf("column major address\n");
    // address[i][j] = I + W * ((j – l_col) * M + (i – l_row))
    // I : Base address
    // l_row : lower bound for row
    // l_col : lower bound for column
    // W : sizeof (data type)
    // N : Number of columns

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("address(%d,%d)= %d\n", i, j, (badd + w * (j - 0) * n) + (i - 0));
        }
    }
    return 0;
}