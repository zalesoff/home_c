/*
 * G2.c
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
 
int main(){
int i, n;
 
FILE *fp_in, *fp_out;
char *input_fn = "input.txt";
char *output_fn = "output.txt";
    fp_in = fopen(input_fn, "r");
    fp_out = fopen(output_fn, "w");
 
    fscanf(fp_in, "%d", &n);
 
char str[n + 2];
char c = 'A';
char c_num = '2';
    for (i = 0; i < n; ++i)
    {
        if (i%2==0)
            str[i] = c++;
        else
{
            str[i] = c_num;
            if (c_num == '8')
                c_num = '2';
            else
                c_num += 2;
    }
}
 
    str[i] = '\0';
    fprintf(fp_out, "%s", str);
    fclose(fp_in);
    fclose(fp_out);


    return 0;
}











