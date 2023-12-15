#include<stdio.h>
#include<math.h>
#define max 100
int main(){
    float x[max],y[max],X,p=1,u,h,val;
    int n;
    printf("OUTPUT\n");
    printf("Number of Arguments\n");
    scanf("%d",&n);
    
    printf("Enter the value of x and y \n");
    printf("x\t\ty\n");

    for(int i=1;i<=n;i++)
    {
        scanf("%f\t%f",&x[i],&y[i]);  //one based indexing
    }
    h=x[2]-x[1];

    printf("Value of x where the functional value is to be determined");
    scanf("%f",&X);

    u=(X-x[1])/h;

    val=y[1];

    for(int i=1;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
       { y[j]=y[j+1]-y[j];}

        p=p*(u-i+1)/i;
        val=val+p*y[1];

    }
    printf("The value of f(%f)=%f",X,val);



}