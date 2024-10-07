#include <iostream>
#include <string>

int main() {


    std::string str="saippuakivikauppias";
    std::string rev;

    int len=(int)str.length();

    std::cout<<len<<std::endl;

    int i,j;

    rev.resize(len);

    // C++ resize

    for(i=0, j=len-1; i<len; i++,j--) {
        rev[i]=str[j];
    }

    rev[len]='\0';

    for(i=0; str[i]!='\0' && rev[i]!='\0'; i++) {
        if(str[i]-rev[i]!=32 && str[i]-rev[i]!=-32 && str[i]-rev[i]!=0) {
            break;
        }
    }

    if(str[i]=='\0' && rev[i]=='\0')
        std::cout<<"palindrome"<<std::endl;
    else std::cout<<"not a palindrome"<<std::endl;

    return 0;
}
