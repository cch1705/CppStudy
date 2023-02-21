#include <iostream>

using namespace std;

int g_var = 0; // Global variable

int func_1(int par) {
    int l_var = 0; // Local variable (func_1)
    l_var++;
    par++;
    return par + l_var;
}

int func_2(int par) {
    g_var++;
    return par + g_var;
}

int func_3(void) {
    static int s_var = 0; // Static variable (func_3)
    s_var++;
    return s_var;
}

int main(void) {
    int l_var = 0; // Local variable (main)
    
    cout << "func_1(l_var) : " << func_1(l_var) << endl;
    cout << "l_var : " << l_var << endl;
    
    cout << "func_2(l_var) : " << func_2(l_var) << endl;
    cout << "func_2(g_var) : " << func_2(g_var) << endl;
    cout << "g_var : " << g_var << endl;

    for (int i=0; i<5; i++)
        cout << "func_3() : " << func_3() << endl;
    
    return 0;
}