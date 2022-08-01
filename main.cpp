#include <iostream>

using namespace std;

int main(int argc, char ** argv){
    auto result = (10 <=> 20) > 0;
    cout << result << endl;
}