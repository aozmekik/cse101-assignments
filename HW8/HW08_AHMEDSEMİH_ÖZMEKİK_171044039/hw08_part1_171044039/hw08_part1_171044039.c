#include <stdio.h>

double factorial(double n);
double pow(double x,int n);
double sin(double x,int term_number);

int main(){

    double degree,radian,result,pi;
    int term_number;

    pi=3.141592;

    printf("Angle value in degrees : \n");
    scanf("%lf",&degree);
    printf("Number of terms to use in Taylor Expansion: \n");
    scanf("%d",&term_number);

    radian=degree*pi/180.0;

    result=sin(radian,term_number);



    printf("Sin %0.0lf : %lf\n",degree,result);


    return 0;
}

double factorial(double n){

    double factorial_result = 1.0;

    for(double i=1.0;i<=n;i++){

        factorial_result*=i;
    }

    return factorial_result;

}

double pow(double x,int n){

    double pow_result = 1.0;

    for(int i=0;i<n;i++){

        pow_result*=x;

    }

    return pow_result;

}

double sin(double x,int term_number){

    double total_taylor_series=0.0;

    for(int i=1;i<=term_number;i++){

        total_taylor_series+=pow(-1,i+1)*pow(x,2*i-1)/factorial(2*i-1);



    }

    return total_taylor_series;
}

