// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file ArcheryTune.license for terms.

#include "../ArcheryTune/main"

#define EXLIB_APP ArcheryTune

#import <exlib/app/Cocoa/main_mm>

int main(int argc,char** argv) {
  //{for(int i=0;i<argc;i++) ::printf("debug : arg %d : \"%s\"\n",i,argv[i]);}
  std::vector<std::string> v;
  if(argc) v.push_back(argv[0]); //program name.
  v.push_back("-land");
 {for(int i=1;i<argc;i++) v.push_back(argv[i]);}
  inlib::args args(v);
  int _argc;
  char** _argv;
  args.argcv(_argc,_argv);
  int status = exlib_main(_argc,_argv);
  inlib::args::delete_argcv(_argc,_argv);
  return status;
}
