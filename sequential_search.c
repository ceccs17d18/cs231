    //darsana,roll:18
    //exp no:1,sequential search
   
    #include<stdio.h> 
    int main()
    {
      int array[100], search, c, n;
      printf("Enter number of elements in array\n");
      scanf("%d", &n);
      printf("Enter %d integer(s)\n", n);
      for (c = 0; c < n; c++)
        scanf("%d", &array[c]);
      printf("Enter a number to search\n");
      scanf("%d", &search);
      for (c = 0; c < n; c++)
      {
        if (array[c] == search)   
        {
          printf("%d is present at location %d.\n", search, c+1);
          break;
        }
      }
      if (c == n)
        printf("%d isn't present in the array.\n", search);
     
      return 0;
    }
output:Enter number of elements in array
4
Enter 4 integer(s)
8
7
6
5
Enter a number to search
5
5 is present at location 4.
