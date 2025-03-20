#include <iostream>
using namespace std;

class student {
public:
    int age;
    string name;
student (){
cout<<"i am un parametrized"<<endl;}

    student(int a, string n) {
        age = a;
        name = n;
    }

    void displays() {
        cout << "fdfdcfbkjfgrj" << endl;
    }


    void displayinfo() {
        cout << age << endl;
        cout << name << endl;
    }


    void display() {
        cout << "heloooooo" << endl;
    }
};

class car {
public:
    // Constructor for car
    car() {
        cout << "constructor" << endl;
    }


    int speed(int maxspeed) {
        return maxspeed;
    }
};

int main() {
    student obj(23, "muzamil");
student obj2;
    obj.display();
    obj.displays();
    car op;         //
    int result = op.speed(33);
    cout << "The speed of the car is: " << result << " km/h" << endl;
    obj.displayinfo();
    return 0;
}
