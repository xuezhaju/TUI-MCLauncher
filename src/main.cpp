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
	std::vector<std::string> tab_values{
		"tab_1",
		"tab_2",
		"tab_3",
	};
	int tab_selected = 0;
	auto tab_menu = Menu(&tab_values, &tab_selected);

	std::vector<std::string> tab_1_entries{
		"Forest",
		"Water",
		"I don't know",
	};
	int tab_1_selected = 0;

	std::vector<std::string> tab_2_entries{
		"Hello",
		"Hi",
		"Hay",
	};
	int tab_2_selected = 0;

	std::vector<std::string> tab_3_entries{
		"Table",
		"Nothing",
		"Is",
		"Empty",
	};
	int tab_3_selected = 0;
	auto tab_container = Container::Tab(
	{
		Radiobox(&tab_1_entries, &tab_1_selected),
		Radiobox(&tab_2_entries, &tab_2_selected),
		Radiobox(&tab_3_entries, &tab_3_selected),
	},
	&tab_selected);

	auto container = Container::Horizontal({
		tab_menu,
		tab_container,
	});

	auto renderer = Renderer(container, [&] {
	return hbox({
		tab_menu->Render(),
		separator(),
		tab_container->Render(),
	   }) |
	   border;
	});

	auto screen = ScreenInteractive::Fullscreen();
	screen.Loop(renderer);
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
