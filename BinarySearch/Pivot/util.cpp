#include<stdlib.h>
#include <stdio.h>


//int a[] = {24, 25, 29, 42, 57, 58, 59, 60, 61, 62, 64, 65, 1, 2, 3, 4, 5, 6, 7, 8, 9, 14};
int a[] = {76, 8, 9, 11, 21, 24, 25, 29};
int len = sizeof(a)/sizeof(int);

int findpos(int k, int len)
{
    int start = 0, end = 0;
    end = len-1;
    int count = 0;

    while (start <= end)
    {
        count++;
        int mid = (end + start)/2;

        if (a[mid] == k)
        {
            printf ("\n Iterations taken = %d", count);
            return mid;
        }
        else if((k < a[mid]) && (a[start] < a[mid]) && (k >= a[start]))
        {
            // element is on left side
            end = mid-1;
        }
        else if ((k > a[mid]) && (a[end] > a [mid]) && (k <= a[end]))
        {
            //element is on right side
            start = mid+1;
        }
        else if ((k > a[mid]) && (a[start] < a [mid]) && (a[start] >= a[end]))
        {
            //element is on right side
            start = mid+1;
        }
        else if ((k < a[mid]) && (a[end] < a[mid]) && (k <= a[end]))
        {
            start = mid+1;
        }
        else //if ((k > a[mid]) && (a[end] < a [mid]) && (k >= a[start]))
        {
            //element is on left side
            end = mid-1;
        }
    }
    printf ("\n Iterations taken = %d", count);
    return -1;
}

int __cdecl wmain()
{

    for (int i=0;i<len;i++)
    {
        int pos = findpos(a[i], len);
        if(pos == -1)
        {
            printf ("\n\n Element %d not found in the array\n\n", a[i]);
        }
        else
        {
            printf("\n %d was found at position %d in the array\n", a[i], pos+1);
        }
    }

    for (int i=0;i<10;i++)
    {
        int k = rand();
        int pos = findpos(k, len);

        if(pos == -1)
        {
            printf ("\n\n Element %d not found in the array\n\n", k);
        }
        else
        {
            printf("\n %d was found at position %d in the array", k, pos+1);
        }
    }
    return 0;
}
