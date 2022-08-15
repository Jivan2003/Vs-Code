#include <iostream>
using namespace std;

int main()
{
    int n, t=0;

    cout<<"Enter A Number"<<endl;
    cin>> n;
    cout << "The factors of " << n << " are : " << endl;

    for(int i=1; i<=n-1 ; i++)
    {
        
        if(n%i==0)
        {
            cout<<i<<",";
            t=t+i;
        }
        
        
    }
    if(t==n)
    {
        cout<<"it is a perfect number"<<endl;
    }
    else 
    {
        cout<<"it is not a perfect number"<<endl;
    }
    return 0;
}