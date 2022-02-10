1.Write a C program to check Least Significant Bit (LSB) of a number is set or not.
#include <stdio.h>

int main()
{
    int i;
    printf("Enter any number: ");
    scanf("%d", &i);
    if(i & 1)
        printf("LSB of %d is set (1).", i);
    else
        printf("LSB of %d is unset (0).", i);

    return 0;
}
2.Write a C program to check Most Significant Bit (MSB) of a number is set or not.
#include <stdio.h>
#define BITS sizeof(int) * 8 

int main()
{
    int i, msb;
    printf("Enter any number: ");
    scanf("%d", &i);
    msb = 1 << (BITS - 1);

    if(i & msb)
        printf("MSB of %d is set (1).", i);
    else
        printf("MSB of %d is unset (0).", i);

    return 0;
}

3.Write a C program to get nth bit of a number.
#include <stdio.h>

int main()
{
    int i, j,k;


    printf("Enter any number: ");
    scanf("%d", &i);


    printf("Enter nth bit to check (0-31): ");
    scanf("%d", &j);


    k = (i >> j) & 1;

    printf("The %d bit is set to %d", j, k);

    return 0;
}

4.Write a C program to set nth bit of a number.
 #include <stdio.h>
int main()
{
    int i,j;
    printf("Enter the Number:");
    scanf("%d", &i);
    printf("Enter the Bit position you want to set(Between 0-31):");
    scanf("%d", &j);
    int mask=(1<<j);
        i=i|mask;
    printf("The number after set the bit in the given position is: %d",i);
    return 0;
}

5. Write a C program to clear nth bit of a number.
include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the Number:");
    scanf("%d", &a );

    printf("Enter the Bit position you want to clear(Between 0-31):");
    scanf("%d", &b);
 
    int c = (1 << b);
    
    a = a & (~c);
    printf("The number after clear the bit in the given position is: %d", a);
    return 0;
}

6.Write a C program to toggle nth bit of a number.
#include <stdio.h>

int main()
{
    int x, y, z;

    
    printf("Enter any number: ");
    scanf("%d", &x);


    printf("Enter nth bit to toggle (0-31): ");
    scanf("%d", &x);


    z = x ^ (1 << y);

    printf("Bit toggled successfully.\n\n");
    printf("Number before toggling %d bit: %d (in decimal)\n", y, x);
    printf("Number after toggling %d bit: %d (in decimal)\n", y,z);

    return 0;



7.write a C program to swap two numbers using bitwise operator.

#include <stdio.h>

int main() {
    int i = 10;
    int k = 20;
    printf(" value of i=%d k=%d before swapping", i, k);

    i = i ^ k;
    k = i ^ k;
    i = i ^ k;
    printf("value of i=%d k=%d after swapping", i, k);

    return 0;
}


~
~
~
~
~
~
~
~
~
~
bitwise.c[+] [unix] (15:59 31/12/1969)                                                                                                                                                                   119,1 Bot
-- INSERT --



