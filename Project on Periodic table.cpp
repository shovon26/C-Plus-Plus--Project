#include<bits/stdc++.h>
#define pb push_back
#define ss second
#define ff first

using namespace std;
typedef pair<string, int> psi;
const int ROW = 10;
const int COL = 19;
map<string , int>mp;
map<int, string> mapa;
vector<psi>info;

class AtomicNumberAndName{
	public : 
	string name;
	int number;
	AtomicNumberAndName(string Name, int Number){
		name = Name;
		number = Number;
	}
	
	void PrintTable(vector<vector<string>>table){
		for(int i=0; i<(int)table.size(); i++){
			for(int j=0; j < (int)table[i].size(); j++) cout << table[i][j] << " ";
			cout << endl;
		}
	}
	
	void PrintAtomicNUmberAndName(vector<psi> in){
		for(int i=0; i<(int)in.size(); i++){
			cout << in[i].ff << ", " << in[i].ss << endl;
		}
	}
	
	void Information(){
		info.pb({"H", 1});         info.pb({"He", 2});        info.pb({"Li", 3});
		info.pb({"Be", 4});        info.pb({"B", 5});         info.pb({"C", 6});
		info.pb({"N", 7});         info.pb({"O", 8});         info.pb({"F", 9});
		info.pb({"Ne", 10});       info.pb({"Na", 11});       info.pb({"Mg", 12});
		info.pb({"Al", 13});       info.pb({"Si", 14});       info.pb({"P", 15});
		info.pb({"S", 16});        info.pb({"Cl", 17});       info.pb({"Ar", 18});
		info.pb({"K", 19});        info.pb({"Ca", 20});       info.pb({"Sc", 21});
		info.pb({"Ti", 22});       info.pb({"V", 23});        info.pb({"Cr", 24});
		info.pb({"Mn", 25});       info.pb({"Fe", 26});       info.pb({"Co", 27});
		info.pb({"Ni", 28});       info.pb({"Cu", 29});       info.pb({"Zn", 30});
		info.pb({"Ga", 31});       info.pb({"Ge", 32});       info.pb({"As", 33});
		info.pb({"Se", 34});       info.pb({"Br", 35});       info.pb({"Kr", 36});
		info.pb({"Rb", 37});       info.pb({"Sr", 38});       info.pb({"Y", 39});
		info.pb({"Zr", 40});       info.pb({"Nb", 41});       info.pb({"Mo", 42});
		info.pb({"Tc", 43});       info.pb({"Ru", 44});       info.pb({"Rh", 45});
		info.pb({"Pd", 46});       info.pb({"Ag", 47});       info.pb({"Cd", 48});
		info.pb({"In", 49});       info.pb({"Sn", 50});       info.pb({"Sb", 51});
		info.pb({"Te", 52});       info.pb({"I", 53});        info.pb({"Xe", 54});
		info.pb({"Cs", 55});       info.pb({"Ba", 56});       info.pb({"La", 57});
		info.pb({"Ce", 58});       info.pb({"Pr", 59});       info.pb({"Nd", 60});
		info.pb({"Pm", 61});       info.pb({"Sm", 62});       info.pb({"Eu", 63});
		info.pb({"Gd", 64});       info.pb({"Tb", 65});       info.pb({"Dy", 66});
		info.pb({"Ho", 67});       info.pb({"Er", 68});       info.pb({"Tm", 69});
		info.pb({"Yb", 70});       info.pb({"Lu", 71});       info.pb({"Hf", 72});
		info.pb({"Ta", 73});       info.pb({"W", 74});        info.pb({"Re", 75});
		info.pb({"Os", 76});       info.pb({"Ir", 77});       info.pb({"Pt", 78});
		info.pb({"Au", 79});       info.pb({"Ag", 80});       info.pb({"Tl", 81});
		info.pb({"Pb", 82});       info.pb({"Bi", 83});       info.pb({"Po", 84});
		info.pb({"At", 85});       info.pb({"Rn", 86});       info.pb({"Fr", 87});
		info.pb({"Ra", 88});       info.pb({"Ac", 89});       info.pb({"Th", 90});
		info.pb({"Pa", 91});       info.pb({"U", 92});        info.pb({"Np", 93});
		info.pb({"Pu", 94});       info.pb({"Am", 95});       info.pb({"Cm", 96});
		info.pb({"Bk", 97});       info.pb({"Cf", 98});       info.pb({"Es", 99});
		info.pb({"Fm", 100});      info.pb({"Md", 101});      info.pb({"No", 102});
		info.pb({"Lr", 103});      info.pb({"Rf", 104});      info.pb({"Db", 105});
		info.pb({"Sg", 106});      info.pb({"Bh", 107});      info.pb({"Hs", 108});
		info.pb({"Mt", 109});      info.pb({"Ds", 110});      info.pb({"Rg", 111});
		info.pb({"Cn", 112});      info.pb({"Nh", 113});      info.pb({"Fl", 114});
		info.pb({"Mc", 115});      info.pb({"Lv", 116});      info.pb({"Ts", 117});
		info.pb({"Og", 118});
		
		for(auto x : info){
			mp[x.ff] = x.ss;
			mapa[x.ss] = x.ff;
		}
	}
	
