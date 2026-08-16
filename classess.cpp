// Class :-Class is a user-defined datatype which provides blueprint of real world entity i.e. object.

//(i) variables (data-members & member function are defined in classess)
//(ii) whenever we create a object the memory for the data members is assigned to that object while every object share the member functions.
//(iii) Each object will have its seperate copy of its data member while the member function are shared by every object.


#include <iostream>
using namespace std;
class student
{
    public: // access specifier - Accessed outside the class
    int roll_no; // data member
    string name ;

void display()
{ // Member Function
    cout<<"Name: "<<name<<" , "<<"Roll_no. : "<<roll_no<<endl;
}
};

int main()
{
    student s1("Gur",17);
    s1.display();
    student s2;
    s1.name = "Garry";
    s1.roll_no = 21;
    s2.name = "Guri";
    s2.roll_no = 17;
    s1.display();
    s2.display();
    return 0;
}

// Whenever we are not providing any access specifier , all members of class are private . If we want to use them outside class we are required to make them public(access specifier).

// Encapsulation :- It is a process of binding data members and member functions within a class.
//(i) - Encapsulation provides three access specifier using which we can manage class members visibility/accessibility outside class.
// Access Specifiers :-
//  -Public - It can be access outside the class
//  -Private - it can't be accessed outside the class
//  -Protected - Can access in class or derived class

// Property made using private and public is Data Hiding

// Data Hiding :- To prevent accidental changes in data members from outside class we can make our data members private &  public the member function to set and get thier values.

// class person
// {
//     private:
//     string name;
//     int age;

//     public :
//     void set(int a , string n)
//     {
//         // if(a>0)
//         // age = a;

//         // else
//         //     age =-1; //raise error (Error handling topic)

//         name = n;
//         age = a;
//     }

//     void display()
//     {
//         if (age>0)
//         {
//         cout<<name<<" is "<<age<<" years old"<<endl;
//         }
//         else
//         {
//             cout<<"Wrong age"<<endl;
//         }
//     }
// };

// int main()
// {
//     person p1 , p2 ;
//     p1.set(-17,"Garry"); //negative age given - Gives error
//     p2.set(21,"Guri");
//     p1.display();
//     p2.display();
//     return 0;
// }

// Constructor :- Constructor are special member functions as they don't have any return type not even void.
//  (i) Constructor should always be public.
//  (ii) Whenever an object is created contructor is automatically called.

// There are four types of constructor -

// 1)Default constructor :- Default constrctor are constructor which don't have any parameter. Every class has its own default constructor which is in-built , if we provide function definition of default constructor then our definition will be considered as default constructor.

// syntax:- class_name()
//  {
// body of constructor
// }

// Default constructor

// class student
// {    private:
//     string name;
//     string course;
//     int roll_no;

//     public:

//         student(int r , string s , string c)
//         {
//             roll_no = r;
//             name = s;
//             course = c;
//         }

//         student()
//         {
//             cout<<"object created"<<endl;
//         }

// };

// int main()
// {
//     student s1 , s2 ,s3 ,s4 ;
//     return 0;
// }

// Parametrised constructor :- Whenever we provide parameter to our constructor than that constructor is knwon as parametrised constructor.
// If something not provided than it will be default constructor.

// class student
// {
//     private:
//     string name;
//     string course;
//     int roll_no;
//     int age;

//         public:
//         student()
//         {
//             cout<<"object created"<<endl;
//         }

//         student(int r , string s)
//         {
//             roll_no = r;
//             name = s;
//             cout<<"object created "<<roll_no<<": "<<name<<endl;
//         }

//         student(int r, string s , string c)
//         {
//             roll_no = r;
//             name = s;
//             course = c;
//             cout<<"object created "<<roll_no<<": "<<name<<": "<<course<<": "<<endl;
//         }

//         student(int r , string s , string c , int a)
//         {
//             roll_no = r;
//             name = s;
//             course = c;
//             age = a;
//             cout<<"Object created"<<" - "<<roll_no<<" "<<name<<" "<<course<<" "<<age<<endl;
//         }
// };

