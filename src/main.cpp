#include <ftxui/component/component_options.hpp>
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

void side_bar();
void personal_center();
void dowload_page();
void setting();
void version();
void createOfflinePlayer();
void createOnlinePlayer();

Component createPlayerMenu();


struct PlayerMenuState{
	string playerName;
	string playerMessage;
	int creationDate;
	vector<int> method;// = {0, 1, 2}; // 用户创建账户的方式，0代表正版， 1代表离线， 2代表第三方认证
	bool playerModel;                  // 用户创建人物模型的方式，true为史蒂夫模型， false为Alex模型
};


vector<string> CreatedPlayersEnteries;
int CreatedPlayerSelected;

string playerName;

void side_bar(){
	std::vector<std::string> tab_values{
		"个人",
		"下载",
		"版本",
		"设置",
	};
	int tab_selected = 0;
	auto tab_menu = Menu(&tab_values, &tab_selected);

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
		createPlayerMenu(),
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
		tab_menu->Render() | Color::LightGreen(),
		separator(),
		tab_container->Render(),
	   }) |
	   border;
	});

	auto screen = ScreenInteractive::Fullscreen();
	screen.Loop(renderer);
}

void dowload_page(){
	
}

void createOfflinePlayer(){

}

void createOnlinePlayer(){
	
}

void createURLPlayer(){

}

void createPlayer(){

}

Component createPlayerMenu(){
	InputOption Inputoption;
	Inputoption.placeholder = "请输入名称...";
	Inputoption.multiline = false;

	MenuOption Menuoption;
	// Menuoption.Vertical;

	Component name_input = Input(&playerName, Inputoption);

	Component CreatedPlayerList = Menu(&CreatedPlayersEnteries, &CreatedPlayerSelected);

	Component sure_button = Button({
		.label = "创建",
		.on_click = [&]{createPlayer();},	
	});

	auto component = Container::Horizontal({
		Container::Vertical({
			name_input,
			sure_button,
		}) 
		|center | border,

		CreatedPlayerList | border,
	});
	
	return(component);
	
	/*
	auto renderer = Renderer(component, [&]{
		return(
			component -> Render()
			| border
		);
	});

	return(renderer);
	*/
}

void personal_center(){
	bool havePlayer = false;

	if (havePlayer){

	}

	else {
		createPlayerMenu();	
	}

}


void setting(){

}

void version(){

}

int main(void){
	side_bar();

	return 0;
}
