#include "task1DB.h"
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <bits/stdc++.h>

StudentDB :: StudentDB () {
     top = 0;
     pot = 0;
     bot = 0;
     cot = 0;
}

StudentDB :: ~StudentDB () {}

int StudentDB :: Search (string fn) {
    for (int i = 0; i < BAA.size(); i++) {
        if (BAA[i].GetSID() == fn) return i;
    }
    return -1;
}


void StudentDB :: AddStudent () {
    //string id;
    //cout << "Put the id name first: ";
    //cin.ignore();
    //getline(cin,id);
    string fn, ln, id, fac, dep, dob, fan, mon, pradd, peradd;
    double cgpa;
    cin.ignore();

    cout << "Put first name: ";
    getline(cin,fn);

    cout << "Put last name: ";
    getline(cin,ln);

    cout << "Put id number: ";
    getline(cin,id);

    cout << "Put faculty name: ";
    getline(cin,fac);

    cout << "Put Department: ";
    getline(cin,dep);

    cout << "Put Date of Birth: ";
    getline(cin,dob);

    cout << "Put C.G.P.A: ";
    cin >> cgpa;
    cin.ignore();

    cout << "Put Father name: ";
    getline(cin,fan);

    cout << "Put Mother name: ";
    getline(cin,mon);

    cout << "Put Present Address: ";
    getline(cin,pradd);

    cout << "Put Permanent Address: ";
    getline(cin,peradd);

    cout << endl;

    StudentAccount temp;
    temp.SetFN(fn);
    temp.SetLN(ln);
    temp.SetSID(id);
    temp.SetFaculty(fac);
    temp.SetDepartment(dep);
    temp.SetDateBirth(dob);
    temp.Setcgpa(cgpa);
    temp.SetFan(fan);
    temp.SetMon(mon);
    temp.SetPradd(pradd);
    temp.SetPeradd(peradd);
    BAA.push_back (temp);

    fstream stu;
    stu.open("Student.txt",ios::out|ios::app);

    stu<<BAA[top].GetFN()<<"\t"<<BAA[top].GetLN()<<"\t"<<BAA[top].GetSID()<<"\t"<<BAA[top].GetDateBirth()<<"\t"<<BAA[top].Getcgpa()<<"\t"<<BAA[top].GetFaculty()<<"\t"<<BAA[top].GetDepartment()<<"\t"<<BAA[top].GetFan()<< "\t" <<BAA[top].GetMon() << "\t" << BAA[top].GetPradd()<< "\t" << BAA[top].GetPeradd() << endl;

    top++;
    stu.close();

}

void StudentDB :: DeleteStudent ()
    {
	string an;
    cout << "Put your id number: ";
    cin.ignore();
    getline(cin,an);
    int a = Search(an);
    if (a > -1) {
		BAA.erase(BAA.begin()+a);
		cout << "deleted" << endl;
	}
	else
	cout << "Wrong Input" << endl;
}


void StudentDB :: EditStudentInformation (){
	string an;
    cout << "Put your id number: ";
    cin.ignore();
    getline(cin,an);
    int a = Search(an);
    if (a > -1) {
	string name;
    cout << "Put first name: ";
    getline(cin,name);

    string ac;
	cout << "Put last name: ";
	getline(cin,ac);

	string ki;
	cout << "Put id number: ";
	getline(cin,ki);

    string fc;
    cout << "Put faculty name: ";
    getline(cin,fc);

    string dp;
    cout << "Put Department: ";
    getline(cin,dp);

    string db;
    cout << "Put Date of Birth: ";
    getline(cin,db);

    double cgp;
    cout << "Put C.G.P.A: ";
    cin >> cgp;
    cin.ignore();

    string fn;
    cout << "Put Father name: ";
    getline(cin,fn);

    string mn;
    cout << "Put Mother name: ";
    getline(cin,mn);

    string prad;
    cout << "Put Present Address: ";
    getline(cin,prad);

    string padd;
    cout << "Put Permanent Address: ";
    getline(cin,padd);

    cout << endl;


    BAA[a].SetFN(name);
    BAA[a].SetLN(ac);
    BAA[a].SetSID(ki);
    BAA[a].SetFaculty(fc);
    BAA[a].SetDepartment(dp);
    BAA[a].SetDateBirth(db);
    BAA[a].Setcgpa(cgp);
    BAA[a].SetFan(fn);
    BAA[a].SetMon(mn);
    BAA[a].SetPradd(prad);
    BAA[a].SetPeradd(padd);
	}
	BAA[a].ShowData();
}

void  StudentDB :: PrintStudentInformation ()
{
    string id;
	cout << "Put id number: ";
	cin.ignore();
	getline(cin,id);

	int a = Search(id);
    if (a > -1){
        BAA[a].ShowData();
        BAA[a].ShowData3();
    }
	else
		cout<<"wrong input"<<endl;
}

