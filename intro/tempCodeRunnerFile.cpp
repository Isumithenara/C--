//author -isumi thenara.
/*written on july 24th 2024
to demonstrate the structure of c++ program structure*/
  
  #include<iostream>
  #define PI 3.1415

  int r=2
  void area();

  class myclass
  {
    public:
       int a;
       void display()
           {
            std::cout<<"inside class"<<std::end1;
           }

  };
  int main()
  {
    myclass m;
    m.a=90;
    a.display();
    area();
    std::cout<<"hello world from main function"<<std::end1;
    std::cout<<m.a<<std::end1;
    return0;
  }