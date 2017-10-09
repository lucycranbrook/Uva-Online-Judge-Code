#include<iostream>
#include<algorithm>
using namespace std;
typedef long long LL;
int main(){
	ios_base::sync_with_stdio(0);
	LL bach,spin;
	LL num=1;
	while(cin>>bach>>spin){
		if ((bach==0)&&(spin==0))return 0;
		LL bac[bach+1],spi[spin+1];
		LL lop=bach,pol=spin;
		LL kol=1,lok=1;
		while(lop--){
			LL numb;cin>>numb;
			bac[kol]=numb;
			kol++;
		}
		while(pol--){
			LL nums;cin>>nums;
			spi[lok]=nums;
			lok++;
		}
		sort(bac+1,bac+(bach+1));
		sort(spi+1,spi+(spin+1));
		if ((bach-spin)==0)cout<<"Case "<<num<<": 0"<<endl;
		else if (bach<spin)cout<<"Case "<<num<<": 0"<<endl;
		else if (bach>spin)cout<<"Case "<<num<<": "<<(bach-spin)<<' '<<bac[1]<<endl;
		num++;
	}
	return 0;
}
