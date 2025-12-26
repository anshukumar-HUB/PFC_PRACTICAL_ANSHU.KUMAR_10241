//Atm pin authentication
//Name- Anshu Kumar
// ERP - 10241
#include <stdio.h>

int main() {
    int pin, secretPin = 1234;

    printf("Enter ATM PIN: ");
    scanf("%d", &pin);

    if(pin == secretPin)
        printf("Access Granted");
    else
        printf("Invalid PIN");

    return 0;
}


//Output:
// Enter your ATM pin:1234
// Access granted.

