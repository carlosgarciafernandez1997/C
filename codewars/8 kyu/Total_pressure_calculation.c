/*
Given the molecular mass of two molecules M1 and M2, their masses present m1 and m2 in a vessel
of volume V at a specific temperature T, find the total pressure Ptotal exerted by the molecules.
Formula to calculate the pressure is:

Ptotal=(m1/M1+m2/M2)RT/
​
Input
Six values :

M1, M2 : molar masses of both gases, in grams (g)
m1, and m2: present mass of both gases, in g⋅mol^−1
V: volume of the vessel, in dm^3
T: temperature, in °C

Output
One value: Ptotal, in units of atmatmatm.

double total_pressure(double molar_mass1, double molar_mass2, double given_mass1, double given_mass2, double v, double t) {

}
*/
double total_pressure(double molar_mass1, double molar_mass2, double given_mass1, double given_mass2, double v, double t) {
  return ((given_mass1/molar_mass1)+(given_mass2/molar_mass2))*0.082*(t+273.15)/v;
}