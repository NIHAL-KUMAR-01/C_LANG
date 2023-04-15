 #include <stdio.h>

int main(){
    int stars, n;
    printf("Enter number of rows : ");
    scanf("%d", &stars);
    n = stars;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < stars; j++)
        {
            printf("* ");
        }
        stars-=2;
        printf("\n");
        for (int k = 0; k < n-stars; k++)
        {
            printf(" ");
        }
    }
    
    return 0;
}
