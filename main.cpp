#include "classes.h"
#include <map>

using namespace std;

typedef std::map<int, int> Mymap;
std::map<int, int>::iterator it;


Person::Person(int id, string name, int age, string gender, string address) {
        this-> id = id;
        this-> name = name;
        this-> age = age;
        this-> gender = gender;
        this-> address = address;
}
    

Pizzeria::Pizzeria(int id, string name, double ratting) {
    this-> id = id;
    this-> name = name;
    this-> ratting = ratting;
}



Person_visits::Person_visits(int id, int Person_id, int Pizzeria_id, string visit_date) {
    this-> id = id;
    this-> Person_id = Person_id;
    this-> Pizzeria_id = Pizzeria_id;
    this-> visit_date = visit_date;
}



Menu::Menu(int id, int Pizzeria_id, string pizza_name, int price) {
    this-> id = id;
    this-> Pizzeria_id = Pizzeria_id;
    this-> pizza_name = pizza_name;
    this-> price = price;
}



Person_order::Person_order(int id, int Person_id, int menu_id, string order_date) {
    this-> id = id;
    this-> Person_id = Person_id;
    this-> menu_id = menu_id;
    this-> order_date = order_date;
}

// string Person_order::ToString() {
//     string a {to_string(id)};
//     string s {to_string(Person_id)};
//     string d {to_string(menu_id)};
//     return (string("Person_order") + string(" ") + a + string(" ") + s + string(" ") + d + string(" ") + order_date);
// }

// string Menu::ToString() {
//     string a {to_string(id)};
//     string s {to_string(Pizzeria_id)};
//     string d {to_string(price)};
//     return (string("Menu") + string(" ") + a + string(" ") + s + string(" ") + pizza_name + string(" ") + d);
// }

// string Person_visits::ToString() {
//     string a {to_string(id)};
//     string s {to_string(Person_id)};
//     string d {to_string(Pizzeria_id)};
//     return (string("Person_vsits") + string(" ") + a + string(" ") + s + string(" ") + d + visit_date);
// }

// string Person::ToString() {
//         string f {to_string(id)};
//         string h {to_string(age)};
//         return (string("Person") + string(" ") + f + string(" ") + name + string(" ") + h + string(" ") + gender + string(" ") + address);
// }

// string Pizzeria::ToString() {
//     string f {to_string(id)};
//     string h {to_string(ratting)};
//     return (string("Pizzeria") + string(" ") + f + string(" ") + h);
// }

int main() {
    Person p(1, "Anna", 16, "female", "Moscow");
    Person p2(2, "Andrey", 21, "male", "Moscow");
    Person p3(3, "Kate", 33, "female", "Kazan");
    Person p4(4, "Denis", 13, "male", "Kazan");
    Person p5(5, "Elvira", 45, "female", "Kazan");
    Person p6(6, "Irina", 21, "female", "Saint-Petersburg");
    Person p7(7, "Peter", 24, "male", "Saint-Petersburg");
    Person p8(8, "Nataly", 30, "female", "Novosibirsk");
    Person p9(9, "Dmitriy", 18, "male", "Samara");
    
    Pizzeria pz(1,"Pizza Hut", 4.6);
    Pizzeria pz2(2,"Dominos", 4.3);
    Pizzeria pz3(3,"DoDo Pizza", 3.2);
    Pizzeria pz4(4,"Papa Johns", 4.9);
    Pizzeria pz5(5,"Best Pizza", 2.3);
    Pizzeria pz6(6,"DinoPizza", 4.2);
    
    Person_visits pv(1, 1, 1, "2022-01-01");
    Person_visits pv2(2, 2, 2, "2022-01-01");
    Person_visits pv3(3, 2, 1, "2022-01-02");  
    Person_visits pv4(4, 3, 5, "2022-01-03");
    Person_visits pv5(5, 3, 6, "2022-01-04");
    Person_visits pv6(6, 4, 5, "2022-01-07");
    Person_visits pv7(7, 4, 6, "2022-01-08");
    Person_visits pv8(8, 5, 2, "2022-01-08");
    Person_visits pv9(9, 5, 6, "2022-01-09");
    Person_visits pv10(10, 6, 2, "2022-01-09");
    Person_visits pv11(11, 6, 4, "2022-01-01");
    Person_visits pv12(12, 7, 1, "2022-01-03");
    Person_visits pv13(13, 7, 2, "2022-01-05");
    Person_visits pv14(14, 8, 1, "2022-01-05");
    Person_visits pv15(15, 8, 2, "2022-01-06");
    Person_visits pv16(16, 8, 4, "2022-01-07");
    Person_visits pv17(17, 9, 4, "2022-01-08");
    Person_visits pv18(18, 9, 5, "2022-01-09");
    Person_visits pv19(19, 9, 6, "2022-01-10");
    
    Menu m(1,1,"cheese pizza", 900);
    Menu m2(2,1,"pepperoni pizza", 1200);
    Menu m3(3,1,"sausage pizza", 1200);
    Menu m4(4,1,"supreme pizza", 1200);
    Menu m5(5,6,"cheese pizza", 950);
    Menu m6(6,6,"pepperoni pizza", 800);
    Menu m7(7,6,"sausage pizza", 1000);
    Menu m8(8,2,"cheese pizza", 800);
    Menu m9(9,2,"mushroom pizza", 1100);
    Menu m10(10,3,"cheese pizza", 780);
    Menu m11(11,3,"supreme pizza", 850);
    Menu m12(12,4,"cheese pizza", 700);
    Menu m13(13,4,"mushroom pizza", 950);
    Menu m14(14,4,"pepperoni pizza", 1000);
    Menu m15(15,4,"sausage pizza", 950);
    Menu m16(16,5,"cheese pizza", 700);
    Menu m17(17,5,"pepperoni pizza", 800);
    Menu m18(18,5,"supreme pizza", 850);
    
    Person_order (1,1, 1, "2022-01-01");
    Person_order (2,1, 2, "2022-01-01");
    Person_order (3,2, 8, "2022-01-01");
    Person_order (4,2, 9, "2022-01-01");
    Person_order (5,3, 16, "2022-01-04");
    Person_order (6,4, 16, "2022-01-07");
    Person_order (7,4, 17, "2022-01-07");
    Person_order (8,4, 18, "2022-01-07");
    Person_order (9,4, 6, "2022-01-08");
    Person_order (10,4, 7, "2022-01-08");
    Person_order (11,5, 6, "2022-01-09");
    Person_order (12,5, 7, "2022-01-09");
    Person_order (13,6, 13, "2022-01-01");
    Person_order (14,7, 3, "2022-01-03");
    Person_order (15,7, 9, "2022-01-05");
    Person_order (16,7, 4, "2022-01-05");
    Person_order (17,8, 8, "2022-01-06");
    Person_order (18,8, 14, "2022-01-07");
    Person_order (19,9, 18, "2022-01-09");
    Person_order (20,9, 6, "2022-01-10");
    
    cout << m.ToString();
    
    return 0;
}
