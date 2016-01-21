#include<iostream>
#include<string>
using namespace std;
using std::string;

class employee
{
private:
    string name; //3 private datamembers
    double salary;
    int year;
    
public:
    char ID; //4 public datamembers
    string getname()
    { return name; }
    double getsalary()
    { return salary; }
    int getyear()
    {return year;  }
    
    void putname(string n)
    {  name = n;  }
    void putsalary(double s)
    { salary = s; }
    void putyear(int y)
    { year = y;  }
    
};

class manager : public employee
{
public:
    string staff[4];
};



