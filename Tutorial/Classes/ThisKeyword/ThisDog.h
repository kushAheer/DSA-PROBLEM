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
            cout<<"Dog Constructor called for  : "<<name<<" at "<<this<<endl;
        }
        ~Dog(){
            delete pAge;
            cout<<"Dog Destructor called for  : "<<name<<" at "<<this<<endl;
        }
        void printInfo(){
            cout<<"Dog ("<<this<<") "<<name<<endl;
            cout<<"Breed ("<<this<<") "<<breed<<endl;
            cout<<"PAge ("<<this<<") "<<pAge<<endl;
            
        }
        
        //Setters
        Dog* setDogName(string_view name){
            this->name = name; 
            return this;
        }
        Dog* setDogBreed(string_view breed){
            this->breed = breed; 
            return this;
        }
        Dog* setDogAge(int age ){
            *(this->pAge) = age; 
            return this;
        }
        
};