// int main()
// {
//     student s1 , s2(1,"Garry") , s3 , s4(7,"Gur","BTech") , s5(8,"Guri","MTech",17);
//     return 0;
// }
// Constructor Overloading :- Whenever we make more than one constructor by differentating number or type of arguments this process is known as constructor overloading

// Copy Constructor :- Copy Contructor is a constructor that will copy one object to another . Copy Constructor will take reference of object of same class as argument

// class student
// {
//     int roll_no;
//     string name;

//     public:
//         student()
//         {
//             cout<<"object created"<<endl;
//         }
//         student(int roll_no , string name)
//         {
//             this->roll_no = roll_no;
//             this->name = name;
//         }
//         student(student &st)
//         {
//             roll_no = st.roll_no;
//             name = st.name;
//         }
//         void display()
//         {
//             cout<<this->roll_no<<": "<<this->name<<endl;
//         }
// };
// int main()
// {
//     student s1(1,"Raju");
//     // student s2(s1); // or student s2 = s1;
//     student s2 = s1; // calls copy constructor
//     student s3 = s2; // calls copy constructor
//     student *p = &s1;
//     (*p).display(); //or    p->display();
//     s2.display();
//     s3.display();
//     return 0;
// }

// this Pointer :- this pointer is a pointer which stores address of the calling object. this pointer removes the ambiguity b/w the data members and the parameter name if both names are same(this->)

// Dynamic memory allocation :- In C++ there are two types of memory- stack memory and heap memory .
//  Stack memory is automatically allocated for variables and compile time , and has a fixed size .
//  (ii) for better control and flexibility dynamic memory allocation on memory heap is used .
//(iii) we can allocate memory from heap at run time using new operator and release it using delete operator .
//(iv) it is useful when size of required memory is not known at compile time .
//(v) whenever we allocate memory using new operator than we are required to release that memory by using delete operator . 

// New thing to declare an int as dynamically
//  int main()
//  {
//  int *p;
//  p = new int(15);
//  cout<<*p<<endl;//Value stored in p
//  cout<<p<<endl;//Address print
//  }

// int* fun()
// {
//     int* p;
//     p = new int(15);
//     delete p;
//     return p;
// }

// int main()
// {
//     int *q = fun(); // we use delete p -> now q become dangling pointer
//     cout<<*q<<endl;
//     return 0;
// }

// int main()
// {
//     int *p;
//     p = new int(15);
//     int *q;
//     q = p;
//     delete p; // now q becomes dangling pointer
//     p = nullptr;
//     q = nullptr;
//     cout<<*q;
//     return 0;
// }

// Allocation of dynamic array
//  int main()
//  {
//  int *p = new int[10]{2,3,6,1,4,8,9};
//  for(int i=0;i<10;i++)
//  {
//      // cout<<p[i]<<" ";// same line with space
//      // cout<<p[i]<<endl;// another line
//      // cout<<*(p++)<<endl; another way to print
//      cout<<p<<": "<<*p<<endl;
//  }
//  // for(int i=0;i<10;i++)// Again using thisprint garbage value
//  // {
//  //     cout<<*(p++)<<endl;
//  // }
//  return 0;
//  }

// Shallow copy : Whenever we are working with dynamic memory and we copy one object to another object then only address of the data members are copied , if we used in-built copy constructor.
// Deep copy : So by making our own copy constructor we can allocate new memory to data members and then copy values of data members from the copied object than this process is knwon as deep copy.

//- Note : Whenever we make shallow copy then changes to original variable will also make changes to copied variable or vice-versa but ,  when we make deep copy we can get rid of this problem

// Shallow copy
// int main()
// {
// int a = 7;
// int* p = &a;
// int* q = p; // shallow copy
// cout<<*p<<" "<<*q<<endl; // 7 7
// or
// int* p = new int (7);
// int* p1;
// p1 = p; // shallow copy
// cout<<*p<<" "<<*p1<<endl; // 7 7
// *p1 = 9; // change value of p1
// cout<<*p<<" "<<*p1<<endl; // 9 9

//     // deep copy
//     int *p1 = new int(15);
//     int *p2 = new int(); // deep copy
//     *p2 = *p1; // copy value of p1 to p2
//     cout<<*p1<<" "<<*p2<<endl; // 15 15
// }

