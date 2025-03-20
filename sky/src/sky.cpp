#include<iostream>
#include"sky.hpp"
#include"star.hpp"
#include<raylib.h>
#include<vector>
void  sky::set_stars(int count)
{
    if (count>=0)
    {
        stars=count;
    }
    

}
int  sky::get_stars() const
{
    return stars;
}




