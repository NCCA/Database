#include<iostream>
#include <sqlite_modern_cpp.h>

int main()
{
  try
  {
    sqlite::database db("TheComputerStore.db");
    
    db << "select * from Products  ;"         
        >> [&](int code, std::string name, float price,int manufacturer) 
        {
          std::cout << code << ' '<<name<<' '<<price<<' '<<manufacturer<<'\n';
        };

  }

  catch (std::exception& e) 
  {
   std::cout << e.what() <<'\n';
  }


}