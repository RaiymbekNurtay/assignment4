#include <iostream>
#include "Course.h"
#include "IEEE.h"
#include "Student.h"

ostream & operator << (ostream & out, const Student * other);
istream & operator >> (istream & in,  Student * other);
int x;



int main() {
    Student * student = new Student[10];
    cin >> student;
    cout << student;
    return 0;
}

ostream & operator << (ostream &out, const Student *other){
    out << "Name    |      ID      |    Age     |    Courses      |   Activities" << endl;
    out << "________________________________________________________________" << endl;
    for(int y=0; 7 > y; y++) {
        out << other[y].name << "     |    " << other[y].ID << "     |      " << other[y].age << "     |    ";
        for (int j = 0; x > j; j++) {
            out << other[y].course[j].name << endl << "                                               " ;
        }
        out<<endl;
    }
return out;

}

istream & operator >> (istream &in,  Student *other)
{
    cout << "Enter students number";
    int number;
    in >> number;
    for(int h=0; number > h; h++) {
        cout << "Enter Student Name";
        in >> other[h].name;
        cout << "Enter Student ID";
        in >> other[h].ID;
        cout << "Enter Student Age";
        in >> other[h].age;
        cout << "Enter number of courses";
        in >> x;
        Course *course = new Course[x];
        for (int k = 0; x > k; k++) {
            cout << "Enter Student Course";
            in >> other[h].course[k].name;
        }
    }
        return in;
}