#include<SFML/graphics.hpp>
#include<bits/stdc++.h>

using namespace sf;
using namespace std;

signed main(){
	RenderWindow window(VideoMode({800, 800}), "Brain train", Style::Close | Style::Titlebar);
	while(window.isOpen()){
		while(const optional event = window.pollEvent()){
			if(event->is<Event::Closed>()){
				window.close();
			}
		}
	}
	return 0;
}
