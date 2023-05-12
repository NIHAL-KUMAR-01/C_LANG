// 1. WAP to Store records in a file.
#include <stdio.h>
int main()
{
    FILE *fp;
    fp = fopen("file1.txt", "w");
    fprintf(fp, "%s", "Hello world\n");
    fprintf(fp, "%s", "C programming");
    fclose(fp);
    return 0;
}