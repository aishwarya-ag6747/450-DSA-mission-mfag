#include <bits/stdc++.h>
using namespace std;

int countDigit(long long n)
{
	if (n==0)
    return 1;
    int count=0;
    while(n!=0){
        n=n/10;
        ++count;
        }
       return count;

    }

    //driver code
    int main()
    {
        long long n=345289467;
        cout<<"Number of digits :"<< countDigit(n);
        return 0;
    }
