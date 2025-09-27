/*
 * C4.c
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
int func (int);
int maximum(int,int);

int main()
{
	int x,max;
	x=1;
	max=0;
	while (x!=0)
	{
		scanf("%d",&x);
		max=maximum(max,func(x));
	}
	printf("%d",max);
	return 0;
}

int func (int x)
{
	if (x<-2) return 4;
	else if ((x>=-2)&&(x<2)) return x*x;
	else return x*x+4*x+5;
}
int maximum (int a1,int a2)
{
		if (a1>a2) return a1;
		else return a2;
}

