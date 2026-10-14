#include <iostream>

using namespace std;

int main()
{
 int allseconds,all_minutes,hours,minutes,seconds;
 cout<<"Enter all minutes : ";
  cin>>allseconds;
  all_minutes=allseconds/60;
  hours=all_minutes/60;
  minutes=all_minutes%60;
  seconds=allseconds%60;
  cout<<"Hours : "<<hours<<endl;
  cout<<"Minutes : "<<minutes<<endl;
  cout<<"Seconds : "<<seconds;































    return 0;
}
