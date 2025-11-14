#include <iostream>
// #include <utility>
#include <vector>

using namespace std;



struct corners{
    float a,b,c,d;

};

int main (){
    vector<int>inty ; 

    inty.push_back(2);
    inty.push_back(3);
    inty.push_back(5);
    inty.push_back(6);
    inty.push_back(6);


    for (auto i = inty.begin() ; i !=inty.end(); ++i ){
        cout <<*i<<endl;
    }
}
    // vector<corners> corner;

//     corner.push_back({1,2,4,5});
//     corner.push_back({24,45,56,6});

//     for ( int i = 0 ; i< corner.size(); i++){
        
//     }
// }

