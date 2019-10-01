/*
 * SelectionSort.c
 *
 *  Created on: Sep 30, 2019
 *      Author: Mahmoud Rezk Mahmoud
 */
#include "Selectionsort.h"
void selection_sorting(uint8 * array, uint8 size)
{
    uint8 i,j,min,temp;
    for(i=0;i<size-1;i++)
    {
		/* Assume that the current position contains the smallest number */
        min=i;
		/* Loop to get the position of smallest number in the array start from position i to the end of the loop */
        for(j=i+1;j<size;j++)
		{
            if(array[min]>array[j])
			{
				min=j;
			}
        }
		/* Swap value between the current postion and the smallest position */
        temp = array[i];
        array[i] = array[min];
        array[min] = temp;
    }
}

/***************************************************************
 * 					 Selection Sort Complexity
 ***************************************************************
 * 
 * T = C + n*(2c+5*n+C)
 * O(n) = n^2
 *
 ***************************************************************/