#include "util.h"
#include<stdio.h>
#include<math.h>

double degreesToRadians(double degree)//to convert degrees to radians

{
    return degree*3.14/180;
}

double getAirDistance(double originLatitude,double originlongitude,
double destinationLatitude,double destinationLongitude)
{
    double earthR=6371.0;//km

    originLatitude = degreesToRadians(originLatitude);
    originlongitude = degreesToRadians(originlongitude);
    destinationLatitude = degreesToRadians(destinationLatitude);
    destinationLongitude = degreesToRadians(destinationLongitude);

 //dl=deltalongitude.

    double dl=destinationLongitude-originlongitude;

    double distance=acos(sin(originLatitude)*sin(destinationLatitude)+cos(originLatitude)*cos(destinationLatitude)*cos(dl))*earthR;

    return distance;
}
//now going for time wala function

double lorentzTimeDilation(double t,double percentC)
{
    double speedOfLight=299792458.0;//  (m/s)
    double fracC=percentC/100.0;  // to convert it into fraction.
    double dilatedTime=t/sqrt(1-pow(fracC,2)/pow(speedOfLight,2));


    return dilatedTime;

}