#include <iostream>

class customer {
  private:
    int custID;
    std::string custName;
    int age;
    std::string address;

  public:
    customer(int id, std::string name, int ag, std::string ad) : custID(id),
        custName(name),
        age(ag),
        address(ad) {
    }

    void display() {
        std::cout << "Customer ID : " << custID << std::endl
                  << "Customer Name : " << custName << std::endl
                  << "Age : " << age << std::endl
                  << "Address : " << address << std::endl;
    }
};

int main() {
    int id, age;
    std::string nme, add;
    std::cout << "Enter customer's detail in order : ID Name Age Address" << std::endl;
    std::cin >> id >> nme >> age >> add;
    customer one(id, nme, age, add);
    std::cout << "You have entered the following details: \n";
    one.display();
    return 0;
}