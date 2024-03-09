#include<iostream>
using namespace std;
int main(){
	string nom[100];
	string rang[100];
	int nomer[100];
	int narx[100];
	int c=0;
	
	while(true){
		cout<<"_______________________________________________________________\n";
		cout<<"1.Mashina qo'shish	2.Mashinalarni ko'rish	3.Mashina qidirish\n";
		int son;
		cout<<"Menyulardan birini tanlang: ";
		cin>>son;
		
		switch(son) {
			case 1:{
				cout<<"Siz mashina qo'shish menyusini tanladingiz\n";
				
				cout<<"Yangi mashina nomini kirting: ";
				string name;
				cin>>name;
				
				cout<<"Yangi mashina rangini kiriting: ";
				string color;
				cin>>color;
				
				cout<<"Yangi mashina nomerini kiriting: ";
				int num;
				cin>>num;
				
				cout<<"Yangi mashina narxini kiriting: ";
				int cost;
				cin>>cost;
				
				nom[c] = name;
				rang[c] = color;
				nomer[c] = num;
				narx[c] = cost;
				
				c++;
				cout<<"Yangi mashina qo'shildi!!!\n";
				break;
			}
			case 2:{
				cout<<"Siz mashinalarni ko'rish menyusini tanladingiz\n";
				for(int i=0; i<c; i++){
					cout<<i+1<<") Mashina nomi - "<<nom[i]<<", rangi - "<< rang[i]<<", nomeri - "<<nomer[i] << ", narxi - "<<narx[i]<<endl;
				}
				break;
			}
			case 3:{
				cout<<"Siz mashina qidirish menyusini tanladingiz\n";
				cout<<"Qidirilayotgan mashinaning nomini kiriting: ";
				string b;
				cin>>b;
				for(int i=0; i<c; i++){
					if(nom[i] == b){
						cout<<i+1<<") Mashina nomi - "<<nom[i]<<", rangi - "<< rang[i]<<", nomeri - "<<nomer[i] << ", narxi - "<<narx[i]<<endl;
					}
				}
				break;
			}
		}
	}
}
