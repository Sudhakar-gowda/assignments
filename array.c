1.Write a C program to copy all elements from an array to another array.

#include <stdio.h>        
int main()    
{       
    int arr1[] = {1, 2, 3, 4, 5};      
    int length = sizeof(arr1)/sizeof(arr1[0]);    
    int arr2[length];    
     for (int i = 0; i < length; i++) {     
      arr2[i] = arr1[i];     
    }      
    printf("Elements of original array: \n");    
    for (int i = 0; i < length; i++)
{     
        printf("%d ", arr1[i]);    
    }     
    printf("\n");    
    printf("Elements of new array: \n");    
    for (int i = 0; i < length; i++) 
{     
        printf("%d ", arr2[i]);    
    }    
    return 0;    
}    


2.Write a C program to insert and delete  an element in an array at specified position - write fns  insert(n) , delete(n), get(n) where  n is specfied position taken from user

#include <stdio.h>
int main()
{
    int arr[100];
    int i, item, pos, size=7;
    printf("Enter 7 elements: ");
    for (i = 0; i < size; i++)
        scanf("%d",&arr[i]);
    printf("Array before insertion: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    printf("Enter the element to be inserted: ");
    scanf("%d",&item);
    printf("Enter the position at which the element is to be inserted: ");
    scanf("%d",&pos);
    size++;
    for (i = size-1; i >= pos; i--)
        arr[i] = arr[i - 1];
    arr[pos - 1] = item;
    printf("Array after insertion: ");
    for (i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
    return 0;
}

3.Write a C program to count frequency of each element in an array.

#include <stdio.h>    
int main()    
{    
    int arr[] = {1, 2, 8, 3, 2, 2, 2, 5, 1};       
    int length = sizeof(arr)/sizeof(arr[0]);    
    int fr[length];    
    int visited = -1;       
    for(int i = 0; i < length; i++){    
        int count = 1;    
        for(int j = i+1; j < length; j++){    
            if(arr[i] == arr[j]){    
                count++;    
                //To avoid counting same element again    
                fr[j] = visited;    
            }    
        }    
        if(fr[i] != visited)    
            fr[i] = count;    
    }    
    printf("---------------------\n");    
    printf(" Element | Frequency\n");    
    printf("---------------------\n");    
    for(int i = 0; i < length; i++){    
        if(fr[i] != visited){    
            printf("    %d", arr[i]);    
            printf("    |  ");    
            printf("  %d\n", fr[i]);    
        }    
    }    
    printf("---------------------\n");    
    return 0;    
}    


4.Write a C program to find maximum and minimum element in an array.

#include <stdio.h>
int main()
{
    int a[1000],i,n,min,max;
    printf("Enter size of the array : ");
    scanf("%d",&n);
    printf("Enter elements in array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    min=max=a[0];
    for(i=1; i<n; i++)
    {
         if(min>a[i])
		  min=a[i];   
		   if(max<a[i])
		    max=a[i];       
    }
     printf("minimum of array is : %d",min);
          printf("\nmaximum of array is : %d",max);
    return 0;
}


5.Write a C program to check whether a string is palindrome or not. 

#include <string.h>
int main()
{
    char s[1000];  
    int i,n,c=0;
    printf("Enter  the string : ");
    gets(s);
    n=strlen(s);
    for(i=0;i<n/2;i++)  
    {
    	if(s[i]==s[n-i-1])
    	c++
 	}
 	if(c==i)
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");   
    return 0;
}

6.Write a C program to find first occurrence of a word in a given string.

#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100 
int main()
{
    char str[MAX_SIZE], word[MAX_SIZE];
    int i, index, found = 0;
    printf("Enter any string: ");
    gets(str);
    printf("Enter word to be searched: ");
    gets(word);
    index = 0;
    while(str[index] != '\0')
    {
        if(str[index] == word[0])
        {
            i=0;
            found = 1;
            while(word[i] != '\0')
            {
                if(str[index + i] != word[i])
                {
                    found = 0;
                    break;
                }
                i++;
            }
        }
        if(found == 1)
        {
            break;
        }
        index++;
    }
    if(found == 1)
    {
        printf("\n'%s' is found at index %d.", word, index);
    }
    else
    {
        printf("\n'%s' is not found.", word);
    }
    return 0;
}


7.Write a C program to concatenate two strings and find length of a new string.

#include<stdio.h>
#include<string.h>
void main()
{	
	char s1[25],s2[25];
	int l;
	printf("Enter first string=");
	scanf("%s",s1);
	printf("Enter second string=");
	scanf("%s",s2);
	strcat(s1,s2);
	l=strlen(s1);
	printf("Concatenate string=%s\n",s1);
	printf("Length of concatenate string=%d",l);
}	


