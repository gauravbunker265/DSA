#include<bits/stdc++.h>
using namespace std;
int main(){
    int n=5;
    char arr[n]="1234";
    
    char *ptr = arr;
    cout<<arr<<endl;    //value ko print kr rha hai jb tk null ptr nui mil rha hai
    cout<<ptr<<endl;    //value ko print kr rha hai jb tk null ptr nui mil rha hai
    
    /*cout<<&arr<<endl;    
    cout<<&ptr<<endl;              isse addresh nhi print kyuki ese c++ nhi manta hai but aa bhi jaye to vo compile ka kamal hai bhai*/
    
    cout<<(void*)arr<<endl;     //charector array me addresh ko es type print karvate hai isme (void*) se type casting karvate hai 
    cout<<(void*)ptr<<endl;     //charector array me addresh ko es type print karvate hai isme (void*) se type casting karvate hai 
    
    cout<<static_cast<void*>(arr)<<endl;  //charector array m hum static cast se bhi addresh print karva sakte hai 
    cout<<static_cast<void*>(ptr)<<endl;

    char ch='a';
    cout<<ch<<endl;
    char* ptr1=&ch;
    cout<<ptr1<<endl;   //rendom value generate hogi kyuki jb ese null ptr milega waha tk k memory m already store charectors print karva dega 
    cout<<(void*)ptr1<<endl;    ////charector array me addresh ko es type print karvate hai isme (void*) se type casting karvate hai 
    
    cout<<&ch<<endl;        //isse addresh nhi print kyuki ese c++ nhi manta hai but aa bhi jaye to vo compile ka kamal hai bhai*/
    cout<<(void*)ch<<endl; 
    cout<<static_cast<void*>(ptr1)<<endl;   //yeh char m work to karta hai pr charector ke saath addres operator hona chaiye
    cout<<static_cast<void*>(&ch)<<endl;
    // cout<<static_cast<void*>(ch)<<endl;  //yeh char m work nhi karta hai bina addresh ke
    return 0;
}