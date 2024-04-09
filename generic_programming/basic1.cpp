#include<iostream>
using namespace std;
//taking both parametrs same
template <class t>
t add(t a,t b){
    return a+b;
}
// taking both parametrs different
template <class t1,class t2>
t2 add(t1 x,t2 y){
    return a+b;
}
int main(){
    cout<<"sum of 4 and 2 is :"<<add(4,2);
    cout<<"sum of 1.1 and 3 is :"<<add(1.1,3);
    return 0;
}