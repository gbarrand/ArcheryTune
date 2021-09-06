// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#include "../ArcheryTune/main"

typedef ArcheryTune::main app_main_t;

#include <exlib/app/Cocoa/main.mm>

int main(int argc,char** argv) {return exlib_main<ArcheryTune::main>("ArcheryTune",argc,argv);}

//exlib_build_use inlib expat
//exlib_build_use exlib png jpeg zlib inlib_glutess freetype
//exlib_build_use AGL Cocoa

