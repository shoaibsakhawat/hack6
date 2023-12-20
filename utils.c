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