void StudentDB :: Data_PrintAllStudentInformation ()
{
	string s = "FirstName    LastName   ID    DateofBirth    CGPA   Faculty    Department   FatherName    MotherName    PresentAddress    PermanentAddress";
	cout << s << endl;
	SF.clear();
	fstream allfile;
	allfile.open("Student.txt", ios::in);
	if (allfile.is_open())
	{
		while (!allfile.eof())
		{
            string fname, lnam, idn, facul, deper, dbb, fnam, man, presadd, permadd;
			double cgp;
			allfile >> fname ;
			//cout << endl;//>> lnam >> idn >> facul >> deper >> dbb >> cgp >> fnam >> man >> presadd >> permadd;
			getline(allfile,fname);
			allfile >> lnam;
			//cout << endl;
			getline(allfile,lnam);
			allfile >> idn;
			getline(allfile,idn);
			allfile >> facul;
			getline(allfile,facul);
			allfile >> deper;
			getline(allfile,deper);
			allfile >> dbb;
			getline(allfile,dbb);
			allfile >> cgp;
			//getline(cin,cgp);
			allfile >> fnam;
			getline(allfile,fnam);
			allfile >> man;
			getline(allfile,man);
			allfile >> presadd;
			getline(allfile,presadd);
			allfile >> permadd;
			getline(allfile,permadd);


			StudentAccount temp;
			temp.SetFN(fname);
            temp.SetLN(lnam);
            temp.SetSID(idn);
            temp.SetFaculty(facul);
            temp.SetDepartment(deper);
            temp.SetDateBirth(dbb);
            temp.Setcgpa(cgp);
            temp.SetFan(fnam);
            temp.SetMon(man);
            temp.SetPradd(presadd);
            temp.SetPeradd(permadd);        //Problem here.file is not reading after programme close.But in 1st time it works properly.
			SF.push_back(temp);
			pot++;
		}
	}
	else exit(1);
	for (int a = 0; a < SF.size(); a++)
	{
		SF[a].ShowData4();
		cout << endl;
	}
	allfile.close();
}




void StudentDB :: PrintAllStudentInformation ()
{
    for(int i=0;i<BAA.size();i++)
	{
		BAA[i].ShowData();
	}
}

void StudentDB :: AddBook()
{

    string bn, wn, py;
    cout << "Put Book Name: ";
    cin.ignore();
    getline(cin,bn);
    cout << "Put Writer's Name: ";
    cin.ignore();
    getline(cin,wn);
    cout << "Put Publishing Year: ";
    cin.ignore();
    getline(cin,py);
    StudentAccount temp;
    temp.SetBN(bn);
    temp.SetWN(wn);
    temp.SetPY(py);
    BOA.push_back(temp);

    fstream stu;
    stu.open("Book.txt",ios::out|ios::app);

    stu<<BOA[bot].GetBN()<< "\t"<< BOA[bot].GetWN()<<"\t"<< BOA[bot].GetPY()<<endl;

    bot++;
    stu.close();

}

void  StudentDB :: PrintBookInformation ()
{
    string bon;
	cout << "Put book name: ";
	cin.ignore();
	getline(cin,bon);
	int b = SearchBook(bon);
    if (b > -1)
    {
        BOA[b].ShowData2();
    }
	else
    cout<<"wrong input"<<endl;
}

void StudentDB :: PrintAllBookInformation ()
{
	for(int i=0;i<BOA.size();i++)
	{
		BOA[i].ShowData2();
	}

}

void StudentDB :: DeleteBook ()
{
	string bn;
    cout << "Put book name: ";
    cin.ignore();
    getline(cin,bn);
    int a = SearchBook(bn);
    if (a > -1)
    {
		BOA.erase(BOA.begin()+a);
		cout << "Deleted" << endl;

    }
    else
	cout << "Wrong Input" << endl;
}


int StudentDB :: SearchBook (string bn) {
    for (int i = 0; i < BOA.size(); i++)
    {
        if (BOA[i].GetBN() == bn) return i;
    }
    return -1;
}

void StudentDB :: ReturnBook (){
    string n;
    cout << "Put your id number: ";
    cin.ignore();
    getline(cin,n);
    int a = Search(n);
    if (a > -1)
    {
        string b;
        cout << "Put the book name you want to return: ";
        //cin.ignore();
        //getline(cin,b);
        cin >> b;

        int c = pending_book(b);
        int p = Past_Book(b);
        if (c > -1 && p > -1)
        {
            BOA.push_back(DBA[c]);
            string r = " \0 ";
            BAA[a].SetBN(r);
            DBA.erase(DBA.begin()+c);
            cout << "The book is successfully returned" << endl;
        }
        else
        cout << "Invalid Book" << endl;

    }
}

