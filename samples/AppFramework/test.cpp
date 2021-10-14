#include<Windows.h>
#include"AppFramework.hpp"

class TestWnd : public AppFramework<TestWnd>{

};

int WINAPI WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR pCmdLine,
    int nCmdShow
){

    TestWnd& app = TestWnd::GetInstance();
    
    try{
        app.InitWnd(hInstance, nCmdShow, 500, 500, "test", "Test");
    }
    catch(...){
        return 0;
    }

    app.RunApp();

    return 0;
}

