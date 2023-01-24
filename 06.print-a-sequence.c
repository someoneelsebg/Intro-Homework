#include <stdio.h>
#include <stdbool.h>

int main() {
    int first_number = 2;
    int i;
    int sd = 1;
    for (i = 0; i < 8; i++)
    {   
        sd *= (-1); 
        printf("%d, ", sd * ++first_number);
    }
    printf("%d\n", sd * (-1) * ++first_number);
    
    return 0;
}