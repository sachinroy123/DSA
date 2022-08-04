#include<iostream>
using namespace std;

int reverseArray(int a[],int start,int end)
{
    while(start<end)
    {
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
int printArray(int a[],int n)
{
    for(int i=0;i<n;i++)
    { 
        cout<<a[i]<<" ";
    }
    cout<<endl;
}


int main()
{   
    int a[] = {1,2,3,4,5,6};
    int n= sizeof(a)/sizeof(int);
    printArray(a,n);
    reverseArray(a,0,n-1);
    printArray(a,n);


}