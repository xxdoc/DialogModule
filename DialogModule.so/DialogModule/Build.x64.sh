cd /home/samuel/Desktop/DialogModule/
g++ -c -std=c++11 main.cpp tinyfiledialogs.cpp -fPIC -m64
g++ main.o tinyfiledialogs.o -o DialogModule.x64/DialogModule.so -shared -fPIC -m64
