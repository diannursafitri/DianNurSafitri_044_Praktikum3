#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

int main()

{
      char string1 [] ="universitas negeri surabaya";

      cout<<"Konversi String ke huruf Kapital"<<endl;
      cout<<"--------------------------------"<<endl;
      cout<<"string1 : "<<string1<<endl;

      strupr(string1);
      cout<<"\nstring1 setelah dikonversi : "<<string1<<endl;
}
