#include <iostream>
#include <math.h>
using namespace std;

int main()

{
    double xi, x, a, b, c, delta;
    cout<< "Podaj a, b, c " <<endl;
    cin >>a>>b>>c;
    if (a==0)
        cout<<"to nie jest równanie kwadratowe"<< endl;

    else  {
        delta=b*b-4*a*c;
        if (delta<0) cout << "równie nie ma pierwiatków";
        else{
            if (delta==0){
                x=-b/(2*a);
                cout<<"x= " <<x<< endl;}
            else{
                    x=(-b-sqrt(delta))/(2*a);
                    xi=(-b+sqrt(delta))/(2*a);
                    cout<<"x1 wynosi " << x << "x2 wynosi " <<xi<< endl;

            }

        }
    }

    return 0;
}
