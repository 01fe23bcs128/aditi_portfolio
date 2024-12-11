#include<iostream>
using namespace std;

int Partition(int a[],int l,int r)
{
    int p=a[l];
    int i=l;
    int j=r+1;
    while(true)
    {
        do{
            i++;
        }
        while(a[i]<p);
        do{
            j--;
        }
        while(a[j]>p);
        if(i>=j)
            break;
        swap(a[i],a[j]);
    }
    swap(a[l],a[j]);
    return j;
}

void quicksort(int a[],int l,int r)
{
    if(l<r)
    {
        int s=Partition(a,l,r);
        quicksort(a,l,s-1);
        quicksort(a,s+1,r);
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int a[n];
    cout<<"Enter the elements:";
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    quicksort(a,0,n-1);
    cout<<"Sorted array:";
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
