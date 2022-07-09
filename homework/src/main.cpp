#include <iostream>
#include <fstream>
#include <vector>
#include <google/protobuf/message.h> // for protobuf

#include "../include/player.pb.h" // for protobuf source file

int main()
{
    // TODO 2: initialize the object of student
    player::Player player1;

    // see the debug string
    std::cout << player1.DebugString() << std::endl;

    // serialize to file
    std::cout << "serialize to file." << std::endl;
    std::fstream output("./output.bin", std::ios::out | std::ios::binary );
    player1.SerializeToOstream(&output); 

}