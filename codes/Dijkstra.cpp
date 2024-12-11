#include <iostream>

using namespace std;

class dij{
  public:
      int n;
      int v[10];
      int dist[10];
      int path[10];
      int vis[10];
      int cost[10][10];

      void read();
      void init(int src);
      void print();

};

void dij::read()
      {
          cout<<"Enter the no. of vertices"<<endl;
          cin>>n;
          cout<<"Enter the vertices"<<endl;
          for(int i=0;i<n;i++)
          {
              cin>>v[i];
          }
          cout<<"enter the cost matrix"<<endl;
          for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cin>>cost[i][j];
              }
          }
      }

void dij:: init(int src)
{
   for(int i=0;i<n;i++)
   {
       path[i]=src;
   }
   for(int i=0;i<n;i++)
   {
       dist[i]=cost[src][i];
   }
   cout<<endl;
}



/*void dij::shortest_path(int src)
{
    path[10]={src};
    
}*/


void dij::print()
{
   for(int i=0;i<n;i++)
          {
              for(int j=0;j<n;j++)
              {
                  cout<<cost[i][j]<<"     ";
              }
              cout<<endl;
          }
}

int main()
{
    dij d;
    int src;
    cout<<"Enter the source vertex"<<endl;
    cin>>src;
    d.read();
    d.init(src);
    d.min
    //d.shortest_path(src)
    d.print();
    return 0;
}
