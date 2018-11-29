    //darsana .m
//roll no:18
//exp2:selection sort.c
#include <stdio.h>
     
    int main()
    {
      int array[100], n, i, d, position, swap;
      printf("enter the no of elements");
      scanf("%d",&n);	
      printf("Enter the numbers \n");
      for (i = 0; i < n; i++)
        scanf("%d", &array[c]);
     
      for (i = 0; i < (n - 1); i++)
      {
        position = i;
       
        for (d = i+1; d < n; d++)
        {
          if (array[position] > array[d])
            position = d;
        }
        if (position !=i)
        {
          swap = array[i];
          array[i] = array[position];
          array[position] = swap;
        }
      }
     
      printf("Sorted list is:\n");
     
      for (i= 0;i< n;i++)
        printf("%d\n", array[i]);
     
      return 0;
    }
output:enter the no of elements4
Enter the numbers 
1 2 3 0
Sorted list is:
0
1
2
3
