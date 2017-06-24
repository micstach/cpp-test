#include <stdio.h>
#include <string>

class Person
{
    private:
        std::string _name;

    public: 
        Person(std::string name)
        {
            this->_name = name;
        }

        const std::string& getName() const
        {
            return this->_name;
        }
};

int main()
{
    Person* developer = new Person("Michał Stachańczyk");
    printf("Person name is: %s\n", developer->getName().c_str());
    return 0;
}

