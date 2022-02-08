1.write a program to swap two numbers using pointers
#include<stdio.h>
   void ref(int *p, int *p1)
   {
           int temp=0;
           temp=*p;
           *p=*p1;
           *p1=temp;
   }
  int main()
  {
          int a,b;
          printf("enter 2 numbers:\n");
          scanf("%d%d",&a,&b);
          ref(&a,&b);
          printf("main a=%d\tb=%d\n",a,b);
       return 0;
	}

2,write a c programs to copy one array to another using pointers

 #include<stdio.h>
   int main()
   {
           int a[10],b[10];

           for(int i=0;i<5;i++)
           {
           printf("Enter  element\n");
           scanf("%d",&a[i]);
          }
          for(int i=0;i<5;i++)
          {
          b[i]=a[i];
          }
          for(int i=0;i<5;i++)
          {
          printf("%d\n",b[i]);
          }
  return 0;

  }


3,write a c program to add 2d array strings pointers

#include <stdio.h>
#define ROW     3
#define COL     3
int main(void)
{
    // 2d array
    int aiData [ROW][COL] = { { 9, 6, 1 }, { 144, 70, 50 }, {10, 12, 78} };
    int *piData = NULL; //pointer to integer
    int iRow =0, iCol =0;
    piData = &aiData[0][0]; //You can also write *aiData
    for (iRow = 0; iRow < ROW; ++iRow) //Loop of row
    {
        for (iCol = 0; iCol < COL; ++iCol)// Loop for coloum
        {
            //Read element of 2D array
            printf("aiData[%d][%d] = %d\n",iRow,iCol, *(piData + ( iRow * COL) + iCol));
        }
    }
    return 0;
}