void StudentDB :: IssueBook (){
    string n;
    cout << "Put your id number: ";
    cin.ignore();
    getline(cin,n);
    int a = Search(n);
    if (a > -1) {
        string b;
        cout << "Put the book name which u want: ";
        cin >> b;
        int c = SearchBook(b);
            if (c > -1)
            {
                BAA.push_back(BOA[c]);
                DBA.push_back(BOA[c]);
                BOA.erase(BOA.begin()+c);
                BAA[a].SetBN(b);
                cout << BAA[a].GetBN() << endl;
                BAA[a].ShowData();
                BAA[a].ShowData3();
               // DBA.push_back(BOA[a]);
               // BOA.erase(BOA.begin()+c);
            }

            else
                cout << "Invalid Book" << c << endl;
        }
    else
        cout << "Invalid user" << a << endl;
  }

void StudentDB :: ListofPending_Book()
{
	for (int i = 0; i < DBA.size(); i++)
	{
	        DBA[i].ShowData2();
            cout << endl;
	}

}



int StudentDB :: Past_Book(string bn)
{
	for (int i = 0; i < DBA.size(); i++)
	{
	    if (BAA[i].GetBN() == bn)
	    {
	        return i;
	        //DBA[i].ShowData2();
            //cout << endl;
	    }
	    else
	    return -1;
	    //cout << "wrong Input" << endl;

	}

}


int StudentDB :: pending_book (string bn) {
    for (int i = 0; i < BAA.size(); i++)
    {
        if (BAA[i].GetBN() == bn) return i;
    }
    return -1;
}

void StudentDB :: Handler ()
{
    system("COLOR 4");
    char choice = '\0';

    while (choice != 'n' && choice != 'N') {
        int select;
        cout << endl << endl;
        cout << "Select your choice: " << endl;
        cout << "Press 1: Student Section" << endl;
        cout << "Press 2: Library Section" << endl;
        cout<<"==================================================================" << endl;
        cin >> select;
        switch (select) {
        case 1:
            Handler2();
            break;
        case 2:
            Handler3();
            break;
        default:
            cerr << "Wrong choice" << endl;
            break;
        }
        cout << "Press n to quit: ";
        cin >> choice;
    }
}


void StudentDB :: Handler2 ()
{
    char choice = '\0';

    while (choice != 'n' && choice != 'N') {
        int select;
        cout << "Select your choice: " << endl;
        cout << "Press 1: Add Student" << endl;
        cout << "Press 2: Delete Student" << endl;
        cout << "Press 3: Edit Student Information" << endl;
        cout << "Press 4: Print Student Information" << endl;
        cout << "Press 5: Print All Student Information" << endl;
        cout << "Press 6: Saving Data of All Student" << endl;
        cout << "Press 7: Go Back to Main Menu" << endl;
        cout <<"==================================================================" << endl;
        cin >> select;
        switch (select) {
        case 1:
            AddStudent();
            break;
        case 2:
            DeleteStudent();
            break;
        case 3:
            EditStudentInformation();
            break;
        case 4:
            PrintStudentInformation();
            break;
        case 5:
            PrintAllStudentInformation();
            break;
        case 6:
            Data_PrintAllStudentInformation();
            break;
        case 7:
            Handler();
            break;
        default:
            cerr << "Wrong choice" << endl;
            break;
        }
        cout << "Press n to quit: ";
        cin >> choice;
    }
}

void StudentDB :: Handler3 () {
    char choice = '\0';

    while (choice != 'n' && choice != 'N') {
        int select;
        cout << "Select your choice: " << endl;
        cout << "Press 1: Add Book" << endl;
        cout << "Press 2: Print Book Information" << endl;
        cout << "Press 3: Print All Book Information" << endl;
        cout << "Press 4: Delete Book" << endl;
        cout << "Press 5: Issue Book" << endl;
        cout << "Press 6: Return Book" << endl;
        cout << "Press 7: List of Pending Books" << endl;
        cout << "Press 8: Go Back to Main Menu" << endl;
        cout<<"==================================================================" << endl;
        cin >> select;
        switch (select) {
        case 1:
            AddBook();
            break;
        case 2:
            PrintBookInformation();
            break;
        case 3:
            PrintAllBookInformation();
            break;
        case 4:
            DeleteBook();
            break;
        case 5:
            IssueBook();
            break;
        case 6:
            ReturnBook();
            break;
        case 7:
            ListofPending_Book();
            break;
        case 8:
            Handler();
            break;
        default:
            cerr << "Wrong choice" << endl;
            break;
        }
        cout << "Press n to quit: ";
        cin >> choice;
    }
}
