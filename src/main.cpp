#include "Alfa.h"
#include "Bravo.h"
#include "Charlie.h"
#include "Delta.h"

#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

namespace com {
namespace super {
namespace program {

enum class My_enum : uint64_t {
    red = 1,
    green = 2,
    blue = 3,
};

struct My_struct {
    const char* text;
};

class Living_thing {
public:
    virtual ~Living_thing() = default;
    virtual bool is_alive() = 0;
    virtual void birth() = 0;
    virtual void death() = 0;
};

class Musician {
public:
    virtual ~Musician() = default;
    virtual void play_music() = 0;
};

class Person
    : public Living_thing
    , public Musician {
public:
    Person()
        : age_{0}
    {
    }
    Person(int age, const std::string& name)
        : age_{age}
        , name_{name}
    {
    }

    virtual bool is_alive() override { return true; }
    virtual void birth() override {}
    virtual void death() override {}

    void Marry();
    void Divorce();

private:
    int age_;
    std::string name_;
};

class Animal : public Living_thing {
public:
    virtual bool is_alive() override { return true; }
    virtual void birth() override {}
    virtual void death() override {}

    void Bite();
    void Bark();
};

} // namespace program
} // namespace super
} // namespace com

bool short_function() { return true; }
int another_short_function() { return 1; }
int bit_longer_function()
{
    int a = 1 + 1;
    return a;
}

void longer_function(const std::string& str)
{
    std::cout << "Content of the \"str\" param: " << str << std::endl;
}

std::vector<std::string> even_longer_function(const std::string& str,
                                              int repeat_number)
{
    if (repeat_number <= 0) {
        throw std::invalid_argument{"repeat_number value is invalid"};
    }

    std::vector<std::string> strings;
    for (int i = 0; i < repeat_number; ++i) {
        strings.push_back(str);
    }

    return strings;
}

void check_conditions()
{
    try {
        const std::string str = {"blah"};
        const int repeat_number = 3;
        std::vector<std::string> strings =
            even_longer_function(str, repeat_number);

        if (strings.size() > 10) {
            std::cout << "Wow!" << std::endl;
        }
        else {
            std::cout << "Not bad" << std::endl;
        }

        switch (strings.size()) {
        case 1:
            std::cout << "Size is: 1" << std::endl;
            break;
        case 2:
            std::cout << "Size is: 2" << std::endl;
            break;
        default:
            std::cout << "Size is: more than 2" << std::endl;
            break;
        }
    }
    catch (std::exception& e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}

void functions_wit_a_lot_of_args(int age,
                                 const std::string& name,
                                 const std::string& occupation,
                                 int favorite_number,
                                 int height,
                                 int weight)
{
    std::cout << age << std::endl;
    std::cout << name << std::endl;
    std::cout << occupation << std::endl;
    std::cout << favorite_number << std::endl;
    std::cout << height << std::endl;
    std::cout << weight << std::endl;
}

void call_the_above_func()
{
    const int my_age = 25;
    const std::string& my_name = {"John"};
    const std::string& my_occupation = {"engineer"};
    const int my_favorite_number = 255;
    const int my_height = 180;
    const int my_weight = 75;

    functions_wit_a_lot_of_args(my_age, my_name, my_occupation,
                                my_favorite_number, my_height, my_weight);
}

int main()
{
    std::cout << "This is a simple program to test '.clang-format' file."
              << std::endl;

    std::cout << "You can mess up with the source code formatting and "
                 "'.clang-format' file options."
              << std::endl;

    std::cout << "Hint: Use 'git diff' to check any difference." << std::endl;

    int some_number = 10;
    int& ref_to_number = some_number;
    int* pointer_to_number = &ref_to_number;
    std::cout << *pointer_to_number << std::endl;
}
