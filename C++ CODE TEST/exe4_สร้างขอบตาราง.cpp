#include <iostream>

using namespace std;

int main(int argc, char) {
    int num;
    cout<<"input Num:";
    cin >> num;
    for(int i=1;i<=num;i++) {
        for(int j=1;j<=num;j++){
            if(i == 1||i == num || j ==1||j== num) {
                    cout<<"x"<<" ";
                }
                else {
                    cout<<" "<<" ";
                }
        }
        cout<<endl;
        
    }
    return 0;
}
/*
เมื่อ if เป็นจริง พิมม์ x  ถ้าเป็นเท็จ พิมม์ "ช่องว่าง"
โดย Key สำคัญ คือการกำหนดเงื่อนไข 
**ถ้าตีโจทย์ ว่าการสร้างขอบตาราง คือ แถวแรก แถวสุดท้าย,บรรทัดแรก บรรทัดสุดท้าย  
เราก็จะได้ เงื่อนไขดัง line 11  