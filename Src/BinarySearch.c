/*
 * BinarySearch.c
 *
 *  Created on: Sep 30, 2019
 *      Author: Mahmoud Rezk MAhmoud
 */


#include "BinarySearch.h"
uint8 Binary_Search_Find_First(uint8 Array_size,uint8 *Array,uint8 Item)
{
	uint8 Left=0;
	uint8 Right=Array_size-1;
	uint8 ELement=-1;
	uint8 counter;


		while ( Left <= Right )
		{
			/* always go to the middle of the array */
			counter = Left + (Right-Left)/2;

			if ( Item == Array[counter] )
			{
				ELement =counter;
				break;
			}

			else if ( Item > Array[counter] )

			{
				Left = counter + 1;

			}

			else
			{
				Right = counter - 1;

			}
		}
	return ELement;
}

/***************************************************************
 * 					 Binary Search Complexity
 ***************************************************************
 * 
 * T = 5*C + 5*C*log(n)
 * O(n) = log(n)
 *
 ***************************************************************/