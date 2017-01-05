#include <iostream>

using namespace std;

int do_this(int* p) {
  return (*p)++;
}

int do_that(int n) {
  return n++;
}

class Shape {

public:
    virtual int area() = 0;
    virtual const char* whoami() = 0;
};


class Circle: public Shape {
    int radius;
    public:
        Circle(int _radius) {radius = _radius;}
        int area() {return 4*radius*radius;}
        const char* whoami() { return "I am a circle"; }
};

class Triangle: public Shape {
    int base;
    int height;
    public:
        Triangle(int _base, int _height) {base = _base; height = _height;}
        int area() {return base*height/2;}
        const char* whoami() { return "I am a triangle"; }
};

class Rectangle: public Shape {
    int side;
    public:
        Rectangle(int _side) {side = _side;}
        int area() {return side*side;}
        const char* whoami() { return "I am a rectangle"; }
};
int main()
{
   int var = 2*2+3;      //declaring integer variable;
   int test[5] = {1,2,3,4,5}; //declaring integer array;
   int test2[5] = {1,2,3,4,5};// declaring integer array;

   void* testp[2];
   Shape* shapes[3];
   shapes[0] = new Circle(10);
   shapes[1] = new Triangle(7,3);
   shapes[2] = new Rectangle(4);





   for(int i=0; i<3; i++) {
    cout << shapes[i]->whoami() << " my area is " << shapes[i]->area() << endl;
    delete shapes[i];
   }

   test2[1] = 10;//changing the value of the second number "2" to "10";
   int*var2;//making a pointer to store the value of var;
   var2 = &var;//defining var 2 as the memory location;
   int* var3 = new int;
   //allocating a space for int;
   int *t = new int;
   *t = 6;

   const char* c = "hello world";


    int *x = new  int;
    cout << "This is var: " << var  << endl ; // printing var;
    cout <<  test[1] << endl;// printing second number of test;
    cout << test2[1] << endl;//printing test2: the changed number;
    cout << &var2 << endl;//printing the value of var2,which is 7;
    cout << x << endl;//printing the allocated space;
    cout << *(int*)testp[0] << endl;
    cout << (const char*) testp[1] << endl;
    cout << "The address of t: " << t << endl;//printing the
    cout << "The value of t: " << *t << endl;//printing the content of t;


    delete t;
    delete var3;
    delete x;
    return 0;


}
