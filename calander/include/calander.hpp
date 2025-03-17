#include<iostream>
#include<string>
using namespace std;
class calander
{
private:
int list_event;


public:
  string add_event(string name1);
  void refresh();
  void set_list( int l1);
  int get_list() const;
  

};