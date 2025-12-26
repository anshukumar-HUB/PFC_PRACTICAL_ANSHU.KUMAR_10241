//sum of even number
//Name-Anshu Kumar
// ERP - 10241
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        if(i % 2 != 0)
            continue;
        sum += i;
    }

    printf("Sum of even numbers = %d", sum);
    return 0;
}


//Output:
// Enter n: 5
// Sum of even numbers = 6
