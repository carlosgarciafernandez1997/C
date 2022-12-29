/*
This series of katas will introduce you to basics of doing geometry with computers.

Point objects have x and y attributes (X and Y in C#) attributes.

Write a function calculating distance between Point a and Point b.

Tests round answers to 6 decimal places.

typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {

    //  <----  hajime!

}
*/
#include <math.h>
typedef struct Point {
    double x;
    double y;
} point;

double distance_between_points(point a, point b) {
  return pow(pow((a.x-b.x),2)+pow((a.y-b.y),2),0.5);
}