//: C05:DotTemplate.cpp
// Illustrate the .template construct.
#include <bitset>
#include <cstddef>
#include <iostream>
#include <string>
using namespace std;

template<class T, size_t N>
basic_string<T> btostr(bitset<N>& bs) {
    return bs. template to_string<T>();
}


int main() {
    bitset<10> bs;
    bs.set(1);
    bs.set(9);
    string s = btostr<char>(bs);

    cout << s << endl;
    cout << bs.to_string() << endl;
    return 0;
}
