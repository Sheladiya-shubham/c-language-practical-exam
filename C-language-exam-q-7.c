#include <stdio.h>

 main() {
    int i, j, val = 11; 

    for (i = 1; i <= 5; i++) { 
        for (j = 1; j <= i; j++) { 
            printf("%d ", val);
            val++; 
        }
        printf("\n");
    }

}
