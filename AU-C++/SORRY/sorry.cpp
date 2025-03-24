// PROGRAM TO TOLD SORRY TO THE SISTER FOR DISTURBING HER AND MY MISTAKE ....

#include <iostream>
using namespace std;
class sorry{
    int numOfMistake;
    char Mistake;
    public:
    sorry(int n,char m){
        numOfMistake=n;
        Mistake=m;
    }

    void ask(){
        cout<<"Enter the mistake: ";
        cin>>Mistake;
    }
    void display(){
        for(int i=0;i<numOfMistake;i++){
            cout<<"I am sorry sister for : "<<Mistake<<endl;
        }
    }

};
int main(){
    int n;
    char m;
    
    cout<<"Enter the number of mistake: ";
    cin>>n;
    for(int i=0;i<=n;i++){
        cout<<"Enter the mistake: ";
        cin>>m;
    }
    cin>>m;
    sorry s(n,m);
    s.display();
    return 0;
}
