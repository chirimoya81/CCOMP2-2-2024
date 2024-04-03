#include <string>

class student {
    public:
    explicit student(std::string aName, int aAge);
    
    std::string getName() const;
    void setName(std::string newName);
    int getAge() const;
    void setAge(int newAge);
    bool isOlder() const{
        if (age < 10) {
            return false;
        if (age >= 18){
            return true;
        }
        }
    }
    
    
    private: 
    std::string name;
    int age;
};