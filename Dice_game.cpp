#include <iostream>

using namespace std;

int main() {
        //Declaring the variables for Gunnar’s & Emma's dice
    int a1,b1,a2,b2;
        //Read the dice values of Gunnar
    cin >> a1 >> b1 >> a2 >> b2 ;
    int gunnar = a1+b1+a2+b2;
        //Read the dice values of Emma
    cin >> a1 >> b1 >> a2 >> b2 ;

    int emma = a1+b1+a2+b2;
        // condition if probabilty of Emma wins is greater than Gunnar
    if(emma > gunnar){
        cout << "Emma";
    }
         // condition if probabilty of Gunnar wins is greater than Emma
    else if(emma < gunnar){
        cout << "Gunnar";
    }
           // condition if probabilty is equal
    else{
        cout << "tie";
    }
    return 0;
}
