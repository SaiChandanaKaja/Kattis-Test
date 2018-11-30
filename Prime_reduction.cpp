#include <bits/stdc++.h>
using namespace std;

vector<long long> prime_factors(long long n) {
    long long root;         // declaration of variable root                                                             //root
    vector<long long> factors;

    while(n%2 == 0) {
        n /= 2;
        factors.push_back(2);      // push_back add a element to end of the vector factors
    }
                //find the square root of n
    root = sqrt(n);

    for(int i=3; i<=root; i += 2){
        while(n%i == 0) {
            n /= i;
            factors.push_back(i);
        }
    }

    if(n > 2)
        factors.push_back(n);

    return factors;
}

long long reduce(vector<long long> factors) {
    long long r = 0;
    for(int i=0; i<factors.size(); i++)
        r += factors[i];
    return r;
}

main() {
    //declare variables n, cont
    long long n, cont;     
    //Initilize a vector called factors
    vector<long long> factors;
    // read the input value n and validate if equals to 4
    while(cin >> n && n != 4) {
        cont = 1;

        factors = prime_factors(n);     //intialize the method prime_factors

        while(factors.size() != 1) {                          
            n = reduce(factors);
            factors = prime_factors(n);
            cont ++;
        }

        cout << n << ' ' << cont << '\n';
        
    }
}


