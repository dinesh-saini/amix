#include<iostream>

using namespace std;

class Vector {
typedef double T;
public:
    Vector(int s) : sz(s), ele(new T[sz]) {}
    int size() const { return sz; }
    T& operator[](int idx) { return ele[idx]; }
private:
    int sz;
    T* ele;
};

int main() {
    Vector vec(10);

    for(auto i = 0; i < vec.size(); i++) {
        cin >> vec[i];
    }

    for(auto i = 0; i < vec.size(); i++) {
        cout << vec[i] << endl;
    }
    return 0;
}
    
