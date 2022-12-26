#include <iostream>
using namespace std;
#include <conio.h>

int main(){
    int n, sum=0;
    cout<<"Enter the number upto which you want to find the sum of square"<<endl;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0){
            int square = i*i;
            sum = sum + square;
        }
    }
    cout<<"The sum of square of first "<<n<<" terms is "<<sum<<endl;
}    
