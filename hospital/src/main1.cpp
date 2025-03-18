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
    int counter=0;
    while(true)
    {
        bool correct=true;

        object1.refresh();
   
string main_name;
int main_month;
int main_start;
int main_end;

cout<<"the name of the event is "<<endl;
cin>>main_name;
cout<<"enter the month (in number format it should be the end month )"<<endl;
cout<<"the month could accecpt the negative formant cause seeing function of destructor"<<endl;
cin>>main_month;
if (main_month>12)
{
    cerr<<"the month is not vaild"<<endl;
    return 0;
}

cout<<"the start time (only day in a month)"<<endl;
cin>>main_start;
cout<<"the end time (only day in a month )"<<endl;
cin>>main_end;
main_month=main_month-1;
if ((main_start<=0 )||( main_start>30))
{
    cerr<<"the start is not vaild"<<endl;
    return 0;
}
if ((main_end<=0) || (main_end >30))
{
    cerr<<"the end time is not vaild"<<endl;
    return 0;
}
if (object1.add_event(file_name,main_start,main_end))
{
    correct=false;
object2.set_name(main_name);
object2.set_start(main_start);
object2.set_end(main_end);
 long  long unsigned int delta=0;
delta=(main_month*30*24*60*60)+(main_end*24*60*60);
delta=delta+1742515200;
write_file(file_name,main_name,delta,main_start,main_end);
counter++;
object1.set_list(counter);
cout<<"the total new enent are "<<" "<<object1.get_list()<<endl;
    }
    
   if (correct)
    {
        
        cout<<"the event "<<main_name<<" "<<"has conflict cant add that"<<endl;

    }
    char check;
    cout<<"for continue enter y"<<endl;
    cin>>check;
    if (check!='y')
    {
        return 0;
    }

    
}

}
