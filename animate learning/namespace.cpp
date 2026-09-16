#include <iostream>
using namespace std;

namespace teamA{
    string name = "Ben";
}
namespace teamB{
    string name = "John";

    void func(){
        cout<<"name in now is :"<<name<<endl;
        cout<<"name in teamA is :"<<teamA::name<<endl;
    }
}

int main(){
    using namespace teamB;
    func();
    return 0;
}

//本项目至《看漫画学C++》第二单元结束