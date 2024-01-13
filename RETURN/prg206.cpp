#include<iostream>
#include <string>

void max_str(const std::string& input1, const std::string input2,std::string& output)
{
	if(input1 > input2){
		output = input1;
	}else{
		output = input2;
	}
}

void max_int( int input1, int input2,int& output){
	if(input1 > input2){
		output = input1;
	}else{
		output = input2;
	}
}


 int main(){

    /*std::string out_str;
	std::string string1("Cassablanca");
	std::string string2("Bellevue");

	max_str(string1,string2,out_str);
	std::cout << "max_str : " << out_str << std::endl;*/

    int out_int;
    int in1{45};
    int in2{723};
    max_int(in1,in2,out_int);
    std::cout << "max_int : " << out_int << std::endl;

    return 0;
 }