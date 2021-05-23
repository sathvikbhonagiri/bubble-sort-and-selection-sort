#include<stdio.h>
void bubbleSort(int x[], int n);
void printArray(int x[], int n);
void swap(int *xp, int *yp);
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
  bubblesort(a,size);
printf("Sorted array: \n");
    printArray(a, size);

}
void bubblesort(int x[], int n)
{
   int i, j;
   for (i = 0; i < n-1; i++)      
  
       // Last i elements are already in place   
       for (j = 0; j < n-i-1; j++) 
           if (x[j] > x[j+1])
              swap(&x[j], &x[j+1]);
}
void printArray(int x[], int n)
{
    int i;
    for (i=0; i <n; i++)
        printf("%d ",x[i]);
    printf("\n");
}
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}