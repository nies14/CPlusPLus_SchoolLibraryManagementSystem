#ifndef TASK1DB_H_INCLUDED
#define TASK1DB_H_INCLUDED

#include "task1.h"
#include <vector>

class StudentDB: public StudentAccount{
    vector <StudentAccount>BAA;
    vector <StudentAccount>BOA;
    vector <StudentAccount>DBA;
    vector <StudentAccount>SF;
    int top,pot,bot,cot;
public:
    StudentDB ();
    ~StudentDB ();
    int Search (string fn);
    void AddStudent ();
    void DeleteStudent ();
    void EditStudentInformation ();
    void PrintStudentInformation ();
    void PrintAllStudentInformation ();
    void Data_PrintAllStudentInformation ();
    void Handler ();
    void Handler2 ();
    void Handler3 ();

    int SearchBook (string bn);
    void AddBook ();
    void DeleteBook();
    void PrintBookInformation ();
    void PrintAllBookInformation ();

    int Past_Book(string bn);
    void ListofPending_Book();

    void IssueBook ();
    void ReturnBook ();
    int pending_book(string bn);
 };

#endif // TASK1DB_H_INCLUDED
