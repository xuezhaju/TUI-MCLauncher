#include <ftxui/dom/elements.hpp>
#include <stdlib.h>                // for EXIT_SUCCESS
#include <ftxui/screen/screen.hpp>  // for Full, Screen
#include <memory>                   // for allocator
 
#include "ftxui/dom/node.hpp"      // for Render
#include "ftxui/screen/color.hpp"  // for ftxui
#include "ftxui/component/component.hpp"
#include "ftxui/component/screen_interactive.hpp"


#include <iostream>
#include <vector>

using namespace ftxui;
using namespace std;

void side_bar(){
	vector<string> bar_values {
		"个人中心",
		"下载",
		"版本",
		"设置"
	};
	int bar_selected = 0;
	auto sidbar = Menu(&bar_values, &bar_selected);


}

void main_page(){
	
}

void menu_render(){
	/* 可交互式屏幕 */
	auto screen = ScreenInteractive::Fullscreen();  // 全屏

	
}

int main(void){
	side_bar();

	return 0;
}
