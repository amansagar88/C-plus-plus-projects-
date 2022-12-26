#include <iostream>
using namespace std;
#include <math.h>
int root1(int a, int b, int c){
    int R1;
    R1 = (-b + sqrt(pow(b, 2) - 4*a*c))/2*a;
    return R1;
}

int root2(int a, int b, int c){
    int R2;
    R2 = (-b - sqrt(pow(b, 2) - 4*a*c))/2*a;
    return R2;
}

int main(){
    int a, b, c, R1, R2;
    cout<<"Enter the value of 'a' (coefficient of squre of X.)"<<endl;
    cin>>a;
    cout<<"Enter the value of 'b' (coefficient of X.)"<<endl;
    cin>>b;
    cout<<"Enter the value of 'c' (Constant term.)"<<endl;
    cin>>c;
    cout<<"The values of (a, b, c) is ("<<a<<" , "<<b<<" , "<<c<<")"<<endl;
    R1 = root1(a, b, c);
    R1 = root2(a, b, c);
    cout<<"The roots of the quadratic equation with (a, b, c)("<<a<<" , "<<b<<" , "<<c<<")"<<" is ("<<R1<<" , "<<R2<<")"<<endl;
}
