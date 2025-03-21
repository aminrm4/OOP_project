#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include <string>
using namespace std;
class character1
{
private:
    string main_name;
    int health;
    int power;
    int count_skills;

public:
    bool set_main_name(string name);
    bool set_health(int hel);
    bool set_power(int pow);
    bool set_count_skill(int count);
    string get_main_name() const;
    int get_power() const;
    int get_health() const;
    int get_count_skills() const;
    character1(string name1, int health1, int power1, int count_skills1, bool &status);
};

#endif
