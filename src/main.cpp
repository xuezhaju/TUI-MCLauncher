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

int main(void){
	auto document = vbox(
		text("qwq") | color(Color::Pink1) | flex | border ,
		text("qwq") | color(Color::Red) | flex  | border
	);
	
	vector<string> left_menu_entries = {
		"个人中心",
		"整合包市场",
		"版本",
		"下载中心"
	};

	int left_menu_selected_index = 0;

	Component left_menu = 
		Menu(&left_menu_entries, &left_menu_selected_index);

	/* 可交互式屏幕 */
	auto screen = ScreenInteractive::Fullscreen();  // 全屏
	Component comp = Renderer([&]{
		// return document;
		return left_menu -> Render();
	});                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                      
	
	screen.Loop(comp);
	
	return 0;
}
