#pragma once
#include<string>
class person
{
private:
    std::string firstName;
    std::string lastName;
public:
    person();
    person(std::string fName, std::string lName);
    person(std::string fName, std::string lName, int age);
    ~person();
    void SayHello();
};
