/*
 * D4.c
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

void print_num (int);

int main()
{
	int n;
	scanf("%d",&n);
	print_num(n);
	return 0;
}

void print_num (int num)
{
	if (num<10)
		{
		printf("%d",num);
		return;
		}
	print_num(num/10);
	printf(" %d",num%10);
}



