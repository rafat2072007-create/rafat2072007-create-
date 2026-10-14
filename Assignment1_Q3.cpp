#include <iostream>

using namespace std;

int main()
{
    int salary,gift,absence,deduc,netsalary,total_discount;
    cout<<"Enter the salary : ";
    cin>>salary;
    cout<<"Enter the reward amount : ";
    cin>>gift;
    cout<<"Enter the days of absence : ";
    cin>>absence;
    cout<<"Enter the discount amount for each day : ";
    cin>>deduc;
    total_discount=absence*deduc;
    netsalary=(salary+gift)-total_discount;
    cout<<"The net salary : "<<netsalary;






























    return 0;
}
