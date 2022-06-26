/*
Challenge for 2D Array

Find the total rainful for each year, the average yearly rainful, and average rainfall for each month

Array should be typed floating point and size of 5 rows (years) and 12 columns (Months)

Output all the rainfal for the whole array



*/

#include <stdio.h>
#define MONTHS 12
#define YEARS 5


int main (){

    // declare loop variables
    int i,j;
    // might be more meaningful to use year and month vs i or j
    float totalRain = 0.0, totalYear, totalMonth;
    // initialize rainfall data for 2011-2015
    float rain[YEARS][MONTHS] =
    {
        {4.3,4.3,4.3,3.0,2.0,1.2,0.2,0.2,0.4,2.4,3.5,6.6},
        {8.5,8.2,1.2,1.6,2.4,0.0,5.2,0.9,0.3,0.9,1.4,7.3},
        {9.1,8.5,6.7,4.3,2.1,0.8,0.2,0.2,1.1,2.3,6.1,8.4},
        {7.2,9.9,8.4,3.3,1.2,0.8,0.4,0.0,0.6,1.7,4.3,6.2},
        {7.6,5.6,3.8,2.8,3.8,0.2,0.0,0.0,0.0,1.3,2.6,5.2}
    };

    // Print Out all the Rainfall
    printf("Rainfall Data from 2011 - 2015\n");   
    for (i = 0; i < YEARS; i++)
    {
        for ( j = 0; j < MONTHS; j++)
        {
          printf("%.2fmm ", rain[i][j]);
        }
        printf("\n");    
    }
    
    //calculate total rainfall per year and total rainfall
    for (i = 0; i < YEARS; i++)
    {
        totalYear = 0.0;    
        for ( j = 0; j < MONTHS; j++)
        {
        totalYear = totalYear + rain[i][j];
        totalRain = totalRain + rain[i][j];
        }
        printf("Total: %f \n", totalYear);    
    }

    //calculate average rainfall per year
    printf("Average Yearly Rainfall: %f \n", (totalRain/YEARS));   
    
    //calculate average rainfall per month
    for (j = 0; j < MONTHS; j++)
    {
        totalMonth = 0.0;    
        for ( i = 0; i < YEARS; i++)
        {
        totalMonth = totalMonth + rain[i][j];
        }
        printf("Average Monthly Rainfall: %f \n", (totalMonth/YEARS));    
    }
    return 0;
}

