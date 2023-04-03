#include<iostream>
#include<cstring>
using namespace std;
class hero{
    // string health;
    private:
     int health;
    public:
    char *name;
    char level;
    static int timetocomp;
    //constructor
   hero() {
        cout<<"constructor called"<<endl;
        name=new char[100];
    }
    //parameterized constructor
    hero(char level,int health){
        // cout<<"second->"<<this<<endl;
        this -> level=level;
        this ->health=health;
    }
    //copy constructor
    hero(hero& temp){
        char *ch=new char(strlen(temp.name)+1);
        strcpy(ch,temp.name);
        this->name=ch;
        cout<<"copy constructor"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
 
    int gethealth(){
        return health; 
    }
    void sethealth(int h){
        health=h;
    }
void setlevel(char ch){
    level=ch;
}
void setname(char name[]){
    strcpy(this->name,name);
}
void print(){

    cout<<level<<endl;
    cout<<this->health<<endl;
    cout<<this->name<<endl;
}
static int random(){
// cout<<timetocomp<<endl;
return timetocomp;
}
//destructor
~hero(){
    cout<<"destructor called"<<endl;
}
     
};

int hero::timetocomp= 5; 
int main(){
    cout<<hero::timetocomp<<endl;

// hero a; 
// cout<<a.timetocomp<<endl;

cout<<hero::random()<<endl;

















//     //static
// hero a;
// //dyanmic
// hero *b=new hero();
// //manually call
// delete b;


















//  hero hero1;
// hero1.sethealth(12);
// hero1.setlevel('A');
// char name[8]="aarushi";
// hero1.setname(name);
// hero1.print();

// //use default copy constructor
// hero hero2(hero1);
// hero2.print();
// hero1.name[0]='g';
// hero1.print();
// hero2.print();


// hero1=hero2;
// hero1.print();
// hero2.print();









// hero s('A',40);
// s.print();
// hero r(s);
// r.print(); 


















// hero happy('A',60);
// cout<<&happy<<endl;
// happy.print();
// happy.setlevel('A');



// hero *h=new hero;







//     //statically allocation 
//     hero happy;
//     //dynamicall alloocation
//     hero *h=new hero;
//     h->setlevel('A');
//     cout<<(*h).level<<endl;
//     cout<<h->level<<endl; 
//     // happy.health=70;
//     // cout<<happy.gethealth()<<endl;
//     // happy.level='A';
//     // happy.sethealth(70);
//     // // cout<<sizeof(h1)<<endl;
//     // cout<<happy.name<<endl;
//     // // cout<<happy.health<<endl;
//     // cout<<happy.gethealth()<<endl;
//     // cout<<happy.level<<endl;
     return 0;
 }
