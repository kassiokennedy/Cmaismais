// https://www.hackerrank.com/challenges/cpp-input-and-output/problem?isFullScreen=true
/*
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int a=1;
int b=1;
int c=1;

int main() {
    //Enter your code here. Read input from STDIN. Print output to STDOUT
    cin >> a >> b >> c;
    cout << a + b + c << endl;
    return 0;
}
*/
#include <nana/gui/wvl.hpp>
#include <nana/gui/widgets/button.hpp>

int main(){
     using namespace nana;
     form fm;
     fm.caption("Hello World");
     button btn(fm, rectangle(20, 20, 150, 30));
     btn.caption("Quit");
     btn.events().click(API::exit);
     fm.show();
     exec();
}
