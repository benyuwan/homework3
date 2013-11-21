#include <stdio.h>
#include <iostream>
#include "Array.h"

using namespace std;

void Array::setdata(int item){
	count = 0;
	if(count<=99&&count>=0){
		data[count] = item;
		count++;
	}else{
	cout<<"下标越界！"<<endl;
	}
}

int Array::showdata(int number){
	if(number<=99&&number>=0){
	return data[number];
	}else{
	cout<<"下标越界!"<<endl;
	}
}