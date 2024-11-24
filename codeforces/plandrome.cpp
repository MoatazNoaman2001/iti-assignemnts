#include<iostream>
#include<string>

using namespace std;


int main(){
    string str;
    cin >> str;
    
    int i = 0, h =str.size() -1 ;
    while (i < h)
    {

        if (str[i] == '?'){
            str[i] = str[h];
        }else if (str[h] == '?'){
            str[h] = str[i];
        }
        if (str[i] == '?' && str[h] == '?') {
            str[i] = str[h] = 'a';
        }
        i++;
        h--;
    }
    
    cout <<str<< endl;
}