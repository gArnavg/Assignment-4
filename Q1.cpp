/*WAP to count the minimum number of notes in a given amount using 
the switch statement.
Input 1: 510
Output1 : notes of “500” = 1 and notes of “10” */

#include<iostream>
using namespace std;
int main()
{
int n;

cout<<"Enter the amount ";
cin>>n;

int n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0,n200=0,n500=0;

switch(1)
{
    case 1:
        n500 = n/500;
        n-=(500*n500);
    case 2:
        n200 = n/200;
        n-=(200*n200);
    case 3:
        n100 = n/100;
        n-=(100*n100);
    case 4:
        n50 = n/50;
        n-=(50*n50);
    case 5:
        n20 = n/20;
        n-=(20*n20);
    case 6:
        n10 = n/10;
        n-=(10*n10);
    case 7:
        n = n/5;
        n-=(5*n5);
    case 8:
        n2 = n/2;
        n-=(2*n2);
    case 9:
        n1 = n/1;
        n-=(1*n1);
}
int total=n1+n2+n5+n10+n20+n50+n100+n200+n500;
cout<<"Total ";

return 0;
}