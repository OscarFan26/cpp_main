#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char a1[1001]= {},b1[1001]= {};
	int a[1001]= {},b[1001]= {},c[1001]= {},d[1001]= {},lena,lenb,i;
	int lenc = 0, x = 0;
	cin>>a1>>b1;
	lena = strlen(a1);
	lenb = strlen(b1);
	for(i = 0; i <= lena-1; i++) {			//转换为整型数组 
		a[lena-i-1] = a1[i] - 48;
	}
	for(i = 0; i <= lenb -1; i++) {			//转换为整型数组  
		b[lenb-i-1] = b1[i] - 48;
	}
	while(lenc<lena||lenc<lenb) {			//进行加法运算 
		c[lenc]=a[lenc]+b[lenc]+x;
		x = c[lenc]/10;
		c[lenc] = c[lenc]%10;
		lenc++;
	}
	if(x) {
		c[lenc]=x;
	} else {
		lenc--;
	}
	int x1=0;
	for(i = lenc; i >=0; i--) {				//结果除以2 
		d[i] = (x1*10+c[i])/2;
		x1=(x1*10+c[i])%2;

	}
	while(d[lenc]==0&&lenc>0) {
		lenc--;
	}
	for(int i=lenc; i>=0; i--) {			//输出 
		cout<<d[i];
	}
	return 0;
}