//
//  main.cpp
//  Project_Algorithm
//
//  Created by Langlet Maxime on 01/11/2019.
//  Copyright © 2019 Langlet Maxime. All rights reserved.
//

#include "Fasta_To_Bits.hpp"
#include "Score.hpp"


int main(int argc, const char * argv[]) {
    /*
    if(argc<=1){
        cout << "Argument demandé :" << argv[0]<<" [fichier] "<<endl;
        return 1;
    }
    */
    
    //ifstream input(argv[1]);
    ifstream input("/Users/langletmaxime/Desktop/P4/C++/swipe/P00533.fasta");
    Fasta_To_Bits(input);
    return 0;
}
