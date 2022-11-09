#include<iostream>
#include <string>
#include <cstdlib>
#include <bits/stdc++.h>
using namespace std;

int main(){
	Start:
	int animal=0,teams=0,district=0,films=0,books=0;
	int number;
	int i,j,k,l,m,n;
	cout<<"Categories of word:"<<endl;	
	cout<<"1.Animal"<<endl;
	cout<<"2.Teams"<<endl;
	cout<<"3.Districts"<<endl;
//	cout<<"4.Films"<<endl;
//	cout<<"5.Book"<<endl;
	
	cout<<"Choose category"<<endl;
	cin>>number;
	animal=1,teams=2,district=3,films=4,books=5;

	
	string myAnimal[4]={"dog","snake","cow","spider"};
	string myTeams[4]={"psg","barca","arsenal","manu"};
	string myDistrict[4]={"rubavu","nyanza","ngoma","gasabo"};
	string resultWord;
	int trials= 7;
	if(number==animal){

	string random= myAnimal[rand()% 10];
	for(i=0;i<random.length();i++){
	resultWord += "-";
     
	}
	cout <<  "The word guessed is : " << resultWord << endl;
	cout<<"You have 7 trials"<<endl;
	do{
	char letter1;
    cout<<"Choose letter"<<endl;
	cin>>letter1;
	for( j = 0; j <random.length();j++){
	if(random[j] == letter1){
	resultWord[j] = letter1;
	cout << "The word is :" <<resultWord<<endl;
	if(resultWord[j] != letter1){
	cout<<"Try again"<<endl;
	}
	if(resultWord==random){
	cout<<"===Congratulation you guessed the word===="<<endl;
	cout<<"Start game?y/n"<<endl;
	string startGame;
	cin>>startGame;
	if(startGame=="y"){
	goto Start;	
	}else if(startGame=="n"){
	exit(0);
	}
	
	}
	}
	
	}
	trials -- ;
	cout<<"Remain "<<trials<<" trials"<<endl;
	}
	
	while(trials > 0);
	
	cout<<"Your trials are over , you lost"<<endl;
	cout<<"Start game?y/n"<<endl;
	string startGame;
	cin>>startGame;
	if(startGame=="y"){
	goto Start;	
	}else if(startGame=="n"){
	exit(0);
	}
	}
	
	

//                                    ===============DISTRICTS============



	
	else if(number==district){
	string resultWord2;
	string random2= myDistrict[rand()% 10];
	for(l=0;l<random2.length();l++){
	resultWord2 += "-";
     
	}
	cout <<  "The word guessed is : " << resultWord2 << endl;
	cout<<"You have 7 trials"<<endl;
	do{
	char letter2;
    cout<<"Choose letter"<<endl;
	cin>>letter2;
	for( k = 0; k <random2.length();k++){
	if(random2[k] == letter2){
	resultWord2[k] = letter2;
	cout<<resultWord2[k]<<endl;
	cout << "The word is :" << resultWord2 <<endl;
	if(resultWord2==random2){
	cout<<"===Congratulation you guessed the word===="<<endl;
	cout<<"Start game?y/n"<<endl;
	string startGame;
	cin>>startGame;
	if(startGame=="y"){
	goto Start;	
	}else if(startGame=="n"){
	exit(0);
	}
	}
	}
	
	}
	trials -- ;
	cout<<"Remain: "<<trials<<" trials"<<endl;
	}
	
	while(trials > 0);
	
	cout<<"Your trials are over , you lost"<<endl;
	}
	
	//	                               =============Teams=============
	else if(number==teams){
	string resultWord3;
	string random3= myTeams[rand()% 10];
	for(m=0;m<random3.length();m++){
	resultWord3 += "-";
     
	}
	cout <<  "The word guessed is : " << resultWord3 << endl;
	cout<<"You have 7 trials"<<endl;
	do{
	char letter3;
    cout<<"Choose letter"<<endl;
	cin>>letter3;
	for( n = 0; n <random3.length();n++){
	if(random3[n] == letter3){
	resultWord3[n] = letter3;
	cout<<resultWord3[n]<<endl;
	cout << "The word is :" << resultWord3 <<endl;
	if(resultWord3==random3){
	cout<<"===Congratulation you guessed the word==="<<endl;
	cout<<"Start game?y/n"<<endl;
	string startGame;
	cin>>startGame;
	if(startGame=="y"){
	goto Start;	
	}else if(startGame=="n"){
	exit(0);
	}
	}
	}
	
	}
	trials -- ;
	cout<<"Remain: "<<trials<<" trials"<<endl;
	}
	
	while(trials > 0);
	
	cout<<"Your trials are over , you lost"<<endl;
	}

	return 0;
	




}


	
	
