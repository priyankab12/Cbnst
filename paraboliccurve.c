#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main() {
 // Example data points
  int n,i,sumx=0,sumy=0,sumxy=0,sumx2=0;
  float x[20],y[20];
    float a,b,c;
    printf("\n   C program for Linear Curve Fitting \n ");
    printf("\n Enter the value of number of terms n:");
    scanf("%d",&n);
    printf("\n Enter the values of x:\n");
    for(i=0;i<=n-1;i++)
    {
        scanf(" %f",&x[i]);

    }
    printf("\n Enter the values of y:");
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&y[i]);
    }
    double sumX = 0.0, sumX2 = 0.0, sumX3 = 0.0, sumX4 = 0.0, sumY = 0.0, sumXY = 
0.0, sumX2Y = 0.0;
 // Calculate sums needed for the least squares method
 for (int i = 0; i < n; i++) {
 double xi = x[i];
 double yi = y[i];
 sumX += xi;
 sumX2 += xi * xi;
 sumX3 += xi * xi * xi;
 sumX4 += xi * xi * xi * xi;
 sumY += yi;
 sumXY += xi * yi;
 sumX2Y += xi * xi * yi;
 }
 // Solve the system of linear equations to find coefficients a, b, and c
 double determinant = n * sumX2 * sumX4 - sumX3 * sumX3 - sumX * 
sumX2 * sumX2 + 2 * sumX * sumX3 - n * sumX2 * sumX2;
 a = (sumX2 * sumX2Y - sumX3 * sumXY + sumX * sumX4 - sumX2 * sumX2 * 
sumY + sumX * sumX2 * sumXY) / determinant;
 b = (n * sumX2Y - sumX3 * sumY + sumX * sumX3 - n * sumX 
* sumXY + sumX2 * sumY * sumX2) / determinant;
 c = (n * sumX2 * sumXY - sumX2 * sumX2Y - sumX * sumX4 + sumX3 * 
sumXY + sumX * sumX2 * sumY - sumX3 * sumY) / determinant;
printf("\n\nThe line is Y=%3.3f X^2 +%3.3f X +%3.3f",a,b,c);
    return(0);


}
