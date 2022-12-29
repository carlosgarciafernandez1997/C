/*
This kata is about multiplying a given number by eight if it is an even number and by nine otherwise.

int simple_multiplication(int number) {
    
}
*/
int simple_multiplication(int number) {
    return (number%2==0)*8*number+(number%2==1)*9*number;
}