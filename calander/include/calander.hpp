#include<iostream>
#include<string>
using namespace std;
class calander
{
private:
int list_event;
string deleted_name;


public:
  bool add_event(const string filename,int new_s,int new_end);
  void refresh();
  void set_list( int l1);
  int get_list() const;
  

};