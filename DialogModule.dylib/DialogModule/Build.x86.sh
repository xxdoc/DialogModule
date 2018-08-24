cd /Users/owner/Desktop/DialogModule/
g++ -c -std=c++11 main.cpp tinyfiledialogs.cpp -m32
g++ -c -ObjC cocoa.m -m32
g++ main.o tinyfiledialogs.o cocoa.o -o DialogModule.x86/DialogModule.dylib -shared -framework Cocoa -m32
