#include<iostream>
#include"event.hpp"
#include "calander.hpp"
using namespace std;
 event::~event()
{
    cout<<get_name()<< " "<<" has been deleted"<<endl;
}
void  event::set_name(string name1)
{
name=name1;
}
void event:: set_start(int start1)
{
    start_time=start1;
}
void  event:: set_end(int end1)
{
    end_time=end1;
}
string  event::get_name() const
{
    return name;
}
int event:: get_start() const
{
    return start_time;
}
int event:: get_end() const
{
    return end_time;
}
