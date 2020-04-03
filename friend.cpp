#include<iostream>
class GrandFather;
class GrandPaFrd{
    public:
        void dance(GrandFather&);
};

class GrandFather{
    int age = 75;
    // constructor
    GrandFather(){
        std::cout << "in the grandFather Class\n";
    }
    void grannyAge(void);
    public:
        friend class GrandMother;
        // when a specific function of other class is allowed to acess private members
        friend void GrandPaFrd::dance(GrandFather&);
};


class GrandMother{
    public:
    char* name;
    // int testdata;
        GrandMother(){
            std::cout << "in the GrandMother Class\n";
        }
        // function to access private member of private class GrandPa
        void showGrandPaAge(GrandFather&);
};



// Member function declarations

void GrandFather::grannyAge(){
    std::cout << "Granny is old and fragile\n";
}

void GrandPaFrd::dance(GrandFather &abc){
    // accesing private member age in frd class

    // CREATING AN OBJECT IS NECCESSARY
    int dage;
    std::cout << "Grand Father's friend dances";
}

void GrandMother::showGrandPaAge(GrandFather &abc){
    std::cout << "Grandma thinks Granpa age is :"<< abc.age <<"\n";
}

int main(){
    
    return 0;
}