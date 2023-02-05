// 1. Write a function to find the greatest number from the given array of any size.(TSRS)
//  #include <stdio.h>
//  int Max(int a[],int n)
//  {
//      int max = a[0];
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i+1; j < n; j++)
//          {
//              if (a[j]>max)
//              {
//                  max = a[j];
//              }
//          }
//      }
//      return max;
//  }
//  int main()
//  {
//      int ar[] = {3,2,45,67,4,78,12};
//      int size = sizeof(ar)/sizeof(ar[0]);
//      printf("Max element = %d",Max(ar,size));
//      return 0;
//  }

// 2. Write a function to find the smallest number from the given array of any size.(TSRS)
//  #include <stdio.h>
//  int Min(int a[],int n)
//  {
//      int min = a[0];
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = i+1; j < n; j++)
//          {
//              if (a[j]<min)
//              {
//                  min = a[j];
//              }
//          }
//      }
//      return min;
//  }
//  int main()
//  {
//      int ar[] = {3,2,45,67,4,78,12};
//      int size = sizeof(ar)/sizeof(ar[0]);
//      printf("Min element = %d",Min(ar,size));
//      return 0;
//  }

// 3. Write a function to sort an array of any size. (TSRN)
//  #include <stdio.h>
//  void Sort(int a[],int n)
//  {
//      int temp;
//      for (int i = 0; i < n; i++)
//      {
//          for (int j = 0; j < n; j++)
//          {
//              if (a[i]<a[j])
//              {
//                  temp = a[i];
//                  a[i] = a[j];
//                  a[j] = temp;
//              }
//          }
//      }
//      for (int i = 0; i < n; i++)
//      {
//          printf("%d\t",a[i]);
//      }
//  }
//  int main()
//  {
//      int ar[] = {5,3,6,2,7,1};
//      int size = sizeof(ar)/sizeof(ar[0]);
//      Sort(ar,size);
//      return 0;
//  }

// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
// value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
// d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )
// #include <stdio.h>
// void rotate_left(int ar[],int size,int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//        int first,j;
//        first = ar[0];
//        for (j = 0; j < size-1; j++)
//        {
//          ar[j] = ar[j+1];
//        }
//        ar[j] = first;
//     }     
// }
// void rotate_right(int ar[],int size,int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         int last,j;
//         last = ar[size-1];
//         for (j = size-1; j > 0; j--)
//         {
//             ar[j] = ar[j-1];
//         }
//         ar[0] = last;
//     }
// }
// int main()
// {
//     int a[5] = {32, 29, 40, 12, 70};
//     rotate_left(a,5,2);
//     rotate_right(a,5,2);
//     for (int i = 0; i < 5; i++)
//     {
//         printf(" %d ",a[i]);
//     }
//     return 0;
// }

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
// Function has to return the value of the element.
// #include <stdio.h>
// int firstOccurrence(int ar[],int size,int ele)
// {
//     int occur = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (ar[i] == ele)
//         {
//             if (occur == 0)
//             {
//                 occur++;
//             }
//             else if (occur == 1)
//             {
//                 return i;
//             }
//         }
//     }
// }
// int main()
// {
//     int a[9] = {6, 10, 5, 4, 9, 120, 4, 6, 10};
//     printf("Element-Index = %d",firstOccurrence(a,9,6));
//     return 0;
// }

// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.
// #include <stdio.h>
// int main()
// {
//     int ar[5];
//     printf("Enter all 5 elements of array::\n");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d",&ar[i]);
//     }
//     printf("All the array element in reverse order::\n");
//     for (int i = 4; i >= 0; i--)
//     {
//         printf("%d\t",ar[i]);
//     }
//     return 0;
// }

// 7. Write a function in C to count a total number of duplicate elements in an array.(Means
// elements that occurs 2 times in an array)
// #include <stdio.h>
// int count_duplicate(int ar[],int s)
// {
//     int count = 0;
//     for (int i = 0; i < s; i++)
//     {
//        for (int j = i+1; j < s; j++)
//        {
//          if (ar[i] == ar[j])
//          {
//             count++;
//          }
//        }
//     }
//     return count;
// }
// int main()
// {
//     int ar[5] = {1,2,5,1,2};
//     printf("Total No of Duplicate elements = %d",count_duplicate(ar,5));
//     return 0;
// }

// 8. Write a function in C to print all unique elements in an array.
// #include <stdio.h>
// void print_unique_ele(int ar[],int size)
// {
//     int i,j;
//     for (i = 0; i < size; i++)
//     {
//         for (j = 0; j < size; j++)
//         {
//             if (ar[i] == ar[j] && i != j)
//             {
//                 break;
//             }
//         }
//         if (j == size)
//         {
//             printf("unique elements in this array is %d\n",ar[i]);
//         }
//     }
// }
// int main()
// {
//     int a[5] = {11,11,15,16,13};
//     print_unique_ele(a,5);
//     return 0;
// }

// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.
// #include <stdio.h>
// void Sort(int a[], int n)
// {
//     int temp;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             if (a[i] < a[j])
//             {
//                 temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }
//     for (int i = n-1; i >= 0; i--)
//     {
//         printf("%d\t", a[i]);
//     }
// }
// void merge_array(int a[], int b[], int size)
// {
//     int merge_array[size * 2];
//     for (int i = 0; i < size*2; i++)
//     {
//         for (int j = 0; j < 5; j++)
//         {
//             merge_array[i++] = a[j];
//         }
//         for (int k = 0; k < 5; k++)
//         {
//             merge_array[i++] = b[k];
//         }
//     }
//     Sort(merge_array,size*2);
// }
// int main()
// {
//     int a[5] = {4, 3, 2, 1, 5};
//     int b[5] = {8, 7, 9, 6, 10};
//     merge_array(a,b,5);
//     return 0;
// }

// 10. Write a function in C to count the frequency of each element of an array.
// #include <stdio.h>
// void count_freq(int ar[],int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         int count = 0;
//         for (int j = 0; j < size; j++)
//         {
//             if (ar[i] == ar[j])
//             {
//                 count++;
//             }
//         }
//         printf("Element %d has frequency %d.\n",ar[i],count);
//     }
// }
// int main()
// {
//     int a[10] = {1,4,2,4,2,1,6,4,7,1};
//     count_freq(a,10);
//     return 0;
// }
