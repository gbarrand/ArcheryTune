// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#include "../../ArcheryTune/main"

#define EXLIB_APP ArcheryTune
#define EXLIB_APP_DOMAIN "fr.in2p3.lal"

#include <exlib/app/Android/main_cpp>

void android_main(struct android_app* a_state) {return exlib_main(a_state);}
