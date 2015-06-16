#include<iostream>

using namespace std;

enum class Color {
    red,
    blue,
    green,
    yellow,
};

enum class traffic_light {
    red,
    green,
    yellow
};

traffic_light& operator++(traffic_light& t) {
    switch(t) {
        case traffic_light::red: t = traffic_light::green;break;
        case traffic_light::yellow: t = traffic_light::red;break;
        case traffic_light::green: t = traffic_light::yellow;
    }
    return t;
}

traffic_light operator++(traffic_light& t,int) {
    traffic_light value = t;
    switch(t) {
        case traffic_light::red: t = traffic_light::green;break;
        case traffic_light::yellow: t = traffic_light::red;break;
        case traffic_light::green: t = traffic_light::yellow;
    }
    return value;
}

ostream& operator<<(ostream& out, traffic_light& t) {//copy, & means copy
    switch(t) {
        case traffic_light::red: out << "red";break;
        case traffic_light::green: out << "green";break;
        case traffic_light::yellow: out << "yellow";
    }
    return out;
}

ostream& operator<<(ostream& out, traffic_light&& t) {//move, && means move (i.e. rvalue reference)
    switch(t) {
        case traffic_light::red: out << "red";break;
        case traffic_light::green: out << "green";break;
        case traffic_light::yellow: out << "yellow";
    }
    return out;
}

int main() {
    traffic_light c = traffic_light::red;
    cout << ++c << endl;
    auto see = c++;
    cout << see << endl;
    cout << c++ << endl;
    cout << c << endl;
    return 0;
}
