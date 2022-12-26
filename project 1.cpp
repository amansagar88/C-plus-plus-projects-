#include <iostream>
using namespace std;

int main(){
    int num;
    cout<<"Enter the number you want to find the sum of digits: ";
    cin>>num;
    int sum = 0;
    while(num>0){
        int rem;
        rem = num%10;
        sum = sum + rem;
        num = num/10;
    }
    cout<<"The sum of digits of your given number is "<<sum;
}
