#include <bits/stdc++.h>

using namespace std;

class Student
{
    public:
        string name;
        int roll;
        int marks;
    Student(string name, int roll,int marks)
    {
        this->marks=marks;
        this->roll=roll;
        this->name=name;
    }
};
class cmp
{
    public:
    bool operator()(Student a,Student b)
    {
        if(a.marks==b.marks) 
            return a.roll > b.roll;
        else 
            return a.marks < b.marks;
    } 
};

int main()
{
    priority_queue<Student, vector<Student>, cmp>bd;
    int k;
    cin >>k;
    
    for(int i=0;i<k;i++)
    {
        string name;
        int roll, marks;
        cin>>name>>roll>>marks;
        Student obj(name,roll,marks);
        bd.push(obj);
    }
    int p;
    cin>>p;
    while (p--)
    {
        int val;
        cin>>val;
        if(val==0)
        {
            string name;
            int roll, marks;
            cin>>name>>roll>>marks;
            Student obj(name, roll, marks);
            bd.push(obj);
            cout<<bd.top().name<<" "<<bd.top().roll <<" "<<bd.top().marks<<endl;
        }
        else if(val==1)
        {
            if(!bd.empty())
            {
               cout<<bd.top().name<<" "<<bd.top().roll<<" "<<bd.top().marks<<endl;
            }
            else
            {
                cout<<"Empty"<<endl;
            }
        }
        else if(val==2)
        {
            if(!bd.empty())
            {
                bd.pop();
                if(!bd.empty())
                {
                    cout<<bd.top().name<<" "<<bd.top().roll<<" "<<bd.top().marks<<endl;
                }
                else
                {
                    cout<<"Empty"<<endl;
                }
            }
            else
                {
                    cout<<"Empty"<<endl;
                }
           
        }
    }
    return 0;
}