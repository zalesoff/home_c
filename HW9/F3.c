/*
 * F3.c
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


 
 */

#include <stdio.h>
#include <string.h>

void count_digits(char N[])
{
    int cnt[10] = {0};
    int len = strlen(N);
    
    for (int i = 0; i < len; i++)
    {
        if (N[i] >= '0' && N[i] <= '9')
        {
            cnt[N[i] - '0']++;
        }
    }
    
    for (int i = 0; i < 10; i++)
    {
        if (cnt[i] > 0)
        {
            printf("%d %d\n", i, cnt[i]);
        }
    }
}

int main()
{
    char number[1001];
    
    scanf("%1000s", number);
    
    for (int i = 0; number[i] != '\0'; i++)
    {
        if (number[i] < '0' || number[i] > '9')
        {
            return 1;
        }
    }
    
    count_digits(number);
    
    return 0;
}













