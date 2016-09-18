#include <iostream>
#include <cmath>
using namespace std;

int main()
{
   double x,y;

cout << "HW#1 Compute values of the formula"
        << endl << endl;
cout << "Value of X   \tValue of Y   \t Status Y"
        << endl << endl;
   for (x=-4; x<=3; x=x+0.5)
{
    y = (x*x*x*x - x*x*x - 7*x*x + x + 6) /
        (fabs(x-3) + sqrt(5-x)) ;

    cout << "X= " << x << "\t\t" << "Y= " << y;

    if (y==0)
        cout <<"\t\t Y IS ZERO"<<endl;
    if (y>0)
        cout <<"   \t Y IS POSITIVE"<<endl;
    if (y<0)
        cout <<"\t Y IS NEGATIVE"<<endl;

   cout << endl;
}
    cout << endl <<"The table is finished !" << endl;

    int zero, positive, negative;

    if (y>0){
        cout<<"Y is positive "<<
        positive = positive + 1;
    }


    return 0;
}
