1.switch case

 #include<stdio.h>
   int main()
   {
           double a,b;
           printf("enter 2 values\n");
           scanf("%le%le",&a,&b);
           printf("choose one\na.addition\ns.subtraction\n");
           char c;
           scanf("\n%c",&c);
          switch(c)
          {
                  case 'a':printf("%le\n",a+b);
                          break;
                  case 's':printf("%le\n",a-b);
                          break;
                  default:printf("no action\n");
          }
  return 0;
  }

2. Break and continue

 #include<stdio.h>
   int main()
   {
           int i=0,n,sum=0;
           while(i<10)
           {
           printf("enter num\n");
           scanf("%d",&n);
           if(n==0)
          break;
          else if(n<0)
          continue;
          else
          {
          sum=sum+i;
          i++;
          }
          }
          printf("%d\n",sum);
  }

3. even and odd

 #include<stdio.h>
   int main()
   {
           int i=1;
           while(i<=100)
           {
                   if(i%2==0)
                   printf("even:%d\n",i);
           i++;
          }
          for(i=1;i<=100;i++)
          {
                  if(i%2!=0)
                  printf("odd:%d\n",i);
          }
          return 0;
  }
