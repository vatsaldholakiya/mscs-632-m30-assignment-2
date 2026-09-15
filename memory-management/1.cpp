#include<iostream>
using namespace std;

int main(){
    int* numbers=new int[5];
    for(int i=0;i<5;i++)numbers[i]=(i+1)*10;

    cout<<"values: ";
    for(int i=0;i<5;i++)cout<<numbers[i]<<" ";
    cout<<"\n";

    delete[] numbers;
    numbers=nullptr;
    cout<<"memory manually released\n";

    char* photos[10];
    for(int i=0;i<10;i++)
        photos[i]=new char[1024*1024]();

    cout<<"allocated 10 MB of photos\n";

    for(int i=0;i<10;i++)
        delete[] photos[i];

    int* height=new int(8611);
    int* alias=height;

    cout<<"k2 height: "<<*height<<"\n";

    delete height;
    height=nullptr;

    cout<<"alias still points to "<<alias<<"\n";
    // cout<<*alias<<"\n"; // uncomment: use-after-free

    int* forgotten=new int[100];
    cout<<"intentionally leaked "<<100*sizeof(int)<<" bytes at "<<forgotten<<"\n";
}
