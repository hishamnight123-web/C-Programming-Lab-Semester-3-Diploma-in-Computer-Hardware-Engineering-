#include <stdio.h>
#include <math.h>

int main() {
    int num, original;
    int sum = 0;

    scanf("%d", &num);
    original = num;

   //implement your code here

    if (sum == original)
        printf("Armstrong\n");
    else
        printf("Not Armstrong\n");

    return 0;
}
