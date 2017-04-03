#include <iostream>
#include <fstream>

using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

	ofstream myfile{"abc.txt"};//try to open data.txt for reading (input)

  	if (myfile)// check if file opened succesfully
    	{
         	myfile << a << endl << b << endl << c << endl;//read data from text file
         	cout<<" the data "<< a <<" "<<b <<" "<< c << " were read from the file"<<endl;
    	}
  	else
     	cout<<"Error opening abc.txt"<<endl;//print error before program quits

 
   return 0;
}