// (18/02/2026) // Every class has own copy constructor
// class student
// {
//     public :
//     int age;
//     string name;
// };

// int main()
// {
//     student s1;
//     s1.age = 25;
//     s1.name = "Ram";

//     student s2 = s1;
//     s1.age = 17;
//     // s1.name = "Raju";
//     cout<<s1.name<<" : "<<s1.age<<endl;// After changing in S1 they do not reflect change in s2 it always show previous details.
//     cout<<s2.name<<" : "<<s2.age<<endl;
//     return 0;
// }

// Using - this pointer
//  class student
//  {
//      public :
//      int age;
//      string name;

//     student( string s , int a)
//     {
//         this->name = s;
//         this->age = a;
//     }
// };

// int main()
// {
//     student s1("Ram",25);
//     // s1.age = 25;
//     // s1.name = "Ram";

//     student s2 = s1;
//     s1.age = 17;
//     // s1.name = "Raju";
//     cout<<s1.name<<" : "<<s1.age<<endl;// After changing in S1 they do not reflect change in s2 it always show previous details.
//     cout<<s2.name<<" : "<<s2.age<<endl;
//     return 0;
// }

// Using Dynamic memory allocation
//  class student
//  {
//      public :
//      int *age;
//      string *name;

//     student( string s , int a)
//     {
//         age = new int(a);
//         name = new string(s);
//         // (H.w) - copy constructor me deep copy implement karni h , copy constructor in which it is having making deep copy
//     }
// };

// int main()
// {
//     student s1("Ram",25);
//     // s1.age = 25;
//     // s1.name = "Ram";

//     // student s2 = s1;
//     student s2("Raju" , 21);
//     *(s1.age) = 17;
//     // s1.name = "Raju";
//     cout<<*(s1.name)<<" : "<<*(s1.age)<<endl;// After changing in S1 they do not reflect change in s2 it always show previous details.
//     cout<<*(s2.name)<<" : "<<*(s2.age)<<endl;
//     return 0;
// }

// Note : Every class has its own in-built copy constructor which works fine for normal variables but when we are using dynamic memory that in-built copy constructor provides the shallow copy
// (ii) If we want deep copy then we have to make our own copy constructor to make deep copy

// Destructors : Destructor is a special member function that performs cleanup when an object life-times ends.
// (ii) Destructor name must match the class name having tilled sign(~) - Bitwise not operator also , as prefix.
// (iii) It doesn't take arguments and doesn't have a return type.
// (iv) The compiler automatically calls destructors when an object goes out of the scope.
// (v) We can't overload destructors , a class will have only a single destructor.
// (vi) Classes have their own in-built destructors which will work fine for normal variables but in case of dynamic memory (data members) , we need to write our own destructor to reallocate dynamic memory or delete dynamic memory.

// H.W - Deep Copy in Copy Constructor
// class Student
// {
// private:
//     int *marks;

// public:
//     Student(int m)
//     {
//         marks = new int;
//         *marks = m;
//     }

//     Student(const Student &s)
//     {
//         marks = new int;
//         *marks = *(s.marks);
//         cout << "Copy Constructor Called"<<endl;
//     }

//     void display()
//     {
//         cout << "Marks = " << *marks << endl;
//     }

//     void setMarks(int m)
//     {
//         *marks = m;
//     }
// };

// int main()
// {
//     Student s1(90);
//     Student s2 = s1;

//     cout << "Before change: "<<endl;
//     s1.display();
//     s2.display();

//     s2.setMarks(50);

//     cout << "After changing s2: "<<endl;
//     s1.display();
//     s2.display();

//     return 0;
// }

// Destructors :

// class person
// {
//     public:
//     int age;
//     string name;
//     person()
//     {
//         cout<<"object created"<<endl;
//     }
//     person(string n , int a)
//     {
//         name = n;
//         age = a;
//     }
//     void display()
//     {
//         cout<<name<<" : "<<age<<endl;
//     }
//     ~person()
//     {
//         cout<<"object destructed"<<endl;
//     }
// };
// int main()
// {
//     person p1 , p2("Ram",21);
//     p1.display();
//     p2.display();
// }

