#include<iostream>
#include<cstring>
//#define _CRT_SECURE_NO_WARNINGS
using namespace std;
class Student
{
private:
	char* name;
	int id;
	// you can add score or subject more ...

public:
	Student(): name(nullptr),id(0){}
	Student(const char* _name, int _id) : id(_id) {
		//allocated memory of student name
		name = new char[strlen(_name) + 1];
		strcpy(name, _name);
	}


	const char* getStudentName() const {
		return name;
	}
	int getStudentID()const {
		return id;
	}

	//Destructor to free dynamically allocated memory
	~Student() {
		delete[] name;
	}

};

// A referenace to output of student constructor
ostream& operator<<(ostream& COUT, const Student& s) {
	COUT << "NAME : " << s.getStudentID() << endl;
	COUT << "ID :"<<s.getStudentName() << endl;

	return COUT;
}
int main() {
	//Create student object 
	Student s2("Nika", 18);

	cout << "STUDENT INFOMATION : " << endl << s2 << endl;
	return 0;
}