	void showTable(){
		vector<vector<string>>table(ROW, vector<string>(COL));
		Information();
		table[0][0] = info[0].ff;
		for(int i=1; i<=16; i++){
			if(i == 16)table[0][i] = "   ";
			else table[0][i] = "  ";
		}
		table[0][17] = info[1].ff;
		table[1][0] = info[2].ff; table[1][1] = info[3].ff;
		table[1][2] = "                         ";
		int now = 4;
		for(int i=12; i<=17; i++) table[1][i] = info[now++].ff;
		
		table[2][0] = info[now].ff;
		now++;
		table[2][1] = info[now].ff;
		now++;
		for(int i=2; i<=11; i++){
			if(i == 11)table[2][i] = "       ";
			else table[2][i] = "  ";
		}
		for(int i=12; i<=17; i++)table[2][i] = info[now++].ff;
		for(int i=0; i<=17; i++)table[3][i] = info[now++].ff;
		for(int i=0; i<=17; i++)table[4][i] = info[now++].ff;
		table[5][0] = info[now++].ff;
		table[5][1] = info[now++].ff;
		table[5][2] = info[now++].ff;
		now = 71;
		for(int i=3; i<=17; i++)table[5][i] = info[now++].ff;
		for(int i=0; i<=2; i++) table[6][i] = info[now++].ff;
		now = 104;
		for(int i=3; i<=17; i++)table[6][i] = info[now++].ff;
		for(int i=0; i<=2; i++)table[7][i] = " ";
		now = 57;
		for(int i=3; i<=16; i++)table[7][i] = info[now++].ff;
		
		for(int i=0; i<=2; i++)table[8][i] = " ";
		now = 88;
		for(int i=3; i<=17; i++)table[8][i] = info[now++].ff;
		PrintTable(table);
	}
	
	void showAtomicNameAndNumber(){
		Information();
		PrintAtomicNUmberAndName(info);
	}
	
	int searchByName(string Name){
		int atomic_num = mp[Name];
		return atomic_num;
	}
	string searchByNumber(int num){
		string element = mapa[num];
		return element;
	}
};

