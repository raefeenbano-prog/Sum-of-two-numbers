#include<iostream>
using namespace std;
int  main()
{
    int a[] = {7, 5, 3, 6, 2};
    for(int i=0; i<5; i++)
    {
        for(int j=i+1; j<5; j++)
        {
            if(a[i]+a[j]==11)
            {
                cout<<i<<" "<<j;
                return 0;
            }
        }
    }
}

