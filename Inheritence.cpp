#include <iostream>
#include <string>
using namespace std;
class Person{
	public:
	 int age;
        string fullName;
        string phoneNumber;
};


class Student:public Person {

    public:
        int studentId;
        string schoolName;
        
        void study() {
            cout << "Studying" << endl;
        }
};

class Employee:public Person {

    public:
        int employeeId;
        string companyName;
    
        void work() {
            cout << "Working" << endl;
        }
};


int main() {
Employee emp1;
emp1.fullName = 'AYUSH';

    return 0;
}
