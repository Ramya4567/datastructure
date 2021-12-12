#include<stdio.h>  
void print_arr(int a[], int n);  
void bubble_sort(int a[], int n);
int main()  
{
   int a[30], n;
   int i;
   printf("enter the size of the array :");
   scanf("%d",&n);  
   for(i=0; i<n; i++)
   {
     printf("enter the element %d: \t",i+1);  
     scanf("%d",&a[i]);
   }  
   
   bubble_sort(a,n);  
   print_arr(a,n);
}

void print_arr(int a[], int n)
{
   int i;
   printf("the elements in the array are:");  
   for(i=0;i<n;i++)
   {
      printf("%d \t",a[i]);
   }
}
 
void bubble_sort(int a[], int n)  
{
   int i,j,temp,flag;  
   for(i=0;i<n-1;i++)
   {
     for(j=0;j<n-i-1;j++)
     {  
       flag=0;
       if(a[j]>a[j+1])
       {
         temp=a[j];
         a[j]=a[j+1];
         a[j+1]=temp;  
         flag=1;
       }
     }
   }
}