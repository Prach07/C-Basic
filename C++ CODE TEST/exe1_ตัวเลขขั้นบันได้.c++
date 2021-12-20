// input num .and print num is example
/*
input 4 
1
12
123
1234
*/
#include<iostream>
using namespace std;


int main() {
    int num;
    cout<<"input number:";
    cin >>num; //4

    for( int i=0;i<num;i++){
        for(int y=1;y<i+2;y++){
            cout<<y<<" ";
        }
       cout<<endl;
    }
    return 0;
}
/*
input 4
loop i=0 i<4 i++
    loop y=1 y<i+2 y++ // 1 i = 0+2 
        print y =1 ," "   // 1
    endl
loop i =1 i<4 i++
    loop y=1 y<1+2 y++ // 2 i =3 
        print y =1 ," " //2
        print y =1 ,y=2," "
        print y =1 ,y=2,y=3" "
*** สำคัญที่ Loop ด้านใน 
รอบแรกจะเมืื่อ y เริ่มต้น 1  yน้อยกว่า i(0)+2 
ฉน้้น รอบแรก y จะปริ้น แค่ ทีเดียว 
ออก loop2 มา Loop1 ขึ้นบรรทัดใหม่

ค่า i loop นอกเปลี่ยนเป็น 1 ซึ่งน้อยกว่า 4ที่เราป้อนไป จึงทำงาน Loop 2 ต่อ
    loop2 ค่า y เริ่มต้นเหมือนเดิม แต่เงื่อนไขเปลี่ยนเป็น i(1)+2 หมายถึงต้อง print 2รอบ  ซึ่ง ค่า y ก็เพิ่มด้วยเช่นกัน ใน loop 2 นี้  จึงได้ 12" "  และก็วนไปเรื่อยๆ 