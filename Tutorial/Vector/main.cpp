#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Corners{
    public : 
        float a,b,c,d;
};


int main(){
    vector<int> intList;

    intList.push_back(2);
    intList.push_back(3);
    intList.push_back(4);
    intList.push_back(5);

    // for (auto i = intList.begin(); i != intList.end() ; i++)
    // {
    //     cout<<*i<< endl;
    // }
    vector<Corners> corners   ;
    corners.push_back({1,2,3,4});
    corners.push_back({5,6,7,8});

    for (int i = 0; i <corners.size() ; i++)
    {
        // cout<<corners<< endl;
    }


    return 0 ;
}