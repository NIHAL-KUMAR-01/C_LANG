//2. WAP to Add Two Distances (in inch-feet system) using Structures.

#include<stdio.h>
struct distance
{
    int feet;
    int inch;
};

int main(){
    struct distance d1,d2;
    d1.feet=12;
    d1.inch=12;
    d2.feet=12;
    d2.inch=14;

    d1.feet=d1.feet+d2.feet;
    d1.inch=d1.inch+d2.inch;

    if(d1.inch>=12){
        d1.feet=d1.feet+(d1.inch/12);
        d1.inch=d1.inch%12;
    }

    printf("The Total feet and inch is : %d' %d\"",d1.feet,d1.inch);
    
    return 0;
}