// Dynamic Destructor : Whenever data members of class are allocated using dynamic memory allocation , then we are required to delete that memory in destructors manually to avoid memory leaks. these constructors are knwon as dynamic destructors .

// class car
// {
//     int *year;
//     string *name;
//     public:
//     car() // now this becomes dynamic constructor
//     {
//         year = new int(0);
//         name = new string("no name");
//         cout<<"Object created"<<endl;
//     }
//     car (string s , int y) // now this becomes dynamic constructor
//     {
//         name = new string(s);
//         year = new int(y);
//         cout<<"Object created with "<<*name<<" : "<<*year<<endl;
//     }
//     ~car() // now this becomes dynamic destructor
//     {
//         delete name ;
//         delete year ;
//         cout<<"Object destructed and memory deleted"<<endl;
//     }
// };

// int main()
// {
// car c1 , c2("Mercedes Benz",2026) , c3("Maybach",2025) , c4("BMW",2024);
// return 0;
// }

// Constructors in which dynamic memory is allocated these constructors are known as dynamic constructor.

// class person{
//     public:
//     static int a;
//     const int y;
//     person(int x):y(x) { } //{constructor initializer list}  //initializer list - it is used to initialize const data members and reference data members because we can't initialize them in body of constructor as they are constant and reference data members must be initialized at the time of declaration only.
// };

// int person::a=25;

// int main(){
//     person p1(5),p2(10);
//     cout<<person::a<<endl;
//     cout<<p1.a<<endl;
//     p1.a=45;
//     cout<<p2.a<<endl;
//     cout<<p1.y<<endl<<p2.y<<endl;
//     // p1.y=6;
// }

// Dynamic Object Creation

// class Student
// {
//     private:
//     int roll_no;
//     string name;

//     public:
//     Student(int r , string n)
//     {
//         roll_no = r;
//         name = n;
//         cout<<"Constructor Called"<<endl;
//     }
//     void display()
//     {
//         cout<<roll_no<<" "<<<<name<<endl;
//     }
//     ~Student()
//     {
//         cout<<"Destructor Called"<<endl;
//     }
// };
// int main()
// {
//     Student s2(9,"xyz");
//     {
//         Student s1(7,"abc");
//         s1.display();
//     }
//     s2.display();
//     // Student s2(9,"xyz");
//     return 0;
// }

// This is Dynamic memory , destructor will only called when we write delete.
// class Student
// {
// private:
//     int roll_no;
//     string name;

// public:
//     Student(int r, string n)
//     {
//         roll_no = r;
//         name = n;
//         cout << "Constructor Called" << endl;
//     }
//     void display()
//     {
//         cout << roll_no << " " << name << endl;
//     }
//     ~Student()
//     {
//         cout << "Destructor Called" << endl;
//     }
// };
// int main()
// {
//     Student *s1 = new Student(10, "jkl");
//     Student *s2 = new Student(11, "hij");
//     s1->display();// Pointer to call member function to print values.
//     s2->display();
//     delete s1;
//     delete s2;
//     return 0;
// }

// Write a program to create a class named Student and you are required to create n number of objects (n given by user) by using array of objects.?

// class Student
// {
//     private:
//     int roll_no;
//     string name;

//     public:
//     void input()
//     {
//         cout<<"Enter name"<<endl;
//         cin>>name;                               // ->Pending

//         cout<<"Enter roll_no"<<endl;
//         cin>>roll_no;
//     }
//     void show()
//     {
//         cout<<
//     }
// };

// Integer and class type pointer
//  class Student
//  {
//  private:
//      int roll_no;
//      string name;

// public:
//     Student(int r, string n)
//     {
//         roll_no = r;
//         name = n;
//         cout << "Constructor Called" << endl;
//     }
//     void display()
//     {
//         cout << roll_no << " " << name << endl;
//     }
//     ~Student()
//     {
//         cout << "Destructor Called" << endl;
//     }
// };
// int main()
// {
//     int *p[10];
//     Student *s[10];
//     return 0;
// }

