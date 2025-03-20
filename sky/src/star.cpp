#include"star.hpp"
#include"sky.hpp"
#include<raylib.h>
#include<vector>
using namespace std;
void  star::set_pos_x(int x)
{
    pos_x=x;
}
void star:: set_pos_y(int y)
{
    pos_y=y;
}
int  star::get_pos_x()const
{
return pos_x;
}
int star:: get_pos_y()const
{
    return pos_y;
}

star::star(int pos1,int pos2,int bright)
{
if ((pos1<=800) && (pos1>0))
{
    set_pos_x(pos1);
}
else
{
    cerr<<"the data wich you have enterd is not vaild as a x coordinants"<<endl;
}
if ((pos2<=800) && (pos2>0))
{
    set_pos_y(pos2);

}
else
{
    cerr<<"the data wich you have enterd is not vaild as a y coordinants"<<endl;
}

if ((bright>0)&&(bright<1200))
    {
        set_brightness(bright);
    }
}
void  star::set_brightness(int bri)
{
    brightness=bri;
}
int  star::get_brightness() const
{
return brightness;
}
star::star()
{

}
