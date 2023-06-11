#include <iostream>
#include <Windows.h>
#include <string>

struct address
{
    std::string city;
    std::string street;
    std::string home_num;
    std::string apart_num;
    std::string index;
};

void print_addr(address* p) {
    std::cout << "Город: " << p->city << std::endl;
    std::cout << "Улица: " << p->street << std::endl;
    std::cout << "Номер дома: " << p->home_num << std::endl;
    std::cout << "Номер квартиры: " << p->apart_num << std::endl;
    std::cout << "Индекс: " << p->index << std::endl << std::endl;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    address addr = { "Москва", "Арбат", "12", "8", "123456"};
    print_addr(&addr);
    addr = { "Ижевск", "Пушкина", "59", "143", "953769" };
    print_addr(&addr);
    system("pause");
}