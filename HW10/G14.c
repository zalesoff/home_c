/*
 * G14.c
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

int main() {
    FILE *input, *output;
    char str[100];
     char name1[100], name2[100];      
    
	input = fopen("input.txt", "r");
    if (input == NULL)
    {
		printf("Error open input.txt\n");
        return 1;
    }
    
    if (fgets(str, sizeof(str), input) == NULL)
    {
        printf("Ошибка: не удалось прочитать строку\n");
        fclose(input);
        return 1;
    }
    fclose(input);
    
    sscanf(str,"%s %s", name1,name2);
        
    output = fopen("output.txt", "w");
    if (output == NULL)
    {
		printf("Error open output.txt\n");
		return 1;
    }
    fprintf(output, "Hello, %s %s!",name2,name1);
          
    fclose(output);
        
    return 0;
}










