#ifndef GAME_HPP
#define GAME_HPP
#include <string>
using namespace std;
class game
{
private:
    string name_skill;
    int level;

public:
    void set_name_skil(string name);
    bool set_level(int lev);
    string get_name() const;
    int get_level() const;
    game(string name2, int level2, bool &status);
};

#endif