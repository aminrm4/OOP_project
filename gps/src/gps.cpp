#include<iostream>
#include<fstream>
#include"gps.hpp"

using namespace std;
bool correct=true;

 gps:: gps( long int latitude1,long int longitude2)
 {
  correct=true;
    if (!((latitude1<=90) && (latitude1>=-90)))
    {
       
        correct=false;
        cerr<<"the latatiude is not in a acceptable range"<<endl;
    }

if (!((longitude2<=180)&& (longitude2>=-180)))
{
    correct=false;
    cerr<<"the longitude is not in a acceptable reange"<<endl;
}


if (correct)
{
    latitude=latitude1;
    longitude=longitude2;
    correct=true;
}

}
gps::gps()
{

}

void  gps::set_position(long int pos1,long int pos2)
{
    latitude=pos1;
    longitude=pos2;
}
long int  gps::get_position1() const
{
return latitude;
}
long int gps:: get_position2() const
{
    return longitude;
}
 gps::~gps()
 {
   if (correct)
   {
   
   
   

    
   fstream file("logs.txt",ios::app);
   if (!file)
   {
    cerr<<"file could not be opend"<<endl;
   }
file<<latitude<<" "<<longitude<<endl;
file.close();
    }
}
 
 
