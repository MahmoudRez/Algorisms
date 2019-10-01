/*
 * MergeSort.c
 *
 *  Created on: Sep 30, 2019
 *      Author: MahmoudnRezk MAhmoud
 */
#include "MergeSort.h"
void merge_sort(uint8 LEFT, uint8 RIGHT, uint8 * array1, uint8 * array2)
{
    if (RIGHT <= LEFT) {
        return;     // the subsection is empty or a single element
    }
    uint8 mid = (LEFT + RIGHT) / 2;

    /*left sub-array is a[i .. mid]
     sort the left sub-array recursively*/
    merge_sort(LEFT, mid, array1, array2);
    /* right sub-array is a[mid + 1 .. j]
     sort the right sub-array recursively*/
    merge_sort(mid + 1, RIGHT, array1, array2);

    uint8 pointer_left = LEFT;       // pointer_left points to the beginning of the left sub-array
    uint8 pointer_right = mid + 1;        // pointer_right points to the beginning of the right sub-array
    uint8 k;

    // we loop from i to j to fill each element of the final merged array
    for (k = LEFT; k <= RIGHT; k++)
    {
        if (pointer_left == mid + 1)
        {      // left pointer has reached the limit
        	array2[k] = array1[pointer_right];
            pointer_right++;
        }
        else if (pointer_right == RIGHT + 1)
        {        // right pointer has reached the limit
        	array2[k] = array1[pointer_left];
            pointer_left++;
        }
        else if (array1[pointer_left] < array1[pointer_right])
        {        // pointer left points to smaller element
        	array2[k] = array1[pointer_left];
            pointer_left++;
        }
        else
        {        // pointer right points to smaller element
        	array2[k] = array1[pointer_right];
            pointer_right++;
        }
    }

    for (k = LEFT; k <= RIGHT; k++)
    {      // copy the elements from array2[] to array1[]
    	array1[k] = array2[k];
    }
}


/***************************************************************
 * 					 Merge Sort Complexity
 ***************************************************************
 * 
 * O(n) = n*log(n)
 *
 ***************************************************************/