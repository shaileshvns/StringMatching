#include <iostream>
#include <chrono> 
#include <cstring>
#include <bits/stdc++.h>
using namespace std;
int A(string,string,int,int,int,int);
int B(string,string,int,int,int,int);
int string_matching();

int main() {
   

    auto start = chrono::high_resolution_clock::now(); 
    ios_base::sync_with_stdio(false); 
    string_matching(); 
    auto end = chrono::high_resolution_clock::now(); 
    double time_taken =  
     chrono::duration_cast<chrono::nanoseconds>(end - start).count(); 
    time_taken *= 1e-9; 
    cout << "Time taken by program is : " << fixed  
         << time_taken << setprecision(9); 
    cout << " sec" << endl;

	return 0;
}
int B(string Text,string P,int i,int j,int length,int starting_index){
    if(length--){
        if(Text[starting_index+j]==P[j--]){
        return A(Text,P,i,j,length,starting_index);
        }
        return length;
    }
    return 1;
}
int A(string Text,string P,int i,int j,int length,int starting_index){
    if(length--){
        if(Text[starting_index+i]==P[i++]){
        return B(Text,P,i,j,length,starting_index);
        }
      return length;
    }
return 1;
}
int string_matching(){
    string Text="dstfheofovsoifbfddfbjbnogindiobdrknofdlnvdfjbnpmpvbnfdpbjfdp";
    string P="dstfheofovsoifbfddfbjbnogindiobdrknofdlnvdfjbnpmpvbnfdpbjfdp";
    int starting_index=0;// staring index of given text
    int length=P.length();
    int i=0,j=length-1;
     int match=B(Text,P,i,j,length,starting_index);
     cout<<match<<endl;
     
    /*  if(match==1)
    cout<<"string match...."<<endl;
     else 
     cout<<"string do not match..."<<endl;*/
return 0;
}