// Friend class ->
// (i) As we know that private member of class are not accessible outside the class , But if we want to access private member of a class within another class we can make it's friend class.
// (ii) This friendship is not mutual means in below example student class is friend of peron class , that doesn't mean that person class can access private member of student class.
// (iii) In below example , student class is a friend of person class, means every member function of student class can access private members of person class.

// class person
// {
// private:
// string name;
// public:
// person(string n)
// {
// name = n;
// }
// friend class student; // student class becomes friend of person class
// };

// class student
// {
// public:
// void display(person &p1) //->Agar ye static hota to hame object nhi likhna padta jaise Student s;
// // We access person class becuase it is public
// {
// cout<<p1.name<<endl;
// }
// };

// int main()
// {
// person p1("ABC");
// person p2("XYZ");
// student s;
// s.display(p1);
// s.display(p2);
// return 0;
// }

// class vehicle
// {
// public: // only public it run on private it will not run , and it will also access only by using "friend class"
// string name;
// int speed;

// public:
// vehicle(string n , int s)// vehicle class constructor
// {
// name = n;
// speed = s;
// }
// friend void display(vehicle &v);
// };

// //This is global function , not a fucntion of any class
// void display(vehicle &v)
// {
// cout<<v.name<<" : "<<v.speed<<endl;
// }// and it become friend of vehicle class, so it can access private members of vehicle class.

// int main()
// {
// vehicle v1("maruti",999);
// vehicle v2("maruti 800",998);
// display(v1);
// display(v2);
// return 0;
// }

// class person; // forward declartaion of class
// class student
// {
// public:
//     void display(person &p);
// }

// class student
// {
// public:
//     void display(person &p)
//     {
//         cout << p.name << endl;
//     }
//     void changename(person &p)
//     {
//         string nn;
//         cin >> nn;
//     }
// };

// class person
// {
// private:
//     string name;

// public:
//     person(string n)
//     {
//         name = n;
//     }
//     friend void student::display(person &p);
// };
// void student::display(person &p)
// {
//     cout << p.name << endl;
// }
// void student::changename(person &p)
// {
// string nn;
// cin>>nn;
// p.name = nn;
// }

// int main()
// {
//     person p1("ABC");
//     person p2("XYZ");
//     student s;
//     s.display(p1);
//     s.display(p2);
//     return 0;
// }

// We can also make display function as a friend class of another class if it is private or public , by making it friend class we can access its private as well as public data members or members function.

// How pointer points to an object :
//  class vehicle{
//      public:
//      int speed;
//      string name;
//      vehicle(){
//          cout<<"default constructor"<<endl;
//      }
//      void set(string s , int speed){
//          this-> speed = speed;
//          name = s;
//      }
//      int returnspeed(){
//          return speed;
//      }
//      void display(){
//          cout<<name<<" : "<<speed<<endl;
//      }
//  };
//  int main(){
//      vehicle v1;
//      vehicle *p;//pointer of vehicle class type
//      p = &v1;//pointer to an object
//      p->set("maruti",999);//calling memeber function using pointer
//      cout<<p->returnspeed()<<endl;
//      cout<<p->name<<endl;//accessing public member function outside class using pointer
//      return 0;
//  }

// Write a program to make a class which will use static members and constant members and demostrate thier use.
// class people
// {
// private:
// const string name;
// static int roll_no;
// public:
// people(int r , string n)
// {

// }
// };
// int main()
// {

// }

// Use pointer concept to store and access any variable and demostrate how we can use  pointer to access any variable?
// int main()
// {
//     int a = 7;
//     // int *p;
//     int *p;
//     *p = &a;
//     // cout<<&p<<endl;
//     cout<<p<<endl;
//     cout<<*p<<endl;
// }

// Use Data Hiding methods to show how we can make ensure our data security.

// Write a C++ program to implement a class having n integer data member now you are required to write a member function which will add two object of that class
// Note-> Adding object means adding thier data member

// class Person
// {
//     int age;

// public:
//     Person(int age = 17)
//     {
//         this->age = age;
//     }
//     void display()
//     {
//         cout << "Value of Age : " << age << endl;
//     }
//     Person add(Person &n) { // calling object by reference because of & and without & it will be calling object by value.                                             
//         Person P;
//         P.age = n.age + this->age;
//         return P; // return object by value
//     }
// };
// int main()
// {
//     Person age1(19), age2(20);
//     Person age3;
//     age3 = age1.add(age2);
//     age3.display();
//     return 0;
// }

