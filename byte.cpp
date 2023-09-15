#include <iostream>
#include <bits/stdc++.h>
using namespace std;

union short_U{
	unsigned char byteIn;
}shortUnion;


// union INT_U{
//   char byteIn[4];
//   int intOut;
// } intUnion;


std::vector<char> vectorArray = {   '0',	'1',	'2',  '3',   '4',    '5',   '6',   '7',   '8',   '9',  'A',    'B',  'C',   'D',   'E',   'F' };

std::vector<string> binaryArray = { "0000","0001","0010","0011","0100","0101","0110","0111","1000","1001","1010","1011","1100","1101","1110","1111" };

int main(void){

	//unsigned int num = 35;

	string data = "40AD65ED64A0";

	unsigned char byteArray[data.size()/2];

	unsigned char* ptr = byteArray;

	unsigned char myByte;

	string check;

	for(int i=0,R=0;i<data.size();i++){

			for(int j=0;j<vectorArray.size();j++){

				if(data[i] == vectorArray[j]){
					check += binaryArray[j];
				}

				if(check.size() == 8){
					
					myByte=0;
					cout<<"full binary="<<check << endl;

					for(int k=0;k<check.size();k++){

						if( check[k] == '1'){
						  myByte = myByte | ( 1 << (7-k));
						}
					}

					cout << "char=" <<myByte<<endl;
					//byteArray[i/2]=mybyte;
					//shortUnion.byteIn=myByte;
					byteArray[R++]=myByte;
					cout << "no of bytes= "<<R<<endl;
					//shortUnion.byteIn[1]=myByte;
					cout <<"value="<<short(myByte)<<endl;
					check="";
				}

			}

			// char currentHex = data[i];
			// switch(currentHex){
			//     case '0':{
			//     	cout << "zero"<<endl;
			//     }
			// }

	}

	while(*ptr != '\0')
		cout << *ptr++;




	// for(int i=0,j=0;i<2;i++){
	// 	shortUnion.byteIn[i]=byteArray[i];
	// }

	//cout << "final = "<< shortUnion.byteOut<<endl;


/*	unsigned char array[4];

	// cout << "(num >> 0) & 0xff="
	// 	 << ((num >> 0)& 0xff) <<"\n";

	for(int i=0,j=sizeof(array);i<sizeof(array);i++){
		array[i]= ( num >> 8*(--j)) & 0xff;
	}

	// array[0] = ((num >> 24)& 0xff);
	// array[1] = ((num >> 16)& 0xff);
	// array[2] = ((num >> 8)& 0xff);
	// array[3] = ((num >> 0)& 0xff);

	cout << array[0]<<"\n";
	cout << array[1]<<"\n";
	cout << array[2]<<"\n";
	cout << array[3]<<"\n";

	for(int i=0,j=4;i<4;i++){
		intUnion.byteIn[i]=array[--j];
	}
	cout << "value is =" << intUnion.intOut<<"\n"; */




 }
