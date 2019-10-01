/*
 * BUBBLEsort.c
 *
 *  Created on: Sep 30, 2019
 *      Author: Mahmoud Rezk Mahmoud
 */
#include "BUBBLEsort.h"

void BUBBLE_sort(uint8 * Arr, uint8 A_Size)
{
	uint8 i=0;
	uint8 j=0;
	uint8 temp=0;
	for (j=0;j<Size-1;j++)
	{
		for(i=0;i<Size-1-j;i++)
		{
			if(Arr[i]>Arr[i+1])
			{
				temp=Arr[i];
				Arr[i]=Arr[i+1];
				Arr[i+1]=temp;
			}
			else 
			{

			}
		}
	}
}


/***************************************************************
 * 					 Bubble Sort Complexity
 ***************************************************************
 * 
 * T = C + n*(c+6*n)
 * O(n) = n^2
 *
 ***************************************************************/
