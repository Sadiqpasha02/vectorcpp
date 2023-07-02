#include <iostream>
#include <cmath>

using namespace std;
class Vector{

private:
    int p,q,ch;
    double rat,result;
    double sq;
public:
    Vector(){
        cout << "enter the vectors:";
        cin >>p>>q;
        cout <<"pls enter angle(in degrees)/rat:";
        cin >> rat;
        confirm:
            cout <<"pls confirm that you have entered angle(1) and ratio(2):";
            cin>>ch;
        switch(ch){

    case 1 :
        sq = pow(p,2)+pow(q,2)+2*p*q*cos(rat);
        result = sqrt(sq);
        break;
    case 2 :
         sq = pow(p,2)+pow(q,2)+2*p*q*rat;
        result = sqrt(sq);
        break;
    default :
        cout<<"pls enter correctly"<<endl;
        goto confirm;

        }
        cout <<"the magnitude of vector is :"<<result<<endl;
        }





};
int main()
{   Vector v;
    
    return 0;
}
