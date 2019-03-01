#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>


using namespace std;

//Write prototype of  sg() here.
int sg(double x,double y){
    max(x,y),min(x,y);
    if(x<y){
        max(x,y) = y;
    }else min(x,y) = x;
}

int main(){
    cout << sg(-2.5,1.1) << "\n";
    cout << sg(1,10000) << "\n";
    cout << sg(8.5,2.4) << "\n";
    cout << sg(0.1,0.0001) << "\n";
    cout << sg(10,0.007) << "\n";
    cout << sg(1,-2) << "\n";
    cout << sg(15,100) << "\n";
    cout << sg(123,5432) << "\n";
}
int sg(double x,double y){
    if(x && y <= 0){
        sg(x,y) = 0;
    }if(max(x,y)/min(x,y) <= 10){
        sg(x,y) = sqrt(x*y);
    }else sg(x,y) = sg(x,sqrt(x*y))+sg(y,sqrt(x*y));
    return 0;

}
//Write function definition of  sg() here.
