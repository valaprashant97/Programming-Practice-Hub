// WAP to calculate an angle between hour and minute hand. (Hours and minutes should be
// taken from user)

#include <stdio.h>
void main()
{
    int hours, minutes;

    printf("Enter a Hours (1-12):");
    scanf("d", &hours);

    printf("Enter a Minutes (0-59):");
    scanf("d", &hours);

    float hours_angel, minutes_angel, angle;

    hours_angel = (hours % 12) * 30 + minutes * 0.5;
    minutes_angel = minutes * 6;
    angle = hours_angel - minutes_angel;

    if (angle < 0)
    {
        angle = -angle;
    }
    if (angle > 180)
    {
        angle = 360 - angle;
    }
    printf("Angle between clock hands = %f degrees", angle);
}