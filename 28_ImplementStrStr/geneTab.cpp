#include <string>
#include <stdio.h>
#include <iostream>

/*
*   Chen
*   Sep 6, 2018  
*/

using namespace std;

void geneTab(string W, int T[]){
  int pos = 1, cnd = 0;
  T[0]=-1;
  for (pos=1; pos<9; pos++){
    if (W[pos]==W[cnd]) {
      T[pos]=T[cnd];
      cnd++;
    }
    else {
      T[pos]=cnd;
      cnd=T[cnd];
      while (cnd>=0 && W[pos]!=W[cnd]){
        cnd=T[cnd];
      }
      cnd++;
    }
  }
  T[pos]=cnd;
}

int main(){
  string W="ABACABABC";
  int L=W.length(); 
  int *T=new int[L];
  geneTab(W, T);
  for (int i=0; i<L; i++){
    printf("%d\n", T[i]);
  }
  delete T;
  return 0;  
}