#include <iostream>
using namespace std;
#include <math.h>



string dayOfTheWeek(int day, int month, int year) 
{
    // Write your code here.
    string weekDay[7] = {"SATURDAY","SUNDAY","MONDAY","TUESDAY","WEDNESDAY","THURSDAY","FRIDAY",}; 
    if(month<3){
        month = month + 12;
        year --; 
    }
    
    int century = year /100;
    year = year%100;

    
    int w = (day +(5*century)+ year) + ((13*(month + 1))/5) + (year/4) + (century/4) ;
    w = w%7;
    return weekDay[w]; 
    
}

int main(){

    
    cout<<dayOfTheWeek(28,8,2020)<<endl;
}