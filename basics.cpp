// #include<iostream>
#include<bits/stdc++.h> // Includes all the libraries!
// like <string.h> <math.h> <iostream>

using namespace std; // with the help of time namespace std;
// we don't have to use std:: cin >>, std::cout >>, << std::endl for every function


/* int main() { */

    // 1. User input and Data Type

    // int, long, long long, float, double
    // char  
    // string and getline()

    // Can declare String normally //
    /*
        string a = "Hello World";
        cout << a;
    */
    // Getting first word from the input //
    /*  
        string s;
        cin >> s;
        cout << s;
    */

    // Getting Entire Line of Characters to a single variable //
    /*
        string str;
        getline(cin, str);
        cout << str;
    */


    // 2. if - else if - else statements

    /*
    int age;
    cin >> age;
    if (age >= 18) {
        cout << "You are an Adult";
    } else {
        cout << "You're not an Adult";
    }
    */

    /*
    int mark;
    cin >> mark;
    if (mark < 25 && mark >= 0) {
        cout << "F";
    } else if (mark >= 25 && mark < 45) {
        cout << "E";
    } else if (mark >= 45 && mark < 50) {
        cout << "D";
    } else if (mark >= 50 && mark < 60) {
        cout << "C";
    } else if (mark >= 60 && mark < 80) {
        cout << "B";
    } else if (mark >= 80 && mark <= 100) {
        cout << "A";
    } else {
        cout << "Invalid Mark";
    }

    Similar Version;
    Automatic Minimums: If the code reaches mark < 45, 
    it already knows mark is NOT < 25.

    if (mark < 25) {
        cout << "F";
    } else if (mark < 45) {
        cout << "E";
    } else if (mark < 50) {
        cout << "D";
    } else if (mark < 60) {
        cout << "C";
    } else if (mark < 80) {
        cout << "B";
    } else if (mark <= 100) {
        cout << "A";
    }
    */

    
    // Nested condition;
    /*
    int age;
    cin >> age;
    if (age < 18) {
        cout << "Not eligible for job";
    } else if (age <= 57) {
        cout << "Eligible for job";
        if (age >= 55) {
            cout << ", but retirement soon";
        }
    } else {
        cout << "Retirement time";
    }
    */


    // 3. Switch statements

    /*
    int day;
    cin >> day;
    switch(day) {
        case 1: cout<< "Monday"; break;
        case 2: cout<< "Tuesday"; break;
        case 3: cout<< "Wednesday"; break;
        case 4: cout<< "Thursday"; break;
        case 5: cout<< "Friday"; break;
        case 6: cout<< "Saturday"; break;
        case 7: cout<< "Sunday"; break;
        default: cout << "Invalid Day";
    }
    */
    

    // 4. Arrays

    /* 1-Dimension Array;
    int arr[5];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];

    arr[3] += 10; // 40 + 10 = 50

    cout << arr[3];
    */

    /* 2D Array;
        int a[3][5];
        a[2][4] = 100;

        cout << a[2][4];
    */


    // 5. String;

    /*
    string s = "Beniel";
    int len = s.size();
    cout << s[len-1];
    */


    // 6. For loop;
    
    /*
    for(int i = 0; i < 5; i++) {
        cout << "Beniel\n";
    }
    */

    /*
    for (int i = 5; i > 0; i = i - 1) {
        cout << "Beniel " << i << endl;
    }
    */

    /*
    int i;
    for(i = 1; i <= 25; i = i + 5) {
        cout << "Striver " << i << endl;
    }
    cout << "Loops ends, because now the value of 'i' is: " << i;
    */


    // 7. while loop;

    /*
    int i = 1;
    while(i <= 25) {
        cout << "Beniel " << i << endl;
        i = i + 5;
    }
    */

    // 8. do-while loop;

    /*
    int i = 2;
    do {
        cout << "Beniel " << i << endl;
        i = i + 1;
    } while (i <= 1);
    cout << "The value of i: " << i;
    */


    // 9. Functions

// void printName() {
//     cout << "Hey Beniel" << endl;
// }
    
// void printGivenName(string n) {
//     cout << "Hey " << n << endl;
// }

// int printSum (int a, int b) {
//     return a + b;
// }

void doSomething(int n) {
    cout << n << endl;
    n+=5;
    cout << n << endl;
    n+=5;
    cout << n << endl;
}

void doSomething(string s) {
    cout << s << endl;
    int len = s.size();
    s[len-1] = 'z';
    cout << s << endl;
}

void doSomething3(int &n) {
    cout << n << endl;
    n+=5;
    cout << n << endl;
    n+=5;
    cout << n << endl;
}

void doSomething4(string &s) {
    cout << s << endl;
    int len = s.size();
    s[len-1] = 'z';
    cout << s << endl;
}

void arrayPassing(int arr[], int length) {
    arr[length-1] = 100;
}

int main() {

    /*
    printName();

    string name;
    cin >> name;

    string name2;
    cin >> name2;

    printGivenName(name);
    printGivenName(name2);

    int result = printSum(3,5);
    cout << result;

    cout << endl;

    // Inbuilt functions;
    int x = 10;
    int y = 20;
    int minimum = min(x,y);
    int maximum = max(x,y);
    cout << "The MIN value of x and y is: " << minimum << ", and the MAX is: " << maximum << endl;

    */

    // pass by value

    /*
    int num = 10;
    string name = "Benjamin";
    
    doSomething(num); // A copy has been passed (value)
    doSomething(name); // Copy (value)

    cout << endl << "Original values; " << endl;

    cout << num; // The original value will not get changed
    cout << endl;
    cout << name;
    */

    
    // pass by reference 
    // (& = address) - check out the void functions above doSomething3 and doSomething4

    /*
    int num = 10;
    string name = "Benjamin";
    
    doSomething3(num); // A reference has been passed (memory address of that value got stored)
    doSomething4(name); // Reference (memory address)

    cout << endl << "Original values; " << endl;

    cout << num; // The original value will get changed
    cout << endl;
    cout << name;
    */



    // 10. Taking array inputs from the user using for loop!

    /*
    int arr[5];
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    cout << arr[3] << endl; // Just the 4th value in the array
    for(int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    */

    // Passing array to a function (it's always pass by reference! 
    // so we don't include & in the function defined above);

    int arr[5];
    int size = 5;
    // getting inputs
    for(int i = 0; i < 5; i++) {
        cin >> arr[i];
    }
    // printing output before passing to the function
    for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    arrayPassing(arr, size);

    // after passing to the function and changed the last value;
        for(int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }

return 0;
}

