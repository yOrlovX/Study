#include <stdio.h>

int main() {
    
    int number;
    int divider = 0;
    
    scanf("%d", &number);
    
    for(int i = 1; i <= number; i++) {
        if( number % i == 0) {
            ++divider;
        }
    }
        printf("%d\n",divider);
}
