#include <iostream>
#include<string>
using namespace std;
class binary{

string s;
public:
    void read(void);
    void chk_bin(void);
    void ones_comlement(void);
    void display(void);
    };
    void binary ::read(void){
        cout<<"enter binary number"<<endl;
        cin>>s;
    }
    void binary:: chk_bin(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)!='0' && s.at(i)!='1'){
            cout<<"incorrect binaary format"<<endl;
            exit(0);
        }
    }


    }
    void binary:: ones_comlement(void){
    for(int i=0;i<s.length();i++){
        if(s.at(i)=='1'){
            s.at(i)='0';
        }
         else {
            s.at(i)='1';
        }
    }


    }
     void binary:: display(void){
     for(int i=0;i<s.length();i++){
        cout<<s.at(i);
     }

     }

int main()
{
    cout << "Hello world!" << endl;
    binary b;
    b.read();
    b.chk_bin();
      b.display();
      cout<<endl;
    b.ones_comlement();
    b.display();
    return 0;
}
