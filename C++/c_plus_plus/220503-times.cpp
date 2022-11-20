#include<iostream>
#include<cstring>
using namespace std;
char a1[1001], b1[1001];
int a[1001], b[1001], c[1001];
int main(){
    cin >> a1 >> b1;
    int lena, lenb;
    lena = strlen(a1);
    lenb = strlen(b1);

    for(int i = 0;i<lena;i++){
        a[lena - i] = a1[i] - 48;
    } 
    for(int i = 0;i<lenb;i++){
        b[lenb - i] = b1[i] - 48;
    } 
    for(int i = 1; i <= lena; i++){
        int x = 0; 
        for(int j = 1; j <= lenb; j++){
            c[i+j-1] = a[i]*b[j] + x + c[i+j-1];
            x = c[i+j-1]/10;
            c[i+j-1]%=10; 
        } 
        c[i+lenb]=x;
    } 
    int lenc = lena + lenb;

    while(c[lenc]==0&&lenc>1){
        lenc--; 
    } 
    for(int i = lenc; i > 0; i--){
        cout << c[i];
    } 
    return 0;
    }