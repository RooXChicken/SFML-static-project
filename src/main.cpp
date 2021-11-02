#include <SFML/Graphics.hpp>

// when using these, you dont have to specify sf:: or std:: in front of certain functions.
using namespace std;
using namespace sf;

int main( int argc, char** argv )
{
	RenderWindow appWindow( sf::VideoMode( 800, 600, 32 ), "App" );
	Event appEvent;
	
	while ( appWindow.isOpen() )
	{
		while ( appWindow.pollEvent( appEvent ) )
		{
			if ( appEvent.type == Event::Closed )
				appWindow.close();
		}
		
		appWindow.clear();
		appWindow.display();
	}
	
	return 0;
}