#include <iostream>

using namespace std;

const int MX = 2;

string imie[ MX ];
string nazwisko[ MX ];
int wiek[ MX ];


bool czyLiczba(string &pom)
{
	for(int i=0;i<pom.size();i++)
		if(!(pom[i]>='0' && pom[i]<='9'))
			return false;
	return true;
}

int toInt(string &pom)
{
	int w = 0;
	for(int i=0;i<pom.size();i++)
		w=w*10+pom[i]-'0';
	return w;
}

void wczytajOsobe ( string & i, string &n, int &w)
{
	string pom;
	cout<<"Podaj imie: ";
	cin>>i;
	cout<<"Podaj nazwisko: ";
	cin>>n;
	cout<<"Podaj wiek: ";
	cin>>pom;
	
	while(!czyLiczba(pom))
	{
		cout<<"Podaj wiek: ";
		cin>>pom;
	}
	w = toInt(pom);
}

void wypiszOsobe ( string &i, string &n, int &w)
{
	cout<<"Imie: "<<i<<"\n";
	cout<<"Nazwisko: "<<n<<"\n";
	cout<<"Wiek: "<<w<<"\n";
	cout<<"\n";
}

int main()
{
	ios::sync_with_stdio(false); 

	
	for( int i = 0; i < MX; i++ )
		wczytajOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

	for( int i = 0; i < MX; i++ )	
		wypiszOsobe( imie[ i ], nazwisko[ i ], wiek[ i ] );

return 0;
}
