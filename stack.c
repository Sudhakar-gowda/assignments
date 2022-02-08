#include<stdio.h>
#define s 5  //size declaration
int stack[s];//declaration of stack with size
int tos=-1;//top of stack
void push(int ele)
{
                     // 0 1  2  3  4  top=s-1(4)
	if(tos==s-1)//4(stack is full)
	{
		printf("stck is full\n");
		return;
	}
	else
	{
	tos++;    //tos=0+       tos=1   tos=2  tos=3 tos=4
	stack[tos]=ele;// 10      20       30     40    50
	}
}
void pop()
{
	if(tos==-1)
	{	//implement of stack and queue  using linked list
		printf("stack is empty\n");
		return;
	}
	else
	{
	printf("poped ele %d\n",stack[tos]);//50  stack[4] stack[3]=40
	tos--;
	}
}
void display()
{
	if(tos== -1)
	{
		printf("stack is empty\n");
		return;
	}
	int i;
	for(i=0;i<=tos;i++)//0->10;1->20;2->30;3->40;4->50
	printf("%d\n",stack[i]);//stack[0]=10 20,30,40,50
}
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	push(50);
	display();
	pop();
	display();
}

