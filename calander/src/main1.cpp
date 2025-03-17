#include<iostream>
#include<ctime>
#include<fstream>
#include"event.hpp"
#include"calander.hpp"
#include<string>
#include<vector>
using namespace std;

long long unsigned int  time_handel(  long long unsigned int delta)
{
delta=delta*60*24*60;
time_t set=time(nullptr);
delta=set+delta;
return delta;


}


void write_file(const string filename,string name,long long unsigned int delta , int start,int end)
{   
 
    fstream file(filename,ios::app);
    if (!file)
    {
        cerr<<"file could not be opend"<<endl;
    }
    
    file<<name<<" "<<start<<" "<<end<<" "<< delta<<endl;
    file.close(); 
}





int main()
{

    cout<<"the data are based on 1st of farvardin 1404"<<endl;
    const string file_name="data.txt";
    calander object1;
    event object2;
    while(true)
    {
        object1.refresh();
    int counter=0;
string main_name;
cout<<"the name of the event is "<<endl;
cin>>main_name;
object2.set_name(main_name);
cout<<"enter the month (in number format it should be the end month )"<<endl;
int main_month;
cin>>main_month;
cout<<"the month could accecpt the negative formant cause seeing function of destructor"<<endl;

main_month=main_month-1;
int main_start;
cout<<"the start time (only day in a month)"<<endl;
cin>>main_start;
if (main_start<=0)
{
    cerr<<"the start is not vaild"<<endl;
    return 0;
}
object2.set_start(main_start);
int main_end;
cout<<"the end time (only day in month is matter)"<<endl;
cin>>main_end;
        if ((main_end<=0) || (main_end<main_start))
{
    cerr<<"the end is not vaild"<<endl;
    return 0;
}
object2.set_end(main_end);
 long  long unsigned int delta=0;
delta=(main_month*30*24*60*60)+(main_end*24*60*60);
delta=delta+1742515200;
//cout<<delta;
write_file(file_name,main_name,delta,main_start,main_end);
char check;
cout<<"for continue enter y"<<endl;
cin>>check;
if (check!='y')
{
    return 0;
}


    }



}