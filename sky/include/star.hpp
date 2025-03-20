#ifndef     STAR_HPP
#define STAR_HPP
#include<iostream>
#include<string>
using namespace std;
class star
{
private:
int pos_x;
int pos_y;
int brightness;


public:
void set_pos_x(int x);
void set_pos_y(int y);
int get_pos_x()const;
int get_pos_y()const;
void set_brightness(int bri);
int get_brightness() const;
star();
star( int pos1,int pos2,int bright);


};





#endif