#include<iostream>
using namespace std;

int main()
{
    int x ;
    cout<<"Enter a number : ";
    cin>>x ;
    for(int i =2 ; i < x ; i++)
    {
        if (x%i == 0)
        {
            cout<<"Not prime";
            break;
        }
        else
        {
            cout<<"It is prime" ;
            break ;
        }
        
        
    }



    return 0;
}
