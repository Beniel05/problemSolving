#include<bits/stdc++.h>
using namespace std;

int main() {

    // Outer loop is for the rows! 
    // -> For the outer loop, count the number of lines (rows)
    
    // Inner loop is for the columns! 
    // -> For the inner loop, focus on the columns & connect them somehow to the rows


    /* => 5 * 5 star pattern 
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j ++) {
            cout << "* ";
        }
        cout << endl;
    }
    */

    /* => right angle pyramid pattern
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= i; j++) { // logic <= i
            cout << "* ";
        }
        cout << endl;
    }
    */


    return 0;
}