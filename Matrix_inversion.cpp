#include <iostream>
#include <math.h>
 
using namespace std;

int main()

{
    
int a;
int b;
int c;
int d;

int matrix [2][2] = {{a,d},{b,c}};

int count = 1;

while ( cin >> a , cin >> b , cin >> c , cin >> d ) {

cout << "Case " << count << ":" << endl;
count++;

long  D = (a*d) - (b*c);

cout << d / D << " " << -b / D << endl;
cout << -c / D << " " << a / D << endl;



 }
}
