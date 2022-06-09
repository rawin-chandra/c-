#include <iostream>
#include<fstream>
#include <string>
#include <vector>
using namespace std;
struct employee {
   string name;
   string id;
   int age;
};
typedef struct employee emp_type;
int main(void)
{
  emp_type temp;
  temp.name = "1";
  temp.id = "2";
  temp.age = 10;


    ofstream wf("test.txt", ios::out | ios::binary); //output file
           if(!wf) {
              cout << "Cannot open output file!" << endl;
              return 1;
           }
    wf << temp.name << 
    //fwrite(&temp,sizeof(emp_type),1,wf);
    wf.close();
/*
    for(int i=0;i<3;i++) {
        temp.name = "1";
        temp.id = "2";
        temp.age = 10;
        wf.write((emp_type *) &temp, sizeof(emp_type));   //write to file
    }
   wf.close();*/
   return 0;
}
