#include <iostram>
int main(){
  char A[]="ARAB";
for(int i=0;A[i]!='\0';i++){
if(A[i]>='A' && A[i]<='Z'){
A[i]=A[i]+3;
}
}
puts(A);
return 0;
}
