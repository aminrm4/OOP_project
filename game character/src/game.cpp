#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include "character1.hpp"
#include "game.hpp"
using namespace std;
void game::set_name_skil(string name)
{
    name_skill = name;
}
bool game::set_level(int lev)
{
    if (lev < 0)
    {
        return false;
    }

    else
    {
        level = lev;
        return true;
    }
}
string game::get_name() const
{
    return name_skill;
}
int game::get_level() const
{
    return level;
}
game::game(string name2, int level2, bool &status)
{
    status = set_level(level2);
    set_name_skil(name2);
}
