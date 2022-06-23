#include <iostream>
#include <memory>
#include <vector>

class Test
{
private:
    int data;

public:
    Test(int data) : data(data)
    {
        std::cout << "\t Test constructor(" << data << ")" << std::endl;
    }
    Test() : Test(0)
    {
    }
    int getData() const
    {
        return data;
    }
    ~Test()
    {
        std::cout << "\t Test destructor (" << data << ")" << std::endl;
    }
};

// Function Prototypes
std::unique_ptr<std::vector<std::shared_ptr<Test>>> make();
void fill(std::vector<std::shared_ptr<Test>> &vec, int num);
void display(const std::vector<std::shared_ptr<Test>> &vec);

int main()
{
    std::unique_ptr<std::vector<std::shared_ptr<Test>>> vec_ptr;
    vec_ptr = make();
    std::cout << "How many data points do you want to enter: ";
    int num;
    std::cin >> num;
    fill(*vec_ptr, num);
    display(*vec_ptr);
}

std::unique_ptr<std::vector<std::shared_ptr<Test>>> make()
{
    return std::make_unique<std::vector<std::shared_ptr<Test>>>();
}

void fill(std::vector<std::shared_ptr<Test>> &vec, int num)
{
    for (int i = 0; i < num; i++)
    {
        std::cout << " what number do you want to put in the list: ";
        int number;
        std::cin >> number;
        vec.push_back(std::move(std::make_shared<Test>(number)));
    }
}

void display(const std::vector<std::shared_ptr<Test>> &vec)
{
    std::cout << "Displaying Data\n================================\n";
    for (auto &element : vec)
    {
        std::cout << "element with data: " << element->getData() << std::endl;
    }
    std::cout << "\n================================\n";
}