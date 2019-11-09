//
//  Bits_To_Text.cpp
//  Project_Algorithm
//
//  Created by Langlet Maxime on 09/11/2019.
//  Copyright © 2019 Langlet Maxime. All rights reserved.
//

#include "Bits_To_Text.hpp"


string Bits_To_Text(string bits){
    string text("");
    stringstream sstream(bits);
    while(sstream.good()){
        bitset<8> bit;
        sstream >> bit;
        text += char(bit.to_ulong());
    }
    //cout << bits << endl;
    return text;
}
