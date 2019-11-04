
#include <node.h>
#include <iostream>

using namespace v8;
using namespace std;

void NativeFunction(const FunctionCallbackInfo<Value>& args){
    v8::Isolate *pIsolate = args.GetIsolate();

    v8::String::Utf8Value param1(pIsolate, args[0]->ToString());
    v8::String::Utf8Value param2(pIsolate, args[1]->ToString());
    v8::String::Utf8Value param3(pIsolate, args[2]->ToString());
    
    printf("Args1 : %s \n" , string(*param1).c_str());
    printf("Args2 : %s \n" , string(*param2).c_str());
    printf("Args3 : %s \n" , string(*param3).c_str());
}

// TODO 진입점
void Initailize(Local<Object> exports){
    NODE_SET_METHOD(exports, "AddonFunction" , NativeFunction);
}

NODE_MODULE(addon, Initailize);
