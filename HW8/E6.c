/*
 * E6.c
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
#define SIZE 12
void in_array(int array[], int n)
{
		int i;
		for (i=0;i<n;i++)
			scanf("%d", &array[i]);
		return; 
}
float sr_arifm (int array[], int n)
{
		int i, summ=0;
		for (i=0;i<n;i++)
			summ+=array[i];
		return 1.0*summ/n; 
}


int main()
{
	int array[SIZE]={0};
	in_array(array,SIZE);
	printf("%.2f",sr_arifm(array,SIZE));
	return 0;
}










