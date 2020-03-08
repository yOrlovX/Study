#include <stdio.h>

int main() {
    int amoebas, hours;
    
    scanf("%d %d", &amoebas, &hours);
    
    for ( int result = 1; result <= hours; result++) {
        printf("%d hours => %d amoeba(s)\n", result, amoebas *= 2);
    }
    
    return 0;
}
