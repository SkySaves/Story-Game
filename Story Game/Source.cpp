#include <iostream>
#include <chrono>
#include <thread>
void sleep(int time) {
    std::this_thread::sleep_for(std::chrono::milliseconds(time * 1000));
}
int main() {
    std::string player_name;
    int player_age;
    char x1;
    bool route_1;
    bool route_2;
    bool route_3;
    bool route_4;
    char reach;
    char checkpoint1;

    std::cout << "Hello player! Please enter your name:\n";
    std::cin >> player_name;

    std::cout << "How old are you?\n";
    std::cin >> player_age;
    if (player_age > 18) {
        std::cout << "You must be under the age of 18 to play\n";
        return 0;
    }
    std::cout << "Welcome to the pedophile den son\n";
    std::cout << "So begins your long adventure to make it out\n";
    sleep(2);
    std::cout << "You fumble around in the darkness, feeling the floors and walls as it is pitch dark around you.\n";
    sleep(5);
    std::cout << "The smell of old man cock and balls pierces your nose with a devastating whiff\n";
    sleep(5);
    std::cout << "'He.. Hello..?'\n";
    sleep(4);
    std::cout << "...\n";
    sleep(3);
    std::cout << "Is anyone out there..?\n";
    sleep(3);
    std::cout << "Suddenly you hear a strike of a match and a flare of light illuminate a small area in the distance\n";
    sleep(5);
    std::cout << "You hesitantly make your way to the dimly lit area where the match was dropped\n";
    sleep(5);
    std::cout << "As you approach the light there is this sudden urge from your heart to run\n";
    sleep(5);
    std::cout << "'AHHH! GET OFF OF ME!'\n";
    std::cout << "A strong hand firmly grabs your wrist and begins to pull you into the darkness..\n";
    sleep(4);
    std::cout << "You fight and scream as much as you can but it is to no avail\n";
    sleep(4);
    std::cout << "*THUMP* you feel a sharp pain in you head and then your conciousness fades...\n";
    sleep(7);
    std::cout << "You wake up dazed and confused, what happened..? You look around you and you see dark, damp, concrete walls surrounding you with a metal bar door in the front\n";
    sleep(7);
    AskUser4:
    std::cout << "Do you bang on the door? y/n\n";
    std::cin >> x1;
    if (x1 == 'y') {
        route_1 = true;
        route_2 = false;
    }
    else {
        route_1 = false;
        route_2 = true;
    }
    while (route_1 == true) {
        std::cout << "The banging on the metal doors wakes the old man up that's sitting across the room\n";
        sleep(4);
        std::cout << "'LET ME OUT!!'\n";
        sleep(3);
        std::cout << "'shut up you' he says as he sprays a gas in your face\n";
        sleep(3);
        std::cout << "Your vision begins to blur and you close your eyes..\n";
        sleep(4);
        std::cout << "You wake up, your ass hole is sore, you've been raped.\n";
        sleep(2);
        std::cout << "Game Over\n";
        sleep(2);
        std::cout << "Would you like to play from the checkpoint? y/n\n";
        std::cin >> checkpoint1;
        if (checkpoint1 == 'y') {
            goto AskUser4;
        }
        else {
            std::cout << "Thank you for playing\n";
            break;
        }
        sleep(7);
        break;
    }
    while (route_2 == true) {
        std::cout << "You sit quietly and observe that the old man is sleeping in the chair across the room\n";
        sleep(5);
        std::cout << "You see keys dangling from a rope tied to his cock\n";
        std::cout << "Do you reach for them? y/n\n";
        std::cin >> reach;
    AskUser1:
        if (reach == 'y') {
            route_3 = true;
            route_4 = false;
            goto AskUser2;
        }
        else {
            route_4 = true;
            route_3 = false;
            goto AskUser3;
        }
        sleep(4);
    AskUser2:
        std::cout << "It's a reach but you can just barely fit your little child hands through the bar and around his cock to untie the keys\n";
        sleep(3);
        std::cout << "yuck...\n";
        sleep(3);
        std::cout << "You gently and queitly bring the keys through the bars and insert each one into the key hole until one clicks\n";
        sleep(6);
        std::cout << "Aha! You creak the door open and tip toe your way past the sleeping pedo\n";
        sleep(5);
        std::cout << "You manage to find your way through numerous corridors and steps to a rusty old door with a broken exit sign dangling by a wire above it\n";
        sleep(8);
        std::cout << "You burst through it and are met with warm sunlight on your face\n";
        sleep(5);
        std::cout << "Freedom...\n";
        sleep(3);
        std::cout << "Congrats, you won\n";
        sleep(2);
        std::cout << "Exit the game to play again :)\n";
        break;
    AskUser3:
        do {
            std::cout << "You look around at your surroundings for a different way out\n";
            sleep(4);
            std::cout << "My god, this idiot left a hole in the wall\n";
            std::cout << "You crawl through the hole and are blinded by bright lights on the other side\n";
            sleep(4);
            std::cout << "You crawled right onto the set of a Dr. Phil episode\n";
            sleep(4);
            std::cout << "Dr. Phil immediately stops talking to his guest and walks over to you\n";
            sleep(4);
            std::cout << "'Well well well.. about time you made it' he exclaims\n";
            sleep(4);
            std::cout << "He picks you up and gives you to Bhad Bhabie who is waiting behind a curtain\n";
            sleep(4);
            std::cout << "You are home";
            sleep(3);
            std::cout << "Thank you for playing, to play again, exit and restart :)\n";
            sleep(99);
            break;

        }     while (reach == false);
    }























}