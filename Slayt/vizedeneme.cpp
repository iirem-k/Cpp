// /* #include<iostream>
// using namespace std;

//  int toplama(int b) {
//         return b;
//     }
//     int carpim(int b, int x){
//         return x * x + 2 * b;
//     }
// int main(){
//    int n =77;
//     int b, x;
//     cout<< "b değerini giriniz:"; cin>>b;
//     cout<<"x değerini giriniz:"; cin>>x;
//     if(x<3){
//         cout<<"x değeri 3 den küçük olamaz";
//         return 0;
//     }
//     for(int i=1;i<n; i++){
//        int y= carpim(b,x)+toplama(b);
//        cout<<"Yi"<<":"<<y+i<<endl;
//     }
// } */

// #include<iostream>
// using namespace std;
// struct bilgi{
// string isim;
// bool cinsiyet;
// float can;
// string silah;
// };
// void kos(){
//     cout<<"Koşma yeteneği kazandınız"<<endl;
// }
// void egil(){
//     cout<<"Eğilme yeteneği kazandınız"<<endl;
// }
// void ziplama(){
//     cout<<"Zıplama yeteneği kazandınız"<<endl;
// }
// int main(){
//     bilgi karakter;
//     karakter.isim="Ahmet";
//     karakter.cinsiyet=true;
//     karakter.can= 30;
//     karakter.silah="Tabanca";
//     cout<<"Karakterin ismi: "<<karakter.isim<<endl;
//     cout<<"Karakterin cinsiyeti: "<<(karakter.cinsiyet ? "Erkek" : "Kadın")<<endl;
//     cout<<"Karakterin canı: "<<karakter.can<<endl;
//     cout<<"Karakterin silahı: "<<karakter.silah<<endl;
//     int engel;
//     cout<<"Engel türünü seçin (1: küçük, 2: orta, 3: büyük): ";
//     cin>>engel;
//     switch(engel){
//         case 1:
//             kos();
//             if(karakter.can >= 45 && karakter.can <= 100){
//                 cout<<"Engeli aştınız"<<endl;
//             }else if(karakter.can < 45 && karakter.can > 10){
//                 cout<<"Engeli aşamadınız "<<"Güncel can durumu:"<<karakter.can<<endl;
//             karakter.can--;
//           }
//             cout<<"Güncel can durumu:"<<karakter.can<<endl;
//             break;
//         case 2:
//             egil();
//             if(karakter.can >= 45 && karakter.can <= 100){
//                 cout<<"Engeli aştınız"<<endl;
//             }else if(karakter.can < 45 && karakter.can > 10){
//                 cout<<"Engeli aşamadınız "<<"Güncel can durumu:"<<karakter.can<<endl;
//                 karakter.can--;
//             }
            
//             cout<<"Güncel can durumu:"<<karakter.can<<endl;
//             break;
//         case 3:
//             ziplama();  
//             if(karakter.can >= 45 && karakter.can <= 100){
//                 cout<<"Engeli aştınız"<<endl;
//             }else if(karakter.can < 45 && karakter.can > 10){
//                 cout<<"Engeli aşamadınız "<<"Güncel can durumu:"<<karakter.can<<endl;
//                  karakter.can--;
//             }
            
//             cout<<"Güncel can durumu:"<<karakter.can<<endl;
//             break;
//          default:
//             cout<<"Geçersiz engel türü"<<endl;
            
//             if(karakter.can < 10){
//                 cout<<"Çok hata yaptınız"<<endl;
//             }
//     }

// }
/* #include<iostream>
using namespace std;

int toplama(int a, int b) {
    return a + b;
}

int carpma(int a, int b) {
    return a * b;
}

int main() {
    int n = 77; // Öğrenci numarası
    int b, x;
    cout << "b değerini giriniz: "; cin >> b;
    cout << "x değerini giriniz: "; cin >> x;
    
    if(x < 3) {
        cout << "x değeri 3'ten küçük olamaz";
        return 0;
    }
    
    int toplam = 0;
    for(int i = 1; i <= n; i++) {
        int yi = carpma(x, x) + carpma(2, b) + i;
        toplam = toplama(toplam, yi);
        cout << "y" << i << ": " << yi << endl;
    }
    
    cout << "Toplam: " << toplam << endl;
    return 0;
} */
#include<iostream>
using namespace std;

int toplama(int a, int b){
    return a + b;
}
int us(int a){
    return a*a;
}
int carpma(int a, int b){
    return a*b;
}
int main(){
    int n = 10;
    int a,b;
    cout<<"a ve b değerini giriniz:";cin>>a>>b;
    if(a<5){
        cout<<"a değeri 5 den büyük olmalıdır.";
        return 0;
    }
    int toplam =0;
    for (int i=1; i<n;i++){
        int y = us(a) + carpma(3,b) -i;       
        cout<<"y"<<i<<":"<<y<<endl;
        toplam += y;
    }
    cout<<"Toplam:"<<toplam<<endl;
    return 0;
}