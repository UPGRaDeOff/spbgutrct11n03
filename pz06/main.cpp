#include <iostream>
#include "students.h"
using namespace std;
int main()
{
        Students student;
        string name;
        string last_name;
        cout << "Name: ";
        getline(cin,name);
        cout << "Last name: ";
        getline(cin,last_name);
        student.set_name(name);
        student.set_last_name(last_name);
        int scores[5];
        int sum=0;
        for(int i=0; i<5; i++) 
        {
                cout <<"Score " << i+1 << ": ";
                cin >> scores[i];
                sum+=scores[i];
        }
        student.set_scores(scores);
        float average_ball=sum/5.0;
        student.set_average_ball(average_ball);
        cout << "Average ball for " << student.get_name() << " " << student.get_last_name() << " is " << student.get_average_ball() << std::endl;
        return 0;
}