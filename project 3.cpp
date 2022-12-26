#include <iostream>
using namespace std;

int main(){
    int n1, n2, temp;
    cout<<"Enter the first number: ";
    cin>>n1;
    cout<<"Enter the second number: ";
    cin>>n2;
    cout<<"The first and the second number before swaping is "<<n1<<" and "<<n2<<" respectively."<<endl;
    temp = n1;
    n1 = n2;
    n2 = temp;
    cout<<"The first and the second number after swaping is "<<n1<<" and "<<n2<<" respectively."<<endl;
}
