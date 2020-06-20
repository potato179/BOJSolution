#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main(){
    int x1, y1, r1, x2, y2, r2, test_case;
    double distance;
    cin>>test_case;
    while(test_case > 0){
        cin>>x1>>y1>>r1>>x2>>y2>>r2;
        distance = sqrt((x1-x2) * (x1-x2) + (y1-y2) * (y1-y2));
        if((x1==x2 && y1==y2 && r1==r2)){
            cout<<"-1"<<endl;
        }
        else if(r1+r2==distance || r1+distance==r2 || r2+distance==r1){
            cout<<"1"<<endl;
        }
        else if(r1+r2<distance || r1+distance<r2 || r2+distance<r1){
            cout<<"0"<<endl;
        }
        else{
            cout<<"2"<<endl;
        }
        test_case--;
    }
}