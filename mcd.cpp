#include <iostream> // CALCULO DEL mcd
using namespace std;

int long a, b, c; 
int long mcd(int long, int long); 

main(){
	
	int long m, n, p;
	cout << "Ingresa un numero: "; cin >> m;
	cout << "Ingresa un numero: "; cin >> n;
	
	p = mcd(m, n);
	
	cout << "\n\n\tCALCULO DEL mcd" << endl;
	
	cout << "mcm(" << m << ", " << n << ") = " << ( (m*n) / p ) << endl;
	cout << "mcd(" << m << ", " << n << ") = " << p << endl;
	
	// 20,12
	
}
int long mcd(int long a, int long b){
	int long x;
	if(b == 0){
		
		return a;
	}
	else{	
	
		return x = mcd(b, (a % b)); 
		
		// 20,12
		// 20,12 ==> mcd(12, (20 % 12));
		// 12,8  ==> mcd(8,  (12 % 8 ));
		// 8 ,4  ==> mcd(4,  (8  % 4 ));
		// 4 ,0  ==> 4	
	}
	system("pause");
}








