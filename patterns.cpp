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

/* 8 => Reverse Pyramid (*) Pattern 

*********
 *******
  *****
   ***
    *

*/
void print_Reversed_Pyramid(int N) {
    for(int row = 0; row < N; row++) {
        for(int space = 0; space < row; space++) {
            cout << ' ';
        }
        for(int star = 0; star < (N * 2) - (2 * row + 1); star++) {
            cout << '*';
        }
        cout << endl;
    }
}

/* 9 => Both Normal and Reversed Pyramid (*) Pattern 

    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *

*/
void print_Both_Up_Down_Pyramid(int N) {
    for(int row = 0; row < N; row++) {
        for(int space = 0; space < N - row - 1; space++) {
            cout << ' ';
        }
        for(int star = 0; star < 2 * row + 1; star++) {
            cout << '*';
        }
        cout << endl;
    }
    
    for(int row = 0; row < N; row++) {
        for(int space = 0; space < row; space++) {
                cout << ' ';
        }
        for(int star = 0; star < 2 * N - (2 * row + 1); star++) {
                cout << '*';
        }
        cout << endl;
    }
}

/* 10 => Right arrow mark like (*) Pattern 

*
**
***
****
*****
****
***
**
*

*/
void print_RightArrow_Like_Stars(int N) {
    for(int row = 1; row <= 2 * N - 1; row++) {
        int star = row;
        if(row > N) star = 2 * N - row;
        for(int print = 1; print <= star; print++) {
            cout << '*';
        }
        cout << endl;
    }
}

/* 11 => Right Angle Triangle With Binary values

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1

*/
void print_Binary_RightTriangle(int N) {
    int flip = 1;
    for(int row = 0; row < N; row++) {
        if(row % 2 == 0) flip = 1; // even rows should start with 1 (0th,2nd,4th)
        else flip = 0;
        for(int j = 0; j <= row; j++) {
            cout << flip;
            cout << ' ';
            flip = 1 - flip;
        }
        cout << endl;
    }
}

/* 12 => [Column Number] - [space] - [Column Number (reversed)]

1                 1
1 2             2 1
1 2 3         3 2 1
1 2 3 4     4 3 2 1
1 2 3 4 5 5 4 3 2 1

*/
void print_ColNumber_Space_ColNumberReversed(int N) {
    // Each row adds two numbers and two spaces, so we must reduce by 4.
    // Initial space needs to be 4 * (N - 1)
    int space = 4 * (N - 1); 
    
    for(int row = 1; row <= N; row++) {
        // 1. Column number
        for(int col = 1; col <= row; col++) {
            cout << col << " ";
        }
        // 2. Middle spaces
        for(int j = 1; j <= space; j++) {
            cout << " ";
        }
        // 3. Column number (reversed)
        for(int j = row; j >= 1; j--) {
            cout << j;
            if(j > 1) cout << " "; // Avoid extra space at the very end
        }
        cout << endl;
        space -= 4; // Reduced by 4 because 2 numbers + 2 spaces were added
    }
}

/* 13 => Right Triangle With Count Values

1 
2 3 
4 5 6 
7 8 9 10 
11 12 13 14 15

*/
void print_Right_Triangle_With_Count_Values(int N) {
    int count = 1;
    for(int row = 0; row < N; row++) {
        for(int col = 0; col <= row; col++) {
            cout << count << ' ';
            count++;
        }
        cout << endl;
    }
}

/* 14 => Right Triangle with Alphabets (col values)

A 
A B 
A B C 
A B C D 
A B C D E

*/
void print_Right_Triangle_Col_Value_Alphabets(int N) {
    char ch = 'A';
    for(int row = 0; row < N; row++) {
        for(int col = 0; col <= row; col++) {
            cout << ch << ' ';
            ch++;
        }
        ch = 'A';
        cout << endl;
    }

    // Another version;
    /*
    for(int i = 0; i < N; i++) {
        for(char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch << ' ';
        }
        cout << endl;
    }
    */
}

/* 15 => Right Triangle with Alphabets (col values) [Reversed]

A B C D E
A B C D
A B C 
A B
A

*/
void print_Right_Triangle_Col_Value_Alphabets_Reversed(int N) {
    for(int i = 1; i <= N; i++) {
        for(char ch = 'A'; ch <= 'A' + N - i; ch++) {
            cout << ch << ' ';
        }
        cout << endl;
    }
}

/* 16 => Right Triangle with Alphabets (row values)

A
B B
C C C 
D D D D
E E E E E

*/
void print_Right_Triangle_Row_Value_Alphabets(int N) {
    char alphabet = 'A';
    for(int row = 0; row < N; row++) {
        for(int col = 0; col <= row; col++) {
            cout << alphabet << ' ';
        }
        alphabet++;
        cout << endl;
    }

    // Another Version;
    /*
    for(int i = 0; i < N; i++) {
        char ch = 'A' + i;
        for(int j = 0; j <= i; j++) {
            cout << ch << ' ';
        }
        cout << endl;
    }
    */
}

/* 17 => Pyramid Alphabet values with symmetric

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/
void print_Pyramid_Alphabet_Values_With_Symmetric(int N) {
    for(int row = 0; row < N; row++) {
        for(int space = 0; space < N - row - 1; space++) {
            cout << ' ';
        }

        char ch = 'A';
        int breakpoint = (2 * row + 1) / 2;

        for(int j = 1; j <= 2 * row + 1; j++) {
            cout << ch;
            if(j <= breakpoint) ch++;
            else ch--;
        }
        cout << endl;
    }
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
    // print_Pyramid(N);

    // 8;
    // print_Reversed_Pyramid(N);

    // 9;
    // print_Both_Up_Down_Pyramid(N);

    // 10;
    // print_RightArrow_Like_Stars(N);

    // 11;
    // print_Binary_RightTriangle(N);

    // 12;
    // print_ColNumber_Space_ColNumberReversed(N);
    
    // 13;
    // print_Right_Triangle_With_Count_Values(N);

    // 14;
    // print_Right_Triangle_Col_Value_Alphabets(N);
    
    // 15;
    // print_Right_Triangle_Col_Value_Alphabets_Reversed(N);
    
    // 16;
    // print_Right_Triangle_Row_Value_Alphabets(N);
    
    // 17;
    // print_Pyramid_Alphabet_Values_With_Symmetric(N);


    }

    return 0;
}