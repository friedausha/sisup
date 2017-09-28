#include <bits/stdc++.h>
#include <sys/stat.h>
#include <zconf.h>

using namespace std;
int main(){
    pid_t pid, sid;
    pid = fork();
    if(pid < 0 ){
        cout << "0";
        exit(EXIT_FAILURE);
    }
    if(pid > 0){
        cout << "1";
        exit(EXIT_SUCCESS);
    }
    umask(0);
    sid = setsid();
    if(sid < 0){
        cout << "2" ;
        exit(EXIT_FAILURE);
    }
    cout << "p";
    /*close(STDIN_FILENO);
    close(STDOUT_FILENO);
    close(STDERR_FILENO);*/
    while(1)
    {
        struct stat a = {0};
        cout << "a";
        if(stat("stop.jpg", &a)!=-1){
            exit(0);
        }
        else system("exec rm ^/home/CLionProjects/codes/(.+?)(\\.png)?$");
        sleep(39);
    }
    exit(EXIT_SUCCESS);
}