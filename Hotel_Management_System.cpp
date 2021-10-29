#include<iostream>
using namespace std;
class starter{
	public:
		int total;
		int q;
		void show_starter(){
			cout<<"\n\n1.salad\n 2.pasta\n 3.soup";
			}
		void take_starter(){
			cout<<"\n\n what do you want\n press\n\n 1 for salad \n\n 2 for pasta \n\n 3 for soup";
		}	
		void salad(){
			cout<<"\nsalad";
			cout<<"\nprice :100";
			cout<<"\n quantity";
			cin>>q;
			total=q*100;
			cout<<"\n\n your total is :"<<total;
		}
		void pasta(){
			cout<<" \npasta";
			cout<<"\n price :250";
			cout<<"\n quantity";
			cin>>q;
			total=q*250;
			cout<<"\n\nyour total is :"<<total;
		
		}
		void soup(){
			cout<<"\nsoup";
			cout<<"\n price :175";
				cout<<"\n\n quantity";
			cin>>q;
			total=q*175;
			cout<<"\n \nyour total is :"<<total;
		
		}
		
		
};
class bevarages{
	public:
		int b_total;
		int b_q;
		void show_bevarages(){
			cout<<"\n t.tea\n s.soda\n l.lassi";
			}
		void take_beverage(){
			cout<<"\n what do you want\n press\n\n t for tea\n\n s for soda \n\n l for lassi";
		}	
		void tea(){
			cout<<"\n tea";
			cout<<"\nprice :90";
			cout<<"\n\n quantity";
			cin>>b_q;
			b_total=b_q*90;
			cout<<"\n your total is :"<<b_total;
		}
		void soda(){
			cout<<"\n soda";
			cout<<"\n price :60";
				cout<<"\n quantity";
			cin>>b_q;
			b_total=b_q*60;
			cout<<"\n\n your total is :"<<b_total;
		
		}
		void lassi(){
			cout<<"\nlassi";
			cout<<"\n price :120";
				cout<<"\n quantity";
			cin>>b_q;
			b_total=b_q*120;
			cout<<"\n\n your total is :"<<b_total;
		
		}
		
		
};
class deserts{
	public:
		int d_total=0;
		int d_q;
		void show_desert(){
			cout<<"\n 1.halwa\n 2.cake\n 3.gulab jamun";
			}
		void take_desert(){
			cout<<"\n what do you want\n press\n\n h for halwa \n\n c for cake\n\n g for gulab jamun";
		}	
		void halwa(){
			cout<<"\n halwa";
			cout<<"\nprice :350";
			cout<<"\n quantity";
			cin>>d_q;
			d_total=d_q*350;
			cout<<"\n\n your total is :"<<d_total;
		}
		void cake(){
			cout<<" \ncake";
			cout<<"\n price :750";
				cout<<"\n quantity";
			cin>>d_q;
			d_total=d_q*750;
			cout<<"\n\n your total is :"<<d_total;
		
		}
		void gulab_jamun(){
			cout<<"\ngulab jamun";
			cout<<"\n price :480";
				cout<<"\n quantity";
			cin>>d_q;
			d_total=d_q*480;
			cout<<"\n\n your total is "<<d_total;
		
		}
		
		
};
void starline(){
	for(int i=1;i<80;i++)
	cout<<"*";
}
int main(){
		//char menu;
		char w;
	
	do{
			char menu;
			cout<<"\n";
	starline();
	cout<<"\n\n\n \t\t\t\tMENU CARD\t\t\t\n\n\n";
	starline();
		cout<<"\n\n\n what do you want to want to order\n \n press\n\n s for starter\n \n d for deserts\n\n b for bevarages";
	cin>>menu;
	if(menu=='s'){
	
	
	int choice;
	starter s1;//starter is class name and     s1 is object of class
	s1.show_starter();
	s1.take_starter();
	cin>>choice;
	system("cls");
	if(choice ==1)
	s1.salad();
	if(choice ==2)
	s1.pasta();
	if(choice ==3)
	s1.soup();}
	system("cls");
	if(menu=='d'){
	char d_choice;
	deserts d1;
	//char d_choice;
	d1.show_desert();
	d1.take_desert();
	cin>>d_choice;
	system("cls");
	if(d_choice=='h')
	d1.halwa();
	if(d_choice=='c')
	d1.cake();
	if(d_choice=='g')
	d1.gulab_jamun();}
	if(menu=='b'){
	
	bevarages b1;
	char b_choice;
	b1.show_bevarages();
	b1.take_beverage();
	cin>>b_choice;
	system("cls");
	if(b_choice=='t')
	b1.tea();
	if(b_choice=='s')
	b1.soda();
	if(b_choice=='l')
	b1.lassi();}
	cout<<"\n\n enter e for continue and press any key to exit";
	cin>>w;}
	//system("cls");
	while(w=='e');
	system("cls");
	return 0;
	
}
