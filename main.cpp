#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
using namespace std;
unordered_map<string , string> adminmap ;
int flag=1;
string post;



class person{
    string name;
    string username;
    int age;
    string gender;
    string dob;
    string workplace;
    vector<person> friends;
    vector<string> post;


};
int signIn(){
    string userr="Ayush";
    string passwordd="Ayushkarn";
    string password;
    string username;
    cout<<"Enter your User-name: ";
    cin>>username;
    cout<<"Password: ";
    cin>>password;
    if(username==userr && passwordd==passwordd)
    {
        cout<<"SignIn Successful\n"<<endl;
        flag=0;
        return 1;
    }
    else
    {
        cout<<"Invalid username/password !\n";
        return 0;
    }

}
/*void signUp(){
    cout<<"username : ";
    string username;
    cin>>username;
    if(adminmap.find(username)==adminmap.end()){
        string password;
        cout<<"password :";
        cin>>password;
        adminmap.insert(username,password);
        cout<<"Sign Up successful \n";

    }
    else{
        cout<<"This username is not available\nTry something else\n";
        cout<<"username :";
        cin>>username;
    }
}
*/
void loginscreen(){
    cout<<"Press 1 for sign up\n";
    cout<<"Press 2 for sign in\n";
    cout<<"Press 3 for exit in\n";
    return ;
}

void afterlogin(){
    cout<<"Press 1 for writing a post\n";
    cout<<"Press 2 for logging out\n";
    return ;
}

void display(string catch_post)
{
    cout<<"||\t"<<catch_post<<"\t||\n";
}
int main(){
    int r1,r2;

    cout<<"welcome line likh dio\n\n";

    int s1a;//screen 1 variable are named as s1;
    while(flag)
    {
    loginscreen();
    cin>> s1a;
    switch (s1a)
    {
    case 1:

    break;
    case 2:
    r1=signIn();
    while(r1!=1)
    {
         if(r1!=1)
    {
        cout<<"Please Enter Username and Password Again"<<endl;
        r1=signIn();
    }
    }
    break;
    case 3:
        exit(1);
    default:
        cout<<"Invalid Choice\n";
        break;

    }
    }
        while(1)
        {
            afterlogin();
            cin>>r2;
            switch(r2)
            {
            case 1:
                {
                    cout<<"Write what's on your mind ?????";
                    cin>>post;
                    display(post);
                    break;
                }
            case 2:
                {
                    exit(1);
                }
            default:
                cout<<"Invalid Input";
            }
        }
    return 0;
}
