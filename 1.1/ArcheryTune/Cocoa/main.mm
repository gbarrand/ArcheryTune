// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#include "../ArcheryTune/main"

typedef ArcheryTune::main app_main_t;

#import <exlib/app/Cocoa/main_mm>

int main(int argc,char** argv) {return exlib_main<ArcheryTune::context,ArcheryTune::main>("ArcheryTune",argc,argv);}
