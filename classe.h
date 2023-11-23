#include <stdio.h>
#include <string.h>
#include <stdlib.h> 
#include <time.h>
#include <iomanip>
#include <fstream>
#include <iostream>


using namespace std;

class Person{
    int id, age;
    string name;
    string gender;
    string address;
    
    public:
    Person(int id, string name, int age, string gender, string address);
    string ToString();
};

class Pizzeria{
  int  id;
  string name;
  double ratting;
  
  public:
  Pizzeria(int id, string name, double ratting);
  string ToString();
};

class Person_visits{
    int id;
    int Person_id;
    int Pizzeria_id;
    string visit_date;
    
    public:
    Person_visits(int id, int Person_id, int Pizzeria_id, string visit_date);
    string ToString();
};

class Menu{
    int id;
    int Pizzeria_id;
    string pizza_name;
    int price;
    
    public:
    Menu(int id, int Pizzeria_id, string pizza_name, int price);
    string ToString();
    
};

class Person_order {
    int id;
    int Person_id;
    int menu_id;
    string order_date;
    public:
    Person_order(int id, int Person_id, int menu_id, string order_date);
    string ToString();
};
