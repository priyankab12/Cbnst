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
        scanf("%f\t%f",&x[i],&y[i]);
    }
    h=x[2]-x[1];

    printf("Value of x where the functional value is to be determined");
    scanf("%f",&X);

    u=(X-x[n])/h;

    val=y[n];

    for(int i=1;i<=n;i++)
    {
        for(int j=n;j>=i+1;j--)
       { y[j]=y[j]-y[j-1];
       }
        p=p*(u+i-1)/i;
        val=val+p*y[n];

    }
    printf("The value of f(%f)=%f",X,val);



}