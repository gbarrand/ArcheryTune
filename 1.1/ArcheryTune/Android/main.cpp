// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#ifdef APP_USE_PYTHON
#undef Py_BUILD_CORE
#endif

#include "../ArcheryTune/main"

#include <exlib/app/Android/main_cpp>

void android_main(struct android_app* a_state) {return exlib_main<ArcheryTune::context,ArcheryTune::main>("ArcheryTune","fr.in2p3.lal",a_state);}

//exlib_build_use inlib expat
//exlib_build_use exlib png jpeg zlib glutess freetype
//exlib_build_use GL Android


