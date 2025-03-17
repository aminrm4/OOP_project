#include<string>
#include<iostream>
using namespace std;

class event
{
private:
string name;
int start_time;
int end_time;


public:
~event();
void set_name(string name1);
void set_start(int start1);
void set_end(int end1);
string get_name() const;
int get_start() const;
int get_end() const;

};