#include <stdio.h>

int main() {
    int min, max;
    int divider = 2;
    
    scanf("%d %d", &min, &max);
    
    int slisedMin = min + min % divider;
    
    for ( ; slisedMin <= max; slisedMin += divider) {
        printf("%d\n", slisedMin);
    }
    
    return 0;
}
