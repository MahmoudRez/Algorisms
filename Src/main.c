/*
 * main.c
 *
 *  Created on: Oct 1, 2019
 *      Author: alx
 */
#include "main.h"

int main( void )
{

	uint8 i=0;
	uint8 array[Size]={5,7,2,1,4,3,9,8,10,6};
	uint8 FoundFlag;
	uint8 location;
	uint8 element=9;
	/********************
	 * Testing Bubble Sort*
	 * *******************
	 ******************* */
	BUBBLE_sort(array,Size);
	printf("new sorting from Bubble sort\n");
	for(i=0;i<Size;i++)
	{
		printf(" %d \n",array[i]);
	}

	/***********************
	 * Testing Binary search*
	 * **********************
	 ********************* */
	/* pass the array to the function */
	FoundFlag = Binary_Search_Find_First(Size,array,element);

	if(FoundFlag == NOT_FOUND)
	{
		printf("\nElement not found\n");
	}
	else
	{
		printf("\n by Binary Search The element at the location: %d",FoundFlag);
	}
	/**********************
	 * Testing Linear Search*
	 * **********************
	 ********************* */
	location = Linear_Search_Find_First(Size,array,element);

	if(location == NOT_FOUND)
	{
		printf("\nElement not found\n");
	}
	else
	{
		printf("\nFrom Linear Search The element at the location: %d",location);
	}
	/*******************
	 * Testing Merge Sort*
	 * *******************
	 ******************* */
	uint8 array1[SIZE], array2[SIZE];


	printf("\n Enter %d integers to sorting by merge sort\n", SIZE);

	for (i = 0; i < SIZE; i++)
	{
		scanf("%d", &array1[i]);

	}

	merge_sort(0, SIZE - 1, array1, array2);

	printf("Printing the sorted array from merge sort:\n");

	for (i = 0; i < SIZE; i++)
	{
		printf("%d\n", array1[i]);

	}

	/************************
	 * Testing selection Sort*
	 * ***********************
	 ********************** */

	uint8 arr[Size];

	printf("Enter the required numbers to be sorted by Selection:\n");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&arr[i]);
	}

	/* pass the array to be sorted using function */
	selection_sorting(arr,Size);

	printf("Array After Selection Sort: \n");
	for(i=0;i<Size;i++)
	{
		printf("%d\t",arr[i]);
	}


	return 0;

}


