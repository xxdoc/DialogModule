cd /Users/owner/Desktop/DialogModule/
g++ -c -std=c++11 main.cpp tinyfiledialogs.cpp -m64
g++ -c -ObjC windowgetcaption.m -m64
g++ main.o tinyfiledialogs.o windowgetcaption.o -o DialogModule.x64/DialogModule.dylib -shared -framework Cocoa -m64