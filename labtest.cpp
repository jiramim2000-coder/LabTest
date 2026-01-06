#include<bits/stdc++.h>
using namespace std;

void mdrazor_123(int n)   // same as branch name
{
    int count = 0;

    for(int num = 2; count < n; num++)
    {
        bool prime = true;

        for(int i = 2; i <= num/2; i++)
        {
            if(num % i == 0)
            {
                prime = false;
                break;
            }
        }

        if(prime)
        {
            cout << num << " ";
            count++;
        }
    }
}
int main(){


    int n;
    cout<<"Enter the number n"<<endl;
    cin>>n;
}
