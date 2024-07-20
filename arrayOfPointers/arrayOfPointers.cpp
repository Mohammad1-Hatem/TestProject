/*
 * mat.cpp
 *
 *  Created on: 20 Jul 2024
 *      Author: mohatem
 */

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(void){

	int arr[4][4]={5,3,2,5,4,10,6,3,6,8,5,4,2,1,3,6};
	//	int arr[4][4]={5,4,2,1,3,6,5,3,2,4,10,6,3,5,6,8};
	int counter=0;

	int **value = new int*[3];  //Allocate memory for the array of 3 pointers

	for(int i=0; i<3;i++){ //Allocate memory for each individual array
		value[i]=new int[6];
	}

	for(int i=0; i<3;i++){
		for(int j=0; j<6;j++){
			value[i][j]=i*6+j;
		}
	}

	for(int i=0; i<3;i++){
		for(int j=0; j<6;j++){
			cout<<value[i][j]<<" ";
		}
		cout<<endl;
	}
}