class GroupPeriod {
	public:
	int getGroup(int num){
		if(num == 1 || num == 3 || num == 11 || num == 19 || num == 37 || num == 55 || num == 87) return 1;
		else if(num == 4 || num == 12 || num == 20 || num == 38 || num == 56 || num == 88) return 2;
		else if(num == 21 || num == 39 || (num >= 57 && num <= 71) || (num >= 89 && num <= 103)) return 3;
		else if(num == 22 || num == 40 || num == 72 || num == 104) return 4;
		else if(num == 23 || num == 41 || num == 73 || num == 105) return 5;
		else if(num == 24 || num == 42 || num == 74 || num == 106) return 6;
		else if(num == 25 || num == 43 || num == 75 || num == 107) return 7;
		else if(num == 26 || num == 44 || num == 76 || num == 108) return 8;
		else if(num == 27 || num == 45 || num == 77 || num == 109) return 9;
		else if(num == 28 || num == 46 || num == 78 || num == 110) return 10;
		else if(num == 29 || num == 47 || num == 79 || num == 111) return 11;
		else if(num == 30 || num == 48 || num == 80 || num == 112) return 12;
		else if(num == 5 || num == 13 || num == 31 || num == 49 || num == 81 || num == 113) return 13;
		else if(num == 6 || num == 14 || num == 32 || num == 50 || num == 82 || num == 114) return 14;
		else if(num == 7 || num == 15 || num == 33 || num == 51 || num == 83 || num == 115) return 15;
		else if(num == 8 || num == 16 || num == 34 || num == 52 || num == 84 || num == 116) return 16;
		else if(num == 9 || num == 17 || num == 35 || num == 53 || num == 85 || num == 117) return 17;
		else if(num == 10 || num == 18 || num == 36 || num == 54 || num == 86 || num == 118) return 18;
		else return 0;
	}
	int getPeriod(int num){
		if(num >= 1 && num <= 2) return 1;
		else if(num >= 3 && num <= 10) return 2;
		else if(num >= 11 && num <= 18) return 3;
		else if(num >= 19 && num <= 36) return 4;
		else if(num >= 37 && num <= 54) return 5;
		else if(num >= 55 && num <= 86) return 6;
		else if(num >= 87 && num <= 118) return 7;
		else return 0;
	}
	string AtomicName(int num){
		string name = mapa[num];
		return name;
	}
	pair<int, int> Location(string name){
		int atomic_num = mp[name];
		int group_num = getGroup(atomic_num);
		int period_num = getPeriod(atomic_num);
		return {group_num, period_num};
	}
};

class NewElement : public GroupPeriod {
	public:
	pair<int, int> Add(int element){
		if(element < 119) return {0, 0};
		int back = element - 32;
		int group = getGroup(back);
		return {group, 8};
	}
};
int main()
{
	AtomicNumberAndName object1("H", 1);
	GroupPeriod object2;
	NewElement object3;
	cout << object1.name << ' ' << object1.number << endl;
	
	
	while(true){
		cout <<"Enter your choice :: ";
		int choice;
		cin >> choice;
		if(choice == 4){
			cout << "Stop Here" << endl;
			break;
		}
		if(choice == 1){
			cout << "Want to Show(1 is for table and 2 is for AtomicNameAndNumber else search operation :: ";
			int C; cin >> C;
			if(C == 1) object1.showTable();
			else if(C == 2) object1.showAtomicNameAndNumber();
			else {
				object1.Information();
				cout << "Choose Option(1 is for SearchByname and 2 is for SearchByNumber :: ";
				int option; cin >> option;
				if(option == 1){
					cout <<"Enter Atomic Name :: ";
					string s; cin >> s;
					cout << "Atomic Number : " << object1.searchByName(s) << endl;
				}
				else{
					cout <<"Enter Atomic Number :: ";
					int num; cin >> num;
					cout << "Atomic Name : " << object1.searchByNumber(num) << endl;
				}
			}
		}
		else if(choice == 2){
			object1.Information();
			cout << "Choose Option(1 is for search by Number and 2 is for search by name :: ";
			int choose; cin >> choose;
			if(choose == 1){
				cout << "Enter Atomic Number :: ";
				int number; cin >> number;
				string atomic_name = object2.AtomicName(number);
				int group = object2.getGroup(number);
				int period = object2.getPeriod(number);
				cout << "Atomic Name : " << atomic_name << endl;
				cout << "Group number : " << group << endl;
				cout << "Period number : " << period << endl;
			}
			else if(choose == 2){
				cout << "Enter Atomic Name :: ";
				string name; cin >> name;
				pair<int, int> p = object2.Location(name);
				int atomic_num = mp[name];
				int group = p.ff;
				int period = p.ss;
				cout << "Atomic Number : " << atomic_num << endl;
				cout << "Group number : " << group << endl;
				cout << "Period number : " << period << endl;
			}
		}
		else if(choice == 3){
			cout << "Insert New Element :: ";
			int element; cin >> element;
			pair<int, int> p = object3.Add(element);
			int group = p.ff;
			int period = p.ss;
			if(p.ff == 0 || element >= 130){
				cout << "Invalid Choice\n";
			}
			else{
				cout << "Group number : " << group << endl;
				cout << "Period number : " << period << endl;
			}
		}
	}
	
	return 0;
}
