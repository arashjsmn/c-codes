
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int num1=0 , num , num2=num-2;
    cout << "this program shows you that a number you enter is a prime number or not! \n" <<"enter a number: \n";
    cin >> num;
    while (num2 > 0){
        if (num%(num2+1)==0)
        num1+=1;
    num2--;
    }
    if (num1 > 0){
        cout << "this number is not a prime number";
    }
    else
    {
        cout << "this number is a prime number";
    }    
}