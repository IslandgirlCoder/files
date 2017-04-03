#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

	ifstream myfile{"abc.txt"};//try to open data.txt for reading (input)

  	if (myfile)// check if file opened succesfully
    	{
         	myfile >> a >> b >> c;//read data from text file
         	cout<<" the data "<<a<<" and "<<b<< c << " were read from the file"<<endl;
    	}
  	else
     	cout<<"Error opening data.txt"<<endl;//print error before program quits

 
   return 0;
}
