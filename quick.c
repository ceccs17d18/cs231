#include<stdio.h>//darsana.m,s3.d,roll:18,quick sort recussive
void quicksort(int number[25],int first,int last)
{int i, j, pivot, temp;
if(first<last)
{
      pivot=first;
      i=first;
      j=last;
      while(i<j)
      	{while(number[i]<=number[pivot]&&i<last)
           i++;
         while(number[j]>number[pivot])
            j--;
         if(i<j)
         {   temp=number[i];
            number[i]=number[j];
            number[j]=temp;
         }
        }
      temp=number[pivot];
      number[pivot]=number[j];
      number[j]=temp;
      quicksort(number,first,j-1);
      quicksort(number,j+1,last);

      }
}

int main()
   {int i, count, number[25];
   printf("enter the no of elements ");
   scanf("%d",&count);
   printf("Enter the elements: ", count);
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);
   quicksort(number,0,count-1);
   printf("sorted elements are");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);
    return 0;
}

