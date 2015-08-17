#include <iostream>
#include <string>
using namespace std;
class Student //base class
{
    public:
    Student(int n,string name,char s)//constructor
    {
        num = n;
	stuName = name;
	sex = s;
    }
    ~Student(){}//base class destructor
    protected:
    int num;
    string stuName;
    char sex;

};

class Student1 : public Student 
{
	public:
	Student1(int n,string name,char s,int a,string ad):Student(n,name,s)
	{
		age=a;
		addr=ad;
	}

	void show()
	{
		cout << "num:"	<<num<<endl;;
		cout << "name:" <<stuName<<endl;
		cout<< "sex:" <<sex<<endl;
		cout<<"age:"<<age<<endl;
		cout<<"address:"<<addr<<endl;
	}

	~Student1(){}
	private:
	int age;
	string addr;

};

int main()
{
	Student1 stud1(10000,"Wang-Wu","F",18,"Henan Nanyang");
	Student2 stud2(10002,"Zhang-San","M",22,"Guangdong Guangzhou");
	stud1.show();
	stud2.show();
	return 0;
}
