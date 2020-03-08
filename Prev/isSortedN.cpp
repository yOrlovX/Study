#include <stdio.h>

int main() {
    int quantity, currentNumber, firstN;
    bool sort = true;
    scanf("%d %d", &quantity, &firstN);
    
    for ( int i = 1; i < quantity; i++) {
        firstN = currentNumber;
        scanf("%d", &currentNumber);
        if (firstN > currentNumber) {
            sort = false;
        }
    }
        if (firstN < currentNumber) {
            printf("yes\n");
        }
        else {
            printf("no\n");
        }
    return 0;
}
