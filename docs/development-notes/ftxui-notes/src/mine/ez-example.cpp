
#include <ftxui/dom/elements.hpp>
#include <stdlib.h>                // for EXIT_SUCCESS
#include <ftxui/screen/screen.hpp>  // for Full, Screen
#include <memory>                   // for allocator
 
#include "ftxui/dom/node.hpp"      // for Render
#include "ftxui/screen/color.hpp"  // for ftxui

#include <iostream>

using namespace ftxui;
using namespace std;

int main(void){
	auto document = text("qwq") | color(Color::Pink1) | border ;

	auto screen = Screen::Create(
		Dimension::Full(),  // width
		Dimension::Full()   // height
	);
	
	Render(screen, document);
	screen.Print();
	
	
	return 0;
}
