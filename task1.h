#ifndef TASK1_H_INCLUDED
#define TASK1_H_INCLUDED
#include <iostream>
#include <string>
#include <fstream>
#include <cstdio>
#include <cstdlib>
#include <vector>
using namespace std;

class StudentAccount {
private:
    string FN;          //student's first name
    string LN;          //student's last name
    string SID;         //student id
    string Faculty;
    string Department;
    string DateBirth;
    string fan;
    string mon;
    string pradd;
    string peradd;
    double cgpa;

    string BN;          //book's name
    string WN;          //writer's name
    string PY;          //Publishing year
public:
    StudentAccount();
    ~StudentAccount();
    void SetFN (string n);
    void SetLN (string n);
    void SetSID (string n);
    void SetFaculty (string n);
    void SetDepartment (string n);
    double Setcgpa (double c);
    void SetDateBirth (string y);
    string GetFN ();
    string GetLN ();
    string GetSID ();
    string GetFaculty ();
    string GetDepartment ();
    string GetDateBirth ();
    double Getcgpa ();
    virtual void ShowData();
    virtual void ShowData2 ();
    virtual void ShowData3 ();
    virtual void ShowData4 ();

    void SetFan(string n);
    void SetMon(string n);
    void SetPradd(string n);
    void SetPeradd(string n);

    string GetFan();
    string GetMon();
    string GetPradd();
    string GetPeradd();

    void SetBN(string n);
    string GetBN ();
    void SetWN (string n);
    string GetWN ();
    void SetPY (string n);
    string GetPY ();

};

#endif // TASK1_H_INCLUDED

