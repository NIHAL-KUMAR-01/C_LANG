#include <stdio.h>
#include <string.h>
struct books
{
    char bookname[100];
    float bookprice;
    int pages;
}book1;

int main()
{   
    scanf("%s",&book1.bookname);
    //strcpy(book1.bookname,"Gulliver's Travel");
    book1.bookprice=1120.36;
    book1.pages=365;
    printf("The Book Name %s\n",book1.bookname);
    printf("Maximum Retail Price $%.2f\n",book1.bookprice);
    printf("No of Pages %d",book1.pages);
    return 0;
}