// Write a C++ program to create a class for storing complex numbers and then u are required to add , subtract , & multiply two complex numbers using member functions

// AI code :
// #include <iostream>
// using namespace std;

// class Complex {
//     int real, imag;

// public:
//     // Input function
//     void input() {
//         cout << "Enter real and imaginary part: ";
//         cin >> real >> imag;
//     }

//     // Display function
//     void display() {
//         cout << real << " + " << imag << "i" << endl;
//     }

//     // Addition
//     Complex add(Complex obj) {
//         Complex temp;
//         temp.real = real + obj.real;
//         temp.imag = imag + obj.imag;
//         return temp;
//     }

//     // Subtraction
//     Complex subtract(Complex obj) {
//         Complex temp;
//         temp.real = real - obj.real;
//         temp.imag = imag - obj.imag;
//         return temp;
//     }

//     // Multiplication
//     Complex multiply(Complex obj) {
//         Complex temp;
//         temp.real = (real * obj.real) - (imag * obj.imag);
//         temp.imag = (real * obj.imag) + (imag * obj.real);
//         return temp;
//     }
// };

// int main() {
//     Complex c1, c2, sum, diff, prod;

//     cout << "Enter first complex number:\n";
//     c1.input();

//     cout << "Enter second complex number:\n";
//     c2.input();

//     sum = c1.add(c2);
//     diff = c1.subtract(c2);
//     prod = c1.multiply(c2);

//     cout << "\nAddition: ";
//     sum.display();
 
//     cout << "Subtraction: ";
//     diff.display();

//     cout << "Multiplication: ";
//     prod.display();

//     return 0;
// }

//                                              Another Topic - Constructor Overloading :

