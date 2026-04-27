#include<bits/stdc++.h>
using namespace std;

/*
    1. Algorithms
    2. Containers [vector/ queue/ set/ map/ etc..,]
    3. Functions
    4. Iterators
*/

void Pairs() {
    pair<int,string> p = {1,"Hello"};
    cout << p.first << " " << p.second << endl;

    pair<int,pair<int,int>> p1 = {1,{2,3}};
    cout << p1.first << ' ' << p1.second.first << ' ' << p1.second.second << endl;

    pair<int,int> arr[] = {{10,20}, {30,40}, {50,60}};
    cout << arr[0].first << ' ' << arr[2].second << endl;
}

int main() {

    /* 1. pair */
    // A pair is a template class in the <utility> header that groups two heterogeneous values into a single unit, accessible via .first and .second
    // pair is a user-defined datatype. Specifically, it is a template class (or more technically, a struct template).
    Pairs();



    return 0;
}