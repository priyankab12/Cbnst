#include<stdio.h>
#define max 100
void main(){
    float x[max],y[max],v,val=0,a;
    int n;

    printf("number of arguments");
    scanf("%d",&n);

    printf("Enter the value of x\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("Enter the value of y\n");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter the value of x to be determined");
    scanf("%f",&a);

    for(int i=0;i<n;i++)
    {
        v=y[i];
        for(int j=0;j<n;j++)
        {
            if(j!=i)
            {
                v=v*(a-x[j])/(x[i]-x[j]);
            }
        }
        val=val+v;
    }
    printf("Result is%f",val);


    
}