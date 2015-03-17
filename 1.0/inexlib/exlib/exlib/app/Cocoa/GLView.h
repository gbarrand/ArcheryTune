// Copyright (C) 2010, Guy Barrand. All rights reserved.
// See the file exlib.license for terms.

#import <Cocoa/Cocoa.h>

namespace EXLIB_APP {class main;}

@interface GLView : NSOpenGLView {
  EXLIB_APP::main* m_main;
}
- (id)initWithFrame:(NSRect)rect;
- (void)dealloc;
- (void)drawRect:(NSRect)rect;
- (void)set_main:(EXLIB_APP::main*)a_main;

@end
