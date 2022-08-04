#include<bits/stdc++.h>
using namespace std;

struct Pair{
    int min;
    int max;
};

Pair minMaxElement(int a[],int n)
{
    Pair temp;
    if(n==1)
    {
        temp.min=a[0];
        temp.max=a[0];
        return temp;
    }
    if(a[0]>a[1])
    {
        temp.max=a[0];
        temp.min=a[1];
    }else{
        temp.max=a[1];
        temp.min=a[0];
    }
    for(int i=2;i<n;i++)
    {
        if(a[i]>temp.max)
        {
            temp.max= a[i];
        }
        if(a[i]<temp.min)
        {
            temp.min=a[i];
        }
    }
    return temp;
}


int main()
{
    int a[] = {11,2,3,5,4,8,7,5,6,2,18,5,74,61,2,541,58,11};
    int n= sizeof(a)/sizeof(int);
    Pair temp = minMaxElement(a,n);
    cout<<"Min :"<<temp.min<<endl;
    cout<<"Max :"<<temp.max<<endl;
}