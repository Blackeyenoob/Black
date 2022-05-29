#pragma once
#ifdef BK_PLATFORM_WINDOWS

extern Black::Application* Black::CreateApplication();
int main(int argc,char ** argv) {
	Black::Log::Init();
	BK_CORE_WARN("Initialized Log!");
	int a = 5;
	BK_INFO("Hello! Var={0}", a);
	auto app = Black::CreateApplication();
	app->Run();
	delete app; 
}


#endif // BK_PLATFORM_WINDOWS
