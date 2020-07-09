#include <string>
using namespace std;

class Animal {
public:
    void setName(string animalName) {
        name = animalName;
    }

    string getName() const {
        return name;
    }

private:
    string name;
};