//: C01:Auto_ptr.cpp
// Illustrates the RAII nature of auto_ptr.
#include <memory>
#include <iostream>

using namespace std;

class TraceHeap {
    int i;
public:
    static void* operator new(size_t sz) {
        cout << "Allocate size: " << sz << endl;
        return ::operator new(sz);
    }

    static void operator delete(void *p) {
        cout << "Deallocating ptr: " << p << endl;
        ::operator delete(p);
    }
    TraceHeap(int i) : i(i) {
        cout << "Contruct TraceHeap" << endl;
    }
    int f() {
        return i;
    }
    ~TraceHeap() {
        cout << "TraceHeap ~ called" << endl;
    }
};

int main() {
    auto_ptr<TraceHeap> Trace(new TraceHeap(5));//Trace is a smart pointer object (templated), so it will automatically get deallocated, when main returns
    cout << "value: " << Trace->f() << endl;
    return 0;
}
