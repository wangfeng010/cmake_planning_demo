# include <iostream>
# include "pnc_map.h"
using std::cout,std::endl;

void mapTest(){
    cout << "this is pnc_map test" << endl;
    PNC_Map mymap;
    mymap.mapInfo();
}

int main(){
    mapTest();
    return 0;
}