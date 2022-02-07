#include <stdio.h>

int main()
{

    int x,y;
    int z;
    float w;

    x= 20;
     y=5;

    z = x + y;
    printf("\nAddition of %d and %d is = %d", x, y,z);

    z= x - y;
    printf("\nSubtraction of %d and %d is = %d", x, y, z);

    z = x * y;
    printf("\nMultiplication of %d and %d is = %d", x, y,z);

    w = (float)x / (float)y;
    printf("\nQuotient dividing %d by %d is  = %f", x, y, w);

    w = x % y;
    printf("\nRemainder dividing %d by %d is  = %d", x, y, w);
    
    return 0;
}




