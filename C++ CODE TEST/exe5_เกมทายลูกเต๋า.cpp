// เกม ทายลูกเต๋า
// 1-6  random
#include <iostream>
#include <random>   // เมื่อต้องการ สุ่ม
#include <ctime>    //เมื่อต้องเล่นกับ เวลา
using namespace std;

int main() {
    // Function Random by stackoverflow
    srand(time(0));
    int Random =(rand() % 6 + 1); // เก็บผลสุ่ม
    cout << "Random ="<<Random <<std::endl; // print
     

    

    // process 
    int k=0;
    while(k<3) {
        int Num;
        cout<<"Input Your Lucky Number:";
        cin >> Num;// เก็บค่าป้อนทาย เข้ามา

        if(Num == Random){
            std::cout<<"WINNER WINNER!!";
            break;
        }else {
            std::cout<<"Try Again";
        }
        cout<<endl;
        k+=1;
    }
    return 0;
    // while loop กำหนดเงื่อนไข k  ถึงทำงานได้ ยังหาวิธี รับค่าเรื่อยๆ จนกว่าจะถูกไม่ได้ 
}