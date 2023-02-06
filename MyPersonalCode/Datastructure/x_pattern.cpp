#include<iostream>

int main(){
    int a = 1,b=9,c=9;
    for(int i=1;i<=5;i++){
        std::cout<<a;
        for(int k=c;k>2;k--){
            std::cout<<"-";
        }if(b==5){
            continue;
        }else
            std::cout<<b;
        for(int s=1;s<a;s++){
            std::cout<<"-";
        }std::cout<<"\n";
        for(int j=1;j<=a;j++){
            std::cout<<"-";
        }a+=1;
        c-=2;
        b--;
    }std::cout<<"----\n";
    for(int i=1;i<5;i++){
        a--;b++;
        for(int i=1;i<a;i++){
            std::cout<<"-";
        }std::cout<<a;
        for(int j=a;j<b-1;j++){
            std::cout<<"-";
        }std::cout<<b;
        for(int s=1;s<a;s++){
            std::cout<<"-";
        }std::cout<<"\n";
    }
    


    return 0;
}