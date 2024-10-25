#include <iostream>;    
#include <vector>
using namespace std;
float argmax(const vector<float>& a) {

    float m;
    m = 0.0;
    int lexus = 0;
    for (int i = 0; i < a.size(); ++i) {
        if (a[i] > m) { lexus = i; m = a[i]; }
    }
    if (a.size() == 0) {
        return -1;
    }
    else {
        return lexus;
    }
};
int main()
{
    vector<float> a = { 1, 266, 3, 40, 5 };
    cout << argmax(a);
}