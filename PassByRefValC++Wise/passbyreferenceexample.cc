#include <iostream>
using namespace std;

int squareByValue( int number)
{
    return number*=number;
}

void squareByReference(int &numberRef)
{
    numberRef *= numberRef;
}

int main()
{
int x = 2;
int z = 4;

cout<<x<<endl;
cout<<"Square by Value: "<<squareByValue(z)<<endl;
cout<<x<<endl;
cout<<z<<endl;
    
squareByReference(z);
cout<<"Square by Reference: "<<z<<endl;
//cout<<"Square by Reference: "<<squareByReference(z)<<endl; //This is an Error
return 0;
}
