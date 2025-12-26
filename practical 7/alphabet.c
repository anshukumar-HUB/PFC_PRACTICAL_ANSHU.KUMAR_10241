//Alphabet pattern
//Name- Anshu Kumar
// ERP - 10241
#include <stdio.h>

int main() {
    for(int i = 0; i < 4; i++) {
        char ch = 'A';
        for(int j = 0; j <= i; j++) {
            printf("%c", ch++);
        }
        printf("\n");
    }
    return 0;
}

// output
//A
//AB
//ABC

//ABCD
