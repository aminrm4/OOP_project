#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "character1.hpp"
#include "game.hpp"
using namespace std;
bool character1::set_main_name(string name)
{
    main_name = name;
    return true;
}
bool character1::set_health(int hel)
{
    if (hel < 0)
    {
        return false;
    }

    else
    {
        health = hel;
        return true;
    }
}
bool character1::set_power(int pow)
{
    if (pow < 0)
    {
        return false;
    }
    else
    {
        power = pow;
        return true;
    }
}
bool character1::set_count_skill(int count)
{
    if (count < 0)
    {
        return false;
    }
    else
    {
        count_skills = count;

        return true;
    }
}
string character1::get_main_name() const
{
    return main_name;
}
int character1::get_power() const
{
    return power;
}
int character1::get_health() const
{
    return health;
}
int character1::get_count_skills() const
{
    return count_skills;
}
character1::character1(string name1, int health1, int power1, int count_skills1, bool &status)
{
    set_main_name(name1);
    status = set_health(health1);
    status = set_power(power1);
    status = set_count_skill(count_skills1);
}
