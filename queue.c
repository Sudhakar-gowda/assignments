#include<stdio.h>
#define s 5
int front=-1;
int rear=-1;
int q[s];
void enque(int ele)//10
{
	if(rear==s-1)          //   front=0  rear=0  rear=1               
	{
		printf("queue is full:\n");
		return;
	}
	else
	{
	    if(front==-1)     
	    front=0;
	    
	   rear++;
	   q[rear]=ele;//q[0]=10   q[1]=20  q[2]=30 q[3]=40 q[4]=50;rear=s-1
	}
}
void deque()
{
	if(front==-1)
	{
		printf("queue is empty\n");
		return;
	}
	else
	{
	    printf("deleted ele is %d\n",q[front]);//q[0]=10
	    front++;//front=1  q[1]=20
	 //   if(front>rear)
	   // front=rear=-1;
	}
}
void display()
{
    if(rear==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
 	   int i=front;//0  front moved from 0   to rear s-1
	   for(;i<=rear;i++)
	  printf("%d\n",q[i]);//q[0]=10,q[1]=20,30,40,50
    }
}
int main()
{
	enque(10);
	enque(20);
	enque(30);
	enque(40);
	enque(50);
	display();
	deque();
	display();
	deque();
	display();
}
