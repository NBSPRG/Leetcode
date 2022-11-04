#include <stdio.h>

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2, int nums2Size){
    int a[nums1Size + nums2Size];
    int sz = nums1Size + nums2Size;
    int i, j, k;
    i = 0;j = 0;k = 0;
    float res = 0;

    while(i < nums1Size && j <nums2Size)
    {
        if(nums1[i] < nums2[j])
        {
        a[k] = nums1[i];
        i++;k++;
        }

        else 
        {
            a[k] = nums2[j];
            j++; k++;
        }
    }

    while(i < nums1Size)
    {
        a[k] = nums1[i];
        i++;k++;
    }

    while(j < nums2Size)
    {
        a[k] = nums2[j];
        j++;k++;
    }

    if((nums1Size + nums2Size)%2)
    {
        res = a[sz/2];
    }

    else
    {
        res = (float)(a[sz/2-1] + a[sz/2])/2;
    }

    return res;

}

int main()
{
    int a[2];
    int b[1];
    
    a[0] = 1;
    a[1] = 3;
    b[0] = 2;
    
    printf("%d\n",findMedianSortedArrays(a,2,b,1));
    return 0;
}