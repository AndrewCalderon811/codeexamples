#include<iostream>
#include<string>

using namespace std;

class Animal {
    protected:
        string name;
    public:
        Animal(const string &s="NoName") : name(s) { }   // Default value = "NoName"

        void speak() { cout << "  ANIMAL " << name << " : Hello, I'm " << name << endl; }
        void move() { cout << "  ANIMAL " << name << " : I'm moving" << endl; }
        void eat() { cout << "  ANIMAL " << name << " : I'm hungry!" << endl; }
};

class Turtle : public Animal {
    private:
        string voice;
    public:
        Turtle(string n="Turtle", string v="Meep")
            : Animal(n), voice(v) {}

        void speak() {
            cout << name << ": " << voice << endl;;
        }

        void move() {
            cout << name << ": I'm moving" << endl;
        }
};

int main() {

    Turtle arr[3];

    Turtle t1;
    Turtle t2("Michaelangelo", "COWABUNGA");
    Turtle t3("Pistachio Disguisey", "Am I turtley enough for the turtle club?");

    arr[0] = t1;
    arr[1] = t2;
    arr[2] = t3;

    for(int i = 0; i < 3; i++) {
        arr[i].speak();
        arr[i].move();
    }

    return 0;
}