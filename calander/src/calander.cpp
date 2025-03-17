#include<string>
#include<iostream>
#include<ctime>
#include<fstream>
#include<sstream>
#include"calander.hpp"
#include"event.hpp"
string  calander:: add_event(string name1)
{
return "dfda";
}
void  calander::refresh( )
{
    time_t set=time(nullptr);
 ifstream file1("data.txt",ios::in);
 ofstream file2("main.txt",ios::app);
 if (!file1)
 {
    cerr<<"file cant be opedn"<<endl;
 }
 string reader;
 while(getline(file1,reader))
 {
    
    string name;
    int start;
    int end;
     long long unsigned int del;
 istringstream iss(reader);
 iss>>name>>start>>end>>del;
 //cout<<name<<" " <<start<< " " <<end<< " "<<del<< " " <<endl;
 //cout<<set;
 if (!(set>del))
 {
   
    file2<<name<<" "<<start<<" "<<end<< " " <<del<<endl;
 }
 else
 {
    event ob;
    ob.set_name(name);
 }
 
 
}

file1.close();
file2.close();
remove("data.txt");
rename("main.txt","data.txt");
}
void  calander::set_list( int l1)
{
    list_event=l1;
}
int  calander::get_list() const
{
    return list_event;
}

