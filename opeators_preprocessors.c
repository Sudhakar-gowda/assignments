===================  OPERATORS ========================

Evaluate the expression in a step by step way based on operator precedence and associativity

1) printf("%d\n",1==5==5);
It will print 0 because == operator is used to check if its left-hand side operand is equal to right-hand side operand. Since 1 is not equal to 5, so the condition became false and thus printed 0.

2) int i =0;
   printf("%d %d",i,i++);
The output of the above code is: 1 0
Because first it store I,I++ in the form of stack.
First execution is last in(first out) ie.. print I value in (I++) then increment I to 1; and secondly print incremented I value ie.1;

3) int x=5;
   printf("%d %d %d\n",x++,x++,x++);
Output : 7 6 5

4) int x=2;
   printf("%d   ",++x++);
   printf("%d\n",x++);
Output : 3 3

5) int k=1;
   printf("%d==1 is ""%s\n",k,k==1?"TRUE":"FALSE");
Output  : 1=1 is TRUE

6) int i=5;
   i=i++ - --i + ++i;
Output : 6

7) int a=7;
   a+=a+=a-=6;
   printf("%d\n",a);
Output : 4 

8) int x=10,y=5,p,q;
   p=x>9;
   q=p||(x=5,y=10);
   printf("%d %d %d\n",q,x,y);
Output 1 10 5

9) int x=2,y=1;
   y+=x<<=2;
   printf("%d %d\n",x,y);
Output : 8 9

10) int x=2,y=4,z;
    z=y++*x++|y--;
    printf("%d\n",z);
Output : 13

11) int a=5,b=6,c=7,d;
    d=a&=b&=c&&a;
    printf("%d\n",d);
Output : 0

12) int i=10;
    i=(10<10)?(10>=10)?(10<=10)?1:2:3:4;
    printf("%d\n",i);
Output : 4

13) int a=10,b=20;
    a=(a>5||b=6?40:50);
    printf("%d\n",a);
Output : Error

14) printf("%x\n",-1>>4);
    printf("%x\n",-1<<4);
Output : ffffffff
               fffffff0

15) int x=7;
    x=(x<<=x%2);
    printf("%d\n",x);
Output :14

16) int a=2,b=5,c=1;
    printf("%d\n",(b>=a>=c?1:0));
Output : 1

17) int a=5;
    a=a-~a +1;
    printf("%d\n",a);
Output : 12

18) a=b=c=1;
    x=--a||++b*(3-1)/2&&b*(--c/3);
    printf("%d\n",x);
Output : Error

19) a=10
    b = -5
    c = 2.5
    printf("%d %d",sizeof(a) + sizeof((++b) *c, b);
Output : 8 1047672440

20) int i=5;
    i=i++ - i
    printf("%d",i)
Output : -1
========================================= PREPROCESSORS AND MACROS ===========================

1) What will be the output of the C program?
#include<stdio.h>
#define CONDITION(i)\
printf("preprocessor works\n");                         
int main()
{
	CONDITION(0);
	return 0;
}
Output : Preprocessor works

2) What will be the output of the C program?
#include<stdio.h>
# define loop while'true'
int main()
{
	'loop';  
	printf("preprocessor-aptitude");
	return 0;
}
Output : preprocessor-aptitude

3) What will be the output of the C program?
#include<stdio.h>
# define x --5
int main()
{
	printf("%d",x);
	return 0;
}
Output : Error

4) What will be the output of the C program ?
#include<stdio.h>
#define sqr(x) ++x * ++x
int main()
{
	int a = 3, z;
	z = ++a * ++a;     
	a -= 3;
	printf("%d %d", sqr(a), z);
	return 0;
}
Output : 16 25

5) What will be the output of the C program?
#include<stdio.h>                      
#define x 1+2
int main()
{
	int i;
	i = x * x * x;
	printf("%d",i);
}
Output : 7

6) What will be the output of the C program?
#include<stdio.h>
#define a =
int main()
{
	int num a 6;
	printf("%d",num);
	return 0;
}
Output : 6

7) What will be the output of the C program?
#include<stdio.h>
#define fun(x,y) x*y
int main()
{
	int x = 2, y = 1;
	printf("%d",fun(x + 2, y - 1));
	return 0;
}
Output : 3

8) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char DATE[15] = "Current Date";
	printf("%s\n", __DATE__ );
	return 0;
}
Output : Feb 2 2022

9) What will be the output of the C program?
#include<stdio.h>
int main()
{
	char TIME[15] = "Current Time";
	printf("%s\n",__TIME__);
	return 0;
}
Output : 07:04:46

10) What will be the output of the C program?
#include<stdio.h>
int main()
{	
	printf("Line :%d\n", __LINE__ );
	return 0;
}
Output : Line : 12

11) What will be the output of the C program?
#include<stdio.h>
#define  preprocessor_works(x, y)  \
	printf(#x " and " #y " are great!\n")
int main(void) {
	preprocessor_works(you, me);
	return 0;
}
Output : You and me are great!

12) What will be the output of the C program?
#include<stdio.h>
# define puts  "%s C preprocessor"
int main()
{
	printf(puts, puts);
	return 0;
}
Output : %s C preprocesser c preprocessor

13) What will be the output of the C program?
#include<stdio.h>
#define preprocessor(n) printf ("macro" #n " = %d", macro##n)
int main(void) {
	int macro25 = 47;
	preprocessor(25);
	return 0;
}
Output : Macron25 = 47

14) What will be the output of the C program?
#include<stdio.h>
#include<string.h>
#define MACRO(num) ++num 
int main()
{
	char *ptr = "preprocessor";
	int num =strlen(ptr);
	printf("%s  ", MACRO(ptr));
	printf("%d", MACRO(num));
	return 0;
}
Output : reprocessor 13

15) What will be the output of the C program?
#include<stdio.h>
#define i 10
int main()
{
	#define i 20
	printf("%d",i);
	return 0;
}
Output : 20

16) What will be the output of the C program?
#include<stdio.h>
#define clrscr() 50
int main()
{
	clrscr();
	printf("%d\n",clrscr());
	return 0;
}
Output : 50

17) What will be the output of the C program?
#include<stdio.h>
#define int char
main()
{
	int i=5;
	printf ("sizeof (i) =%d", sizeof (i));
}
Output : sizeof (i) =1

18) Write programs to understand the usage of below preprocessor directives.
#include, #if, #ifdef, #ifndef, #else, #elif, #endif, #define, #undef, #line, #error, and #pragma

===================================== TYPEDEF =========================================

1) In the following code, the P2 is Integer Pointer or Integer?
typedef int *ptr;
ptr p1, p2; 
Ans : Interger Pointer

2)  In the following code what is 'P'?
typedef char *charp;
const charp P;
Ans : P is a constant

3) What is x in the following program?
#include<stdio.h>
int main()
{
    typedef char (*(*arrfptr[3])())[10];
    arrfptr x;
    return 0;
}
Ans : x is an array of three function pointers

4) What is apfArithmatics in the below statement?
typedef int (*apfArithmatics[3])(int,int); 
Ans : Pointer function, integer pointer to array

5) What is pf in the below statement?
typedef int (*pf)(int);
Ans : Pointer variable

6) What do the following declarations mean?
typedef char *pc; - pc is pointer to char
typedef pc fpc(); - fpc is function returning pointer to char
typedef fpc *pfpc; - declares pfpc as a pointer to fpc
typedef pfpc fpfpc(); - fpfpc is a function returning pfpc
typedef fpfpc *pfpfpc; - pfpfpc as a pointer to fpfpc
pfpfpc a[N]; pointer to a fontion return

