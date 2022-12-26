/*
You are given the length and width of a 4-sided polygon. The polygon can either be a rectangle or a square.
If it is a square, return its area. If it is a rectangle, return its perimeter.

int area_or_perimeter(int l , int w) {
  
}
*/
int area_or_perimeter(int l , int w) {
return l*w*(l==w)+2*(l+w)*(l!=w);
}