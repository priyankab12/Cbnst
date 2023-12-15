#include<stdio.h>
#include<math.h>
float f(float x)
{
    return (1/(1+(x*x)));
}
int main(){
    float a,b,h,s=0,tr;
    int i,n;
    printf("LIMIT OF INTEGRATION ARE\n");
    scanf("%f%f",&a,&b);
    printf("Number of sub-divisions is \n");
    scanf("%d",&n);

    h=(b-a)/n;
    for(int i=1;i<=n-1;i++) //this means if i need 4terms then i need to perform calculcations just 3times
    {
        s=s+f(a+i*h);
    }
    tr=h*(f(a)+f(b)+2*s)/2;
    printf("The value of intregral is =%f",tr);
    

}