/*
Author : AU2020167 Ahan Bhargava
Date : 07/01/2021
Problem Definition : 28. Write a C Program to delete duplicate array elements.
*/
#include <stdio.h>
int main()
{
  int n, a[100], b[100], count = 0, c, d;
  printf("Enter number of elements in array\n");
  scanf("%d", &n);
  printf("Enter %d integers\n", n);
  for (c = 0; c < n; c++)
    scanf("%d", &a[c]);
  for (c = 0; c < n; c++)
  {
    for (d = 0; d < count; d++)
    {
      if(a[c] == b[d])
        break;
    }
    if (d == count)
    {
      b[count] = a[c];
      count++;
    }
  }
  printf("Array obtained after removing duplicate elements:\n");
  for (c = 0; c < count; c++)
    printf("%d\n", b[c]);
  return 0;
}
/* Program Output 
Enter number of elements in array
5
Enter 5 integers
1
2
3
3
4
Array obtained after removing duplicate elements:
1
2
3
4
*/