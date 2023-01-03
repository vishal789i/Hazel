#pragma once

#ifdef HZ_PLATFORM_WINDOWS

extern Hazel::Application* Hazel::CreateApplication();

int main(int argc, char** argv)
{
	printf("Hellow World");
	auto app = Hazel::CreateApplication();
	app->Run();

}


#endif // HZ_PLATFORM_WINDOWS
