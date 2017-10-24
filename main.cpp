#include <iostream>
#include <math.h>
using namespace std;
int main() {
    double x,y,z;
    cout << "Введіть x та y:";
    cin >> x >> y;
    z = 3*sqrt(x+pow(y,3))/pow(y,1/3)+(3/(4*4)*cos(y));
    cout <<"Відповідь:" << z<<"\n";
    return 0;

}
