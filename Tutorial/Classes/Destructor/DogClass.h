#include <iostream>
using namespace std;

class Dog
{
    private:
        string name;
        string breed;
        int *pAge = nullptr;

    public:
        Dog() = default;
        Dog(string_view nameParam, string_view breedParam,int pAgeParam)
        {
            name = nameParam;
            breed = breedParam;
            pAge = new int;
            *pAge = pAgeParam;
             cout<<"Dog Constructor called for  : "<<name<<endl;
        }
        ~Dog(){
            delete pAge;
            cout<<"Dog Destructor called for  : "<<name<<endl;
        }
};