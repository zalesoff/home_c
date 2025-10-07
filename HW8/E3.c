/*
 * E3.c
 * 
 * Copyright 2025 webde <webde@DS-LAPTOP>
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 * 
 * 
 */


#include <stdio.h>
#define SIZE 10
void in_array(int array[], int n)
{
		int i;
		for (i=0;i<n;i++)
			scanf("%d", &array[i]);
		return; 
}
int minimum (int array[], int n)
{
		int i, min_id=0;
		for (i=1;i<n;i++)
			min_id=array[min_id]<=array[i]? min_id:i;
		return min_id; 
}
int maximum (int array[], int n)
{
		int i, max_id=0;
		for (i=1;i<n;i++)
			max_id=array[max_id]>=array[i]? max_id:i;
		return max_id; 
}

int main()
{
	int array[SIZE]={0};
	in_array(array,SIZE);
	printf("%d %d %d %d",maximum(array,SIZE)+1, array[maximum(array,SIZE)],minimum(array,SIZE)+1, array[minimum(array,SIZE)]);
	return 0;
}