// code for addition of two objects using member function : (without operator overloading)
// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;What are you doing? 
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number add(Number &n){//passing object by reference
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// };
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",15);
//     Number num3;
//     num3 = num1.add(num2);
//     num1.display();
//     num2.display();
//     num3.display();
// }

// Code for operator overloading :
// 1. In C++ , operator overloading means that the operators which were working for inbuilt datatypes such as int , float , char etc. will now work for user defined datatypes such as classess and objects 
// 2. We can overload every operator such as binary operator and unary operator except these 5  operators - (i) . (dot operator) (ii) :: (scope resolution operator) (iii) sizeof (iv) ?: (ternary operator) (v) typeid operator 
// or(Same)
// (i) sizeof  
// (ii) typeid
// (iii) :: (scope resolution operator)
// (iv) . and .*(member access operators)
// (v) ?: (ternary or conditional operator)


// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number operator+(Number &n){//passing object by reference
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// };
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",15);
//     Number num3;
//     num3 = num1 + (num2);
//     num1.display();
//     num2.display();
//     num3.display();
// }

// Write a C++ program to ceate a distance class for storing  distnace in feet and inches and add & substract two distance objects using operator overloading. (1 feet = 12 inches)


//comparing these num 1 & num 2 using operator overloading :

// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number operator+(Number &n){//passing object by reference
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// bool operator>(Number &n){
//     return this->a > n.a;
// }
// bool operator==(Number &n){
//     return this->a == n.a;
// }
// };
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",10);
//     Number num3;
//     num3 = num1 + num2;
//     num1.display();
//     num2.display();
//     num3.display();
//     if(num1 > num2){
//         cout<<"num1 is greater";
//     }
//     else if(num1 == num2){
//         cout<<"num1 and num2 are equal";
//     }
//     else{
//         cout<<"num2 is greater";
//     }
//     return 0;
// }


// Write a C++ program to create a complex number class and add , substract , multiply two object of complex number class using operator overloading.

// Write a C++ program to compare two student class on the basis of marks & print name of the students who has got the greater marks using relational operator overloading.


//                                              Urnary Operator 
// int main()
// {
//     int a = 5;
//     int b;
//     b = a++;
//     cout<<"value of a: "<<a<<endl;
//     cout<<"value of b: "<<b<<endl;
// }

// Prefix 
// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number operator+(Number &n){//passing object by reference
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// bool operator>(Number &n){
//     return this->a > n.a;
// }
// Number operator++(){ //prefix increment operator overloading 
//     Number t;
//     this->a = this->a+1;
//     t.a = this->a;
//     // t.name = this->name + "++";
//     return t; //return oject by value 
// }
// };
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",17);
//     Number num3;
//     num3 = num1 + num2;
//     num1.display();
//     num2.display();
//     num3.display();
//     if(num1 > num2){
//         cout<<"num1 is greater";
//     }
//     else{
//         cout<<"num2 is greater"<<endl;
//     }
//     Number num4;
//     num4 = ++num1;
//     num1.display();
//     num4.display();
//     return 0;
// }

//  Post Fix : 
// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number operator+(Number &n){//passing object by reference
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// bool operator>(Number &n){
//     return this->a > n.a;
// }
// Number operator++(int){ //postfix increment operator overloading by using dummy int argument
//     Number t;
//     t.a = this->a;
//     this->a = this->a+1; 
//     // t.name = this->name + "++";
//     return t; //return oject by value 
// }
// };
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",17);
//     Number num3;
//     num3 = num1 + num2;
//     num1.display();
//     num2.display();
//     num3.display();
//     if(num1 > num2){
//         cout<<"num1 is greater";
//     }
//     else{
//         cout<<"num2 is greater"<<endl;
//     }
//     Number num4;
//     num4 = num1++; //postfix increment operator overloading
//     num1.display();
//     num4.display();
//     return 0;
// }

 
// class Number{
// int a;
// string name;
// public:
// Number(string name="" , int a=0)
// {
//     this->name = name;
//     this->a = a;
// }
// void display()
// {
//     cout<<"value of "<<name<<" a: "<<a<<endl;
// }
// Number operator+(Number &n){
// Number t;
// t.a = this->a + n.a;
// t.name = this->name + "+" + n.name;
// return t;
// }
// bool operator>(Number &n){
//     return this->a > n.a;
// }
// Number operator++(int){
//     Number t;
//     t.a = this->a;
//     this->a = this->a+1;
//     return t;
// }
// friend Number operator -(Number &n1 , Number &n2);
// };
// Number operator -(Number &n1 , Number &n2){
//     Number t;
//     t.a = n1.a - n2.a;
//     t.name = n1.name + "-" + n2.name;
//     return t;
// }
// int main()
// {
//     Number num1("num1" , 10) , num2("num2",17);
//     Number num3 ;
//     num3 = num1 - num2;
//     num1.display();
//     num2.display();
//     num3.display();
//     return 0;
// }



// Q . Write a C++ program to takean array from user and then prnt the sum and average of all elements of array using range based for loop ? .

// int main()
// {
//     int sum = 0;
//     int avg;
//     int n;
//     cout<<"Enter size of array : ";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter elements : ";
//     for(int i=0 ; i<n ; i++){
//        cin>>arr[i];
//     }
//     for(int x : arr){
//         sum = sum + x;
//         avg = sum/n;
//     }
//     cout<<"sum of array : "<<sum<<endl;
//     cout<<"Avg. of array : "<<avg<<endl;
//     return 0;
// }


// class student
// {
//     public:
//     student()
//     {
//         cout<<"object created"<<endl;
//     }
//     ~student()
//     {
//         cout<<"object destroyed"<<endl;
//     }

// };
// void fun()
// {
//     student s1;
// }
// int main()
// {
//     fun();
//     cout<<"In main"<<endl;
//     return 0;
// }

// Static Object
// class student
// {
//     public:
//     student()
//     {
//         cout<<"Object Created"<<endl;
//     }
//     ~student()
//     {
//         cout<<"Object Destroyed"<<endl;
//     }

// };
// void fun()
// {
//     static student s1;
// }
// int main()
// {
//     fun();
//     cout<<"In main"<<endl;
//     return 0;
// }

// Dynamic Object Creation
// class student
// {
//     public:
//     student()
//     {
//         cout<<"object created"<<endl;
//     }
//     ~student()
//     {
//         cout<<"object destroyed"<<endl;
//     }

// };
// void fun()
// {
//     student *s1 = new student(); // dynamc object -> use new for object creation and write delete for deleting it , then the memory  is not destroyed after the program ends and data will be leak so delete keyword is used.
//     delete s1;
// }
// int main()
// {
//     fun();
//     cout<<"In main"<<endl;
//     return 0;
// }


// Pointer to Pointer / Double Pointer  Code ..
// int main()
// {
//     int a = 5;
//     int *p;
//     int **p1; // it will store address of other pointer
//     p = &a;
//     p1 = &p;
//     cout<<a<<endl;
//     cout<<"Value a p"<<*p<<endl;
//     cout<<"Value a p1"<<**p1<<endl;
// }

// Whenever we are not providing any value to the pointer variable it is called wild pointer..


// Wild Pointer : Whenever we are declaring a pointer and not providing some address to it , than that pointer is known as Wild Pointer. because it will have some garbage value .

// - To resolve the issue of wild pointer there is a concept of null pointer '

// Null pointer :

// int *p = NULL;


// Memory Leak - Whenever we allocate dynamic memory and forgot to delete the same then that memory is considered as leaked memory. because it will also available after the programs ends . 


// Pointer to Function : As we know that , to store the addres of integer variable we need integer type of pointer , to store the address of float variable we need float type of pointer , to store the adddress of some object we need its class type of pointer.

// In a similiar way to store the address of some function we need to have the same function type of pointer 

// int fun(int a , int b)
// {
//     int c = a+b;
//     return c;
// }
// int main()
// {
//     int (*g)(int,int);
//     g = fun; // The Name of the function conatins its address
//     cout<<g(7,9)<<endl;
//     // cout<<fun(7,9); // Simple function calling 
// }


// Write a C++ Program to declare a pointer to a function whih is not returning anything and is taking three arguments from which first and last are float and 2nd is integer.

// void fun(float a , int b , float c)
// {
//     float result = a + b + c;
//     cout<<"Result: "<<result<<endl;
// }
// int main()
// {
//     void(*G)(float , int , float);
//     G = fun;
//     G(5,8,7);
//     return 0;
// }


// Write a C++ program to print an integer array using pointer arithmetic 

// Whenever we are adding some integer to a pointer the pointer will try to move to the next element , if we add  1 like to next element it will take 4 byte.


// Unary Operator Overloading 
// class Num
// {
//     int a;
//     public:
//     Num(int a)
//     {
//         this-> a = a;
//     }
//     void inca()
//     {
//         this->a++;
//     }
//     void display()
//     {
//         cout<<"Value of a: "<<a<<endl;
//     }
// };
// int main()
// {
//     Num n1(5);
//     n1.display();
//     n1.inca();
//     n1.display();
//     return 0;
// }


// Overlaoding Urnary Operator 
// class Num
// {
//     int a;
//     public:
//     Num(int a)
//     {
//         this-> a = a;
//     }
//     void operator++(int ) // we overload urnary operator 
//     {
//         this->a++; // pre fix overlaod 
//     }
//     void display()
//     {
//         cout<<"Value of a: "<<a<<endl;
//     }
// };
// int main()
// {
//     Num n1(5);
//     n1.display();
//     n1++; // With overloading we can write here 
//     n1.display();
//     return 0;
// }

// class Num
// {
//     int a;
//     public:
//     Num(int a)
//     {
//         this-> a = a;
//     }
//     Num operator++(int)
//     {
//         Num g;
//         this-> a++;
//         g.a = this->a; // pre fix overload
//         return g;
//     }
//     void display()
//     {
//         cout<<"Value of a: "<<a<<endl;
//     }
// };
// int main()
// {
//     Num n1(5);
//     Num n2;
//     n2 = ++n;
//     n1.display();
//     n2.display();
//     return 0;
// }


// Post Fix
// Num operator++(int)
//     {
//         Num g;
//         g.a = this->a; // post fix overlaod
//         this-> a++;
//         return g;
//     }   
//     int main()
//     {
//         Num n1(5);
//         Num n2;
//         n2 = n1++;
//         n1.display();
//         n2.display();           
//         return 0;
//     }
