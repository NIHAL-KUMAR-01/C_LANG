#include<stdio.h>
int main (){
//                                         TYPES OF CONDITIONAL STATEMENT 
//                                         if ,else if ,nested,
//                                        simple use of if statement 
/*
int marks;
printf("Enter marks :-");
scanf("%d",& marks);
if (marks>=60){
    printf("your entered marks is %d and passed in the examination\n",marks);
    printf("........THANK YOU......");
}
*/
//                                   use of if and else if statement
/*int marks,regno;
printf("Enter Registration no :-");
scanf("%d",& regno);
printf("YOUR REGISTRATION NO IS :-%d \n",regno);
printf("Enter Marks out of 100 :-");
scanf("%d",& marks);
if (marks>=60 && marks<70){
    printf("student having %d marks secured _D_GRADE");
}
else if (marks>=70 && marks<80){
    printf("student having %d marks secured _C_GRADE");
}
else if (marks>=80 && marks<90){
    printf("student having %d marks secured _B_GRADE");
}
else if (marks>=90 && marks<100){
    printf("student having %d marks secured _A_GRADE");
}
else{
    printf("student ")
}
*/
//                                   PROGRAM TO CHECK EVEN OR ODD
/*
int num1;
printf("Enter number to check even or odd:-");
scanf("%d",& num1);
if (num1%2==0){
    printf(" entered number %d is a even number",num1);
}
else{
    printf("entered number %d is a odd number",num1);
}
*/
/*
int a ,b;
printf("Enter a :-");
scanf("%d",& a);
printf("Enter b :-");
scanf("%d",& b);
if (a==b) {
    printf("your  both no. %d and %d are equal",a,b);
}
else{
    if (a>b){
        printf("entered value a(%d) is greater than b(%d) ",a,b);

    }
    else{
        printf("entered value a(%d) is lesser than b(%d)",a,b);
    }
}
*/
////                                            SALES AND COMMISSION PROGRAM
/*
int sales;
printf("Enter sales value(Rs.):-");
scanf("%d",& sales);
if (sales<=1000){
    printf("your sale is Rs %d and your commission is Rs 0(No commission) ",sales);
}
else if (sales>1000 && sales <= 2000){
    printf("your sale is Rs %d and your commission(5 %%) for that is Rs %.2f",sales ,(sales* 0.05));
}
else if (sales>2000 && sales <= 5000){
    printf("your sale is Rs %d and your commission(8 %%) for that is Rs %.2f",sales ,(sales* 0.08));
}
else if (sales>5000){
    printf("your sale is Rs %d and your commission(10 %%) for that is Rs %.2f",sales ,(sales* 0.10 ));
}
*/

////                                              ADDITION SUBTRACTION MULTIPLICATION DIVISION BY SWITCH 
/*
float a,b;
int choice;
printf("\n\n         -: CHOICES :-         \n 1.ADDITION\n 2.SUBTRACTION\n 3.MULTIPLICATION\n 4.DIVISION\n");
printf("ENTER YOUR CHOICE (1-4) :");
scanf("%d",& choice);
printf("Enter first no :-");
scanf("%f",& a);
printf("Enter Second no :-");
scanf("%f",& b);
switch(choice)
{
    case 1:
    printf("The addition of %.2f and %.2f is %.2f",a,b,a+b);
    break;
    case 2:
    printf("The subtraction of (%.2f-%.2f)is %.2f",a,b,a-b);
    break;
    case 3:
    printf("The multiplication  of (%.2f*%.2f) is %.2f",a,b,a*b);
    break;
    case 4:
    printf("The addition of (%.2f/%.2f) is %.2f",a,b,a/b);
    break;
    default:
    printf("INVALID CHOICE ");
}
*/
/////////////////////////////////////CELCIUS TO FARENHITE OR DEGREE F TO DEGREE C
/*
float c , f;
int choice;
printf("     -:CHOICES:-       \n 1.DEGREE C TO F \n 2.DEGREE F TO C \n");
printf("ENTER CHOICE:-");
scanf("%d",& choice);
switch (choice)
{
    case 1:
    printf("ENTER DEGREE IN C : ");
    scanf("%f",& c);
    printf("THE VALUE OF %.2f DEGREE CELCIUS EQUALS TO %.2f FARHENHITE.",c,(9*c/5)+32);
    break;
    case 2:
    printf("ENTER DEGREE IN F : ");
    scanf("%f",& f);
    printf("THE VALUE OF %.2f DEGREE FARHENHITE EQUALS TO %.2f CELCIUS.",f,(5*f-5*32)/9);
    break;
    default:
    printf("INVALID CHOICE");
}
*/
////////////////////////////////////////// TIME TABLE FORMAT/////////////////////////////////////

/*
char choice;
printf("              -:YOUR CHOICES:-     \n M for Monday\n T for Tuesday\n W for Wednesday\n t for Thrusday\n F for Friday\n s for saturday\n S for Sunday \n ");
printf("Enter choice: ");
scanf("%c",& choice);
switch(choice)
{
    case 'M':
    printf("IT'S MONDAY and your physics lab is at 3.30-5.30 ");
    break;
    case 'T':
    printf("IT'S TUEDAY and your IME lab is at 3.30-5.30 ");
    break;
    case 'W':
    printf("IT'S WEDNESDAY and your physics theory class is at 1.30-2.30 ");
    break;    
    case 't':
    printf("IT'S THRUSDAY and your PROBLEM SOLVING CLASS is at 9.30-11.30 ");
    break;
    case 'F':
    printf("IT'S FRIDAY and your ESET  is at 12.30-1.30 ");
    break;
    case 's':
    printf("IT'S SATURDAY and your IME theory  is at 3.30-5.30 ");
    break;
    case 'S':
    printf("IT'S SUNDAY and HOLIDAY");
    break;
    default:
    printf("          INVALID CHOICE        ");
}
*/
////////////////////////////////////LOOP---------- WHILE LOOP
/*
int i;
i=1;
while(i<100){
    printf("*");
    i=i+1;
}
*/
/////////////////////////////////////////////////   06.03.2023
/*
int choices;
printf("enter choice:-");
scanf("%d",& choices);
switch (choices){
    case 1:
    printf("hello world 1 \n");
    break;
    case 2:
    printf("hello world 2");
    break;
    default:
    printf("BYE ");
    break;
}
*/
/*
int attendance;
printf("Enter attendance(percentage) :-");
scanf("%d",& attendance);

if (attendance>75){
    printf("Attendance is %d  and  eligible for exam",attendance);
}
else {
    printf("Attendance is %d  and not eligible for exam",attendance); 
}
*/
int yearofe;
printf("enter year of experience: ");
scanf("%d",& yearofe); 
switch(yearofe){
    case 2:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(15000+(15000*0.20)));
    break;
    case 4:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(25000+(25000*0.25)));
    break;
    case 6:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(38000+(38000*0.32)));
    break;
    case 8:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(52000+(52000*0.35)));
    break;
    case 9:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(52000+(52000*0.35)));
    break;
    case 11:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(63000+(63000*0.40)));
    break;
    case 13:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(72000+(72000*0.47)));
    break;
    case 14:
    printf("YEAR OF EXPERIENCE IS %d and your incremented salary is %.2f",yearofe,(72000+(72000*0.20)));
    break;
    default:
    printf("NOT ELIGIBLE FOR ANY INCREMENT");
    break;

}



return 0;
}
