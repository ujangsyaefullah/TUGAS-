#include <iostream>

using namespace std;

int main()
{
    float ip[100];
	int i=0;
	int lulus=0;

	cout<<"--------PENGECEKAN IP MAHASISWA-------"<<endl<<endl;
	cout<<"======================================"<<endl<<endl;

	while (ip[i-1]!=-999) { //input -999 untuk akhiri input
        cout<<"Masukkan IP mahasiswa : ";
        cin>>ip[i];
		if(ip[i]>=0, ip[i]<=4){ //filter IP yang valid 
			if(ip[i]>=2.75){ //batas lulus dan tidak lulus
				lulus++;
			}
			i++;
		}		
    }
        
	cout<<endl<<"======================================"<<endl<<endl;
		
    if(i!=1){ //cek jumlah i
		cout<<"-----------OUTPUT HASIL DATA----------"<<endl<<endl;
		cout<<"--------------------------------------"<<endl;
		cout<<"Jumlah Mahasiswa : "<<i-1<<endl;
		cout<<"--------------------------------------"<<endl;
		cout<<"Jumlah Mahasiswa Yang Lulus : "<<lulus<<endl;
		cout<<"--------------------------------------"<<endl;
		cout<<"Jumlah Mahasiswa Yang Tidak Lulus : "<<i-1-lulus<<endl;
		cout<<"--------------------------------------"<<endl;
	}
	else {
		cout<<"Tidak Ada Data";
	}
    
	return 0;
}