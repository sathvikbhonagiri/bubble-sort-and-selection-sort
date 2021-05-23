#include<stdio.h>
 void selectionsort(int x[],int n);
 void swap(int *xp, int *yp);
 void print(int x[], int n);
void main()
{  int size;
  printf("enter the size of array\n");
  scanf("%d",&size);
  int a[size],i,j;
  printf("input value\n");
  for(i=0;i<size;i++)
  { 
      scanf("%d",&a[i]);
  }
  selectionsort(a,size);
  printf("after sorting\n");
  print(a,size);}
  void selectionsort(int x[],int n)
  {  int min,i,j;
      for(i=0;i<n-1;i++)
  {   min=i;
      for(j=i+1;j<n;j++)
      {     
          if(x[j]<x[min])
           min=j;
           swap(&x[min],&x[i]);
      } 
 }}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
void print(int x[], int n)
{
    int i;
    for (i=0; i <n; i++)
        printf("%d\t ",x[i]);
    printf("\n");
}