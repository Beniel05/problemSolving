#include<bits/stdc++.h>
using namespace std;

    // 1. Outer loop is for the rows! 
    // -> For the outer loop, count the number of lines (rows)
    
    // 2. Inner loop is for the columns! 
    // -> For the inner loop, focus on the columns & connect them somehow to the rows

    // 3. Whatever you're printing (eg: "*"), print them inside the inner for loop

    // 4. Observe symmetry [optional] - only for certain patern (above 3 steps are mandatory for all patterns)


// Example Patterns as functions; (we'll call them in the int main())
/* 1 => N * N star pattern 

    * * * * *
    * * * * *
    * * * * *
    * * * * * 
    * * * * * 
    when N = 5
*/
void print_NxN_Star(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N; j ++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 2 => right angle pyramid pattern
    
    *
    * *
    * * *
    * * * * 
    * * * * *
    when N = 5    
*/
void print_Right_Pyramid(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) { // logic <= i
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 3 => right angle pyramid with column numbers;
    
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
    (when N = 5)    
*/
void print_Right_Pyramid_With_Column_Values(int N){
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 4 => right angle pyramid with row numbers;

    1
    2 2
    3 3 3
    4 4 4 4
    5 5 5 5 5
    (When N = 5)
*/
void print_Right_Pyramid_With_Row_Values(int N){
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= i; j++) {
            cout << i << ' ';
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 5 => right angle pyramid pattern (reversed) 
    
    * * * * *
    * * * *
    * * *
    * * 
    * 
    when N = 5    
*/
void print_Reversed_Right_Pyramid(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N - i + 1; j ++) {
            cout << "* ";
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 6 => right angle pyramid pattern (reversed) with column values 
    
    1 2 3 4 5
    1 2 3 4
    1 2 3
    1 2
    1
    when N = 5    
*/
void print_Reversed_Right_Pyramid_With_Column_Values(int N) {
    for(int i = 1; i <= N; i++) {
        for(int j = 1; j <= N - i + 1; j++) {
            cout << j << ' ';
        }
        cout << endl;
    }
    cout << endl; // next line for next function
}

/* 7 => Pyramid (*) pattern
    
            *
          * * *
        * * * * *
      * * * * * * *
    * * * * * * * * *

    */
void print_Pyramid(int N) {
   
    
}

// Main function;
int main() {

    int TotalTestCase;
    cin >> TotalTestCase;

    for (int i = 0; i < TotalTestCase; i++)
    {

    int N;
    cin >> N;

    // 1;
    // print_NxN_Star(N);

    // 2;
    // print_Right_Pyramid(N);

    // 3;
    // print_Right_Pyramid_With_Column_Values(N);
    
    // 4;
    // print_Right_Pyramid_With_Row_Values(N);

    // 5;
    // print_Reversed_Right_Pyramid(N);

    // 6;
    // print_Reversed_Right_Pyramid_With_Column_Values(N);
    
    // 7;
    print_Pyramid(N);
        for(int row = 0; row < N; row++) {
            for(int space = 0; space < N - row - 1; space++) {
                cout << ' ';
            }
            for(int print = 0; print < 2 * row + 1; print++) {
                cout << '*';
            }
            cout << endl;
        }
    }

    return 0;
}