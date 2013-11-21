#include <stdio.h>
#include <iostream>
#include "Array.h"

using namespace std;

int main(){
	Array * testnumber = new Array();
	testnumber->setdata(5);
	testnumber->showdata(100);
	return 0;
}