#include <iostream>
#include <stdlib.h>
using namespace std;
int main(){
	cout<<"------------------- SERVICE TV ----------------------"<<endl;
	cout<<"---------------- IHSAN TV SERVICE -----------------"<<endl;
	cout<<"--------------------Jl.CIPADA ----------------"<<endl;
	cout<<"												      "<<endl;
	
	int jumlah;
	
	char question1[50] = "No.Barang		=";
	string question2 = "Tanggal         =";
	string question3 = "Nama Pelanggan  =";
	string question4 = "Jenis TV        =";
	string question5 = "No.seri         =";
	string question6 = "Telepon			=";
			
			cout<<" NOTA " <<endl;
		string question7 =	"Keluhan TV    =";
		string question8 =  "Perkiraan Selesai =";
	char answer[80];
	string answer1;
	string answer2;
	string answer3;
	string answer4;
	string answer5;
	string answer6;
	string answer7;
	int answer8;
	cout<<question1;
	cin>>answer1;
	cout<<question2;
	cin>>answer2;
	cout<<question3;
	cin>>answer3;
	cout<<question4;
	cin>>answer4;
	cout<<question5;
	cin>>answer5;
	cout<<question6;
	cin>>answer6;
	cout<<" FORM KELUHAN "<<endl;
	cout<<question7;
	cin>>answer7;
	cout<<question8;
	cin>>answer8;
	
	cout<<" Tampilan NOTA" <<endl;

	cout<<"No.Barang :";
	getline (std::cin,answer1);
	cout<<answer1<<endl;
	
	cout<<"Tanggal :";
	getline (std::cin,answer2);
	cout<<answer2<<endl;
	
	cout<<"Nama Pelanggan :";
	getline (std::cin,answer3);
	cout<<answer3<<endl;
		
	cout<<"Jenis TV :";
	getline (std::cin,answer4);
	cout<<answer4<<endl;

	cout<<"No.Seri :";
	getline (std::cin,answer5);
	cout<<answer5<<endl;
	
	cout<<"No.Telepon :";
	getline (std::cin,answer6);
	cout<<answer6<<endl;

 		cout<<"FORM KELUHAN"<<endl;
	
	cout<<"Keluhan TV :";
	getline (std::cin,answer7);
	cout<<answer7<<endl;
		

	system("PAUSE");
	return 0;
}
