
#include <stdio.h>

// function to move n disks from tower 'from' to tower 'to' using tower 'aux' as auxiliary
void towerOfHanoi(int n, char from, char to, char aux) {
    if (n == 1) {
        printf("Move disk 1 from tower %c to tower %c\n", from, to);
        return;
    }
    towerOfHanoi(n-1, from, aux, to);
    printf("Move disk %d from tower %c to tower %c\n", n, from, to);
    towerOfHanoi(n-1, aux, to, from);
}

int main() {
    int n = 3; // number of disks
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
