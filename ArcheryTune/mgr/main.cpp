// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#include "../ArcheryTune/main"

#include <exlib/app/WebGL/main_cpp>

int main(int argc,char** argv) {return exlib_main<ArcheryTune::context,ArcheryTune::main>("ArcheryTune",argc,argv);}

//exlib_build_use inlib expat
//exlib_build_use exlib png jpeg zlib glutess freetype
