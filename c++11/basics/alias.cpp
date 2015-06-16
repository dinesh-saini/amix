#include<iostream>
#include<map>

using namespace std;

template<typename T>
using string_map = map<string, T>;

int main() {
    string_map<int> abc;
    abc["abc"] = 2;
    cout << abc["abc"] << endl;
    return 0;
}
