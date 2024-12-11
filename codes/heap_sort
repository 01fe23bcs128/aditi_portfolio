#include<iostream>
using namespace std;

void heapsort(int h[],int n)
{
    for(int i=n/2;i>=1;i--)
    {
        int k=i;
        int v=h[k];
        bool heap=false;
        while(!heap&&2*k<=n)
        {
            int j=2*k;
            if(j<n&&h[j]<h[j+1])
            {
                j=j+1;
            }
            if(v>=h[j])
            {
                heap=true;
            }
            else{
                h[k]=h[j];
                k=j;
            }
        }
        h[k]=v;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of elements:";
    cin>>n;
    int h[n+1];
    cout<<"Enter the elements:";
    for(int i=1;i<=n;i++){
        cin>>h[i];
    }
    heapsort(h,n);
    cout<<"Sorted heap:";
    for(int i=1;i<=n;i++){
        cout<<h[i]<<" ";
    }
    return 0;
}
