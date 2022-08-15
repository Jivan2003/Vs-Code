#include <iostream>
using namespace std;

int main()
{
    int m1, m2, m3, avg;
    cout << "Enter your marks" << endl;
    cin>>m1>>m2>>m3;

    avg=(m1+m2+m3)/3 ;
    if(avg>=75)
    {
        cout <<"A+"<<endl;
    }
    else if(avg>=60 && avg<75)
    {
        cout <<"A"<<endl;
    }
    else if(avg>=45 && avg<60)
    {
        cout <<"B"<<endl;
    }
    else if(avg>=40 && avg<45)
    {
        cout <<"c"<<endl;
    }
    else
    {
        cout<<"F"<<endl;
    }
    return 0;
}