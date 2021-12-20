#include <iostream>
using namespace std;

int main() {
    int num ;
    cout<<"input number :";
    cin >> num;
/*
    for( int i=1;i<num+1;i++){
        if(i % 2 ==0){
             for(int j=1;j<=num;j++){
                if(j%2==0){
                    cout<<"x";
                }else {
                    cout<<"o";
                }   
            }
        }
        else {
            for(int j=1;j<=num;j++){
                if(j%2==0){
                    cout<<"o";
                }else {
                    cout<<"x";
                }   
            }
        }
        cout<<endl;
    }
*/
    for(int i =0;i<num;i++) {
        for(int j=0;j<num;j++){
            if((i+j)%2==0){
                cout<<"x";
            }else {
                cout<<"o";
            }
        }
        cout<<endl;
    }
    return 0;
    // i+j กำหนด เลขคี่ หรือ เลขคู่ ง่ายๆ 
}