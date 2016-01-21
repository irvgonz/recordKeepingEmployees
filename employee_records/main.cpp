#include<iostream>
#include<string>
#include "class.h"
#include<fstream>

using namespace std;
using std::string;

int main()
{

    
    char data[100];
    ofstream myoutfile;
    myoutfile.open( "mat272.txt"); //can change this to any file
    
    string empname, mgname;
    double empsal, mgsal;
    int empyear;
    
    employee EMPLOY1;
    manager MANAGE1;
    
    
    
    cout<<"Enter employee's name: "<<endl;
    cin>>empname;
    cin.getline(data, 100);
    EMPLOY1.putname(empname);
    MANAGE1.staff[0]=empname;
    
    
    cout<<"Enter employee's salary: "<<endl;
    cin>>empsal;
    cin >> data;
    EMPLOY1.putsalary(empsal);
    myoutfile << data <<endl;

    cout<<"Enter employee's hire year: "<<endl;
    cin>>empyear;
    cin >> data;
    EMPLOY1.putyear(empyear);
    myoutfile << data <<endl;
    
    cout<<"Enter manager's name: "<<endl;
    cin>>mgname;
    cin >> data;
    myoutfile << data <<endl;
    
    cout<<"Enter manager's salary: "<<endl;
    cin>>mgsal;
    cin >> data;
    MANAGE1.putname(mgname); 
    MANAGE1.putsalary(mgsal);
    MANAGE1.ID = 'X';
    myoutfile << data <<endl;
    myoutfile.close();
    
    cout<<"\nEmployee: "<<EMPLOY1.getname()<<"\nSalary: "<<EMPLOY1.getsalary()
    <<"\nYear: "<<EMPLOY1.getyear() << "\n"<<endl;
    
    cout<<MANAGE1.staff[0]<<" is on staff of "<<MANAGE1.getname()<<endl;
    cout<<"Manager's salary is "<<MANAGE1.getsalary()<<endl;
    
   
    
    ifstream myinfile;
    myinfile.open("mat272.txt");
    
cout << "file contains "<< endl;
    myinfile >> data;
    cout << data << endl;
    
    myinfile >> data;
    cout << data << endl;

    myinfile.close();
    
    
    
    return 0;
    
}