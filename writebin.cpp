#include <iostream>
#include <fstream>
using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';
 
   ofstream myfile{"abc.bin", ios::binary};//try to open data.bin for writing (output) in "binary" mode

  if (myfile)// check if file opened successfully
    { 
      myfile.write(reinterpret_cast<char*>(&a), sizeof(a));// boy is that a mouthful 
      myfile.write(reinterpret_cast<char*>(&b), sizeof(b));
	myfile.write(reinterpret_cast<char*>(&c), sizeof(c));
    }
  else
     cout<<"Error opening abc.bin"<<endl;//print error before program quits

 myfile.close();//optional in this case (destructor will close it automatically)
 
   return 0;
}
