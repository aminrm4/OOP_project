
#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <iomanip>
#include "character1.hpp"
#include "game.hpp"
using namespace std;
void write_to_file(const string filename, string namee, int health, int pow2, int level, string name_skill)
{
    fstream file(filename, ios::app);
    if (!file)
    {
        cerr << "file could not be opend" << endl;
    }
    file << namee << "  " << "power" << "   " << pow2 << "   " << " health" << "    " << health << "     " << "level" << "    " << level << "  " << "name_skill" << "     " << name_skill << endl;

    file.close();
}

int main()
{

    const string filename = "game.txt";
    while (true)
    {
        cout << "welcome to the game" << endl;
        cout << "enter your specefic character name " << endl;
        string yname;
        cin >> yname;
        cout << "enter the number of skills wich you want to add " << endl;
        int counter;
        cin >> counter;
        bool status;
        bool status1;
        character1 object2(yname, 100, 1000, counter, status);
        if (status)
        {

            for (size_t i = 0; i < counter; i++)
            {
                string name_skill;
                cout << "enter the name of skill" << endl;
                cin >> name_skill;
                cout << "enter the level of your skill" << endl;
                int level;
                cin >> level;
                game object1(name_skill, level, status1);
                if (status1)
                {

                    write_to_file(filename, object2.get_main_name(), object2.get_health(), object2.get_power(), object1.get_level(), object1.get_name());
                }
                else
                {
                    cerr<<"wrong data input in level and name_skill"<<endl;
                }
                
            }
        }
        else
        {
            cerr << "wrong data input in data" << endl;
        }
    }
}
