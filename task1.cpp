#include "task1.h"

StudentAccount :: StudentAccount() {}

StudentAccount :: ~StudentAccount() {}

void StudentAccount :: SetFN (string n) {
    FN = n;
}

void StudentAccount :: SetLN (string n) {
    LN = n;
}

void StudentAccount :: SetSID (string n) {
    SID = n;
}

double StudentAccount :: Setcgpa (double c) {
    cgpa = c;
}

void StudentAccount :: SetFaculty (string n)
{
    Faculty = n;
}

void StudentAccount :: SetDepartment (string n)
{
    Department = n;
}

void StudentAccount :: SetDateBirth (string y) {
    DateBirth = y;
}

void StudentAccount :: SetBN (string n) {
    BN = n;
}

void StudentAccount :: SetWN (string n) {
    WN = n;
}

void StudentAccount :: SetPY (string n) {
    PY = n;
}

string StudentAccount :: GetFN () {
    return FN;
}

string StudentAccount :: GetLN () {
    return LN;
}

string StudentAccount :: GetSID () {
    return SID;
}

string StudentAccount :: GetFaculty ()
{
    return Faculty;
}

string StudentAccount :: GetDepartment ()
{
    return Department;
}

double StudentAccount :: Getcgpa () {
    return cgpa;
}

string StudentAccount :: GetDateBirth () {
    return DateBirth;
}


string StudentAccount :: GetBN()
{
    return BN;
}


string StudentAccount :: GetWN () {
    return WN;
}

string StudentAccount :: GetPY () {
    return PY;
}

void StudentAccount :: SetFan(string n)
{
    fan = n;
}

void StudentAccount :: SetMon(string n)
{
    mon = n;
}

void StudentAccount :: SetPradd(string n)
{
    pradd = n;
}

void StudentAccount :: SetPeradd(string n)
{
    peradd = n;
}

string StudentAccount :: GetFan()
{
    return fan;
}

string StudentAccount :: GetMon()
{
    return mon;
}

string StudentAccount :: GetPradd()
{
    return pradd;
}

string StudentAccount :: GetPeradd()
{
    return peradd;
}

void StudentAccount :: ShowData() {
    cout << "First Name       : " << GetFN() << endl;
    cout << "Last Name        : " << GetLN () << endl;
    cout << "ID Number        : " << GetSID() << endl;
    cout << "Date of Birth    : " << GetDateBirth () << endl;
    cout << "CGPA             : " << Getcgpa () << endl;
    cout << "Faculty          : " << GetFaculty () << endl;
    cout << "Department       : " << GetDepartment() << endl;
    cout << "Father Name      : " << GetFan() << endl;
    cout << "Mother Name      : " << GetMon () << endl;
    cout << "Present Address  : " << GetPradd() << endl;
    cout << "Permanent Address: " << GetPeradd () << endl;
    cout << endl;
}



void StudentAccount :: ShowData2 ()
{
    cout << "Book's Name     : " << GetBN() << endl;
    cout << "Writr's Name    : " << GetWN () << endl;
    cout << "Publishing Year : " << GetPY () << endl;
    cout << endl;
}

void StudentAccount :: ShowData3 ()
{
    cout << "Borrowing Book's Name       : " << GetBN() << endl;
    cout << endl;
}

void StudentAccount :: ShowData4 (){
cout<<GetFN()<<"\t"<<GetLN()<<"\t"<<GetSID()<<"\t"<<GetDateBirth()<<"\t"<<Getcgpa()<<"\t"<<GetFaculty()<<"\t"<<GetDepartment()<<"\t"<<GetFan()<< "\t" <<GetMon() << "\t" << GetPradd()<< "\t" << GetPeradd() << endl;

}
