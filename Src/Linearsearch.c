/*
 * Linearsearch.c
 *
 *  Created on: Sep 30, 2019
 *      Author: Mahmoud Rezk Mahmoud
 */

#include "Linearsearch.h"

uint8 Linear_Search_Find_First(uint8 Array_size,uint8 *Array,uint8 Item)
{
	uint8 i;
    for(i=0;i<Array_size;i++)
	{
        if(Item==Array[i])
		{
			/* Element is found return the array index */
			return (i);
		}
    }
    return NOT_FOUND; /* element not found */
}

/***************************************************************
 * 					Linear Search Complexity
 ***************************************************************
 * 
 * T = 2*C + 5*C*n
 * O(n) = n
 *
 ***************************************************************/