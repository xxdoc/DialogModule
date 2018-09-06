cd /home/owner/Desktop/DialogModule/
g++ -c -std=c++11 main.cpp tinyfiledialogs.cpp -fPIC -m32
g++ main.o tinyfiledialogs.o -o DialogModule.x86/DialogModule.so -shared -fPIC -m32
