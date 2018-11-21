#include <iostream>
#include <string>

using namespace std;

int main() {
    int i;
    cin >> i;
    for(int a = 0; a < i; a++) {
        string string1, string2;
        cin >> string1 >> string2;

        cout << string1 << endl;
        cout << string2 << endl;

        int size = string1.size();
        for(int b = 0; b < size; b++) {
            if(string1[b] == string2[b]) {
                cout << '.';
            }
            else {
                cout << '*';
            }
        }

        cout << endl << endl;
    }
}
