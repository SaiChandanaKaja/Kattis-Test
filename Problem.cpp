#include <iostream>
#include <vector>
#include <cmath>
using namespace std;
int case = 1;
int main ()
{
   int w,l,t;
   char a;
   int count = 0;
   cin >> t;
   while (count <t){
       count++;
   cin >> w>>l;
  static vector<vector<char>> vec;   // godzilla array
   
   for (int i = 0; i < w; i++)
   {
       vector<char> row;
    for (int j = 0; j< l;j++ )
    {
        cin >> a;
        row.push_back(i*j);
    }   
    vec.push_back(row);
    }
   
   int gx, gy;
   for (int i = 0; i <w; i++)
   {
        for (int j = 0; j <l; j++)
        {
              if(vec[i][j] == 'G')
              {
              gx = i;
              gy = j;
              }
        }
    }
    vector < vector<int> > d;     // mech units
    for (int i = 0; i < w; i++)
    {
        vector<int> d1;
        for (int j = 0; j < l; j++)
        {
            d1.push_back(i*j);    
        }
        d.push_back(d1);
    }
    for (int i = 0; i < w; i++)
    {
        for (int j = 0; j < l; j++)
        {
            d[i][j] = pow(10,9);
        }
    }
    for(int i=0;i<w;i++)
    {
        for(int j=0;j<l;j++) 
        {
            if(vec[i][j]=='M') 
            {
		        d[i][j] = 0;
            }
        }
    }
    cout << cas++ << endl;
   } 
    
  return 0;
}

