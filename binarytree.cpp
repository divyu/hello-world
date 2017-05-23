#include<iostream>
using namespace std;
int main()
{
    int a[100];
    int i,n;
    cin>>n;
    //int ub =n-1;
    for(i=0;i<n;i++)
        cin>>a[i];
    int *down = &a[0];
    int *up = &a[n-1];
    while(down<=up)
    {
        if(*down>=*up)
        cout<<*down<<" "<<*up<<endl;
        down++;
        up--;
    }
    up=&a[n-3];
    cout<<up<<endl;
    cout<<&a[n-1]<<endl;
    cout<<&a[n-1]-up<<endl;

    int index = n-1-(&a[n-1]-up);
    cout<<index;
}
