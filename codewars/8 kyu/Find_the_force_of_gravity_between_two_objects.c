/*
Your job is to find the gravitational force between two spherical objects (obj1 , obj2).

input
Two arrays are given :

arr_val (value array), consists of 3 elements
1st element : mass of obj 1
2nd element : mass of obj 2
3rd element : distance between their centers
arr_unit (unit array), consists of 3 elements
1st element : unit for mass of obj 1
2nd element : unit for mass of obj 2
3rd element : unit for distance between their centers
mass units are :

kilogram (kg)
gram (g)
milligram (mg)
microgram (μg)
pound (lb)
distance units are :

meter (m)
centimeter (cm)
millimeter (mm)
micrometer (μm)
feet (ft)
Note
value of G = 6.67 × 10−11 N⋅kg−2⋅m2

1 ft = 0.3048 m

1 lb = 0.453592 kg

return value must be Newton for force (obviously)

μ copy this from here to use it in your solution

double solution(const double* values, const char** units) {
  return 0;
}
*/
double solution(const double* values, const char** units) {
  double m1=values[0],m2=values[1],d=values[2];
  m1=m1*((units[0][0]=='k')+(units[0][0]=='g')/1E3+(units[0][0]=='m')/1E6+(units[0][0]=='l')* 0.453592);
  m2=m2*((units[1][0]=='k')+(units[1][0]=='g')/1E3+(units[1][0]=='m')/1E6+(units[1][0]=='l')* 0.453592);
  d=d*((units[2][0]=='m' && units[2][1]=='\0')+(units[2][0]=='c')/1E2+(units[2][0]=='m' && units[2][1]=='m')/1E3+(units[2][0]=='f')* 0.3048);
  if(m1==0){
    m1=values[0]/1E9;
  }
  if(m2==0){
    m2=values[1]/1E9;
  }
  if(d==0){
    d=values[2]/1E6;
  }
  return 6.67E-11*m1*m2/(d*d);
}