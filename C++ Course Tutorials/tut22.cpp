#include<iostream>
#include<string>
using namespace std;

//Nesting of member functions
string s;
 class binary
    {
        private:
        void chk_bin();
        
        public: 
        void read();
        void ones_complement();
        void display();
    };

    void binary :: read()
    {  
      
        cout<<"Enter the binary number"<<endl;
        cin>>s;
    }

    void binary :: chk_bin()
    {
        for ( int i = 0; i < s.length(); i++)
        {
            if (s.at(i)!='0' && s.at(i)!='1')
            {
                cout<<"Incorrect Binary Format"<<endl;
                exit(0);
            }
            
        }
        
    }

    void binary :: ones_complement()
    {
        chk_bin();
        for (int i = 0; i < s.length(); i++)
        {
            if (s.at(i)=='0')
            { s.at(i)='1'; }
            
            else
            { s.at(i) ='0';}
            
        }
    }

    void binary :: display(){
        cout<<"Displaying Binary Number"<<endl; 
        for (int i = 0; i < s.length(); i++)
        {
           cout<< s.at(i);
        } cout<<endl;
     }


   int main()
   {
        
         binary b;
         b.read();
         b.display();
         b.ones_complement();
         b.display();  
   
    return 0;
  }
