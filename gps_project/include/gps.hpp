#ifndef GPS_HPP
#define GPS_HPP
#include<fstream>
class gps
{
public:
gps( long int latitude1,long int longitude2);
void set_position(long int pos1,long int pos2);
long int get_position1() const;
long int get_position2() const;
~gps();
gps();


private:
long int latitude;
long int longitude;


};
#endif