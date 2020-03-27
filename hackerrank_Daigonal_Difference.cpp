#include<bits/stdc++.h>
using namespace std;
int main(){

int i,j,n;
scanf("%d",&n);
int a[n][n];
int fd=0,bd=0;
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        scanf("%d",&a[i][j]);
        if(i==j){
                fd+=a[i][j];

        }
         if(i==(n-j-1)){
                bd+=a[i][j];

        }
    }

}

printf("%d",abs(fd-bd));
return 0;
}
