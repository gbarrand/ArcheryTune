
LOCAL_PATH := $(call my-dir)

include $(CLEAR_VARS)

LOCAL_MODULE    := ArcheryTune

# -DWALL_DATA_CLIENT
# -DINLIB_MEM

LOCAL_CFLAGS := \
 -DEXLIB_HAS_GL_VBO\
 -I../../inexlib/inlib\
 -I../../inexlib/exlib\
 \
 -I../../inexlib/ourex/expat/include\
 \
 -I../../inexlib/ourex/freetype/include\
 -I../../inexlib/ourex/freetype/include/freetype\
 -I../../inexlib/ourex/freetype/src/builds\
 \
 -I../../inexlib/ourex/glutess\
 \
 -I../../inexlib/ourex/jpeg/jpeg\
 \
 -I../../inexlib/ourex/png/png\
 \
 -I../../inexlib/ourex/gl2ps\
 \
 -I../../inexlib/ourex/zlib/include


EXPAT_SRC_FILES := \
 ../../../inexlib/ourex/expat/source/xmlparse.cpp\
 ../../../inexlib/ourex/expat/source/xmlrole.cpp\
 ../../../inexlib/ourex/expat/source/xmltok.cpp

FREETYPE_SRC_FILES := \
 ../../../inexlib/ourex/freetype/src/builds/unix/ftsystem.c\
 ../../../inexlib/ourex/freetype/src/base/ftdebug.c\
 ../../../inexlib/ourex/freetype/src/base/ftinit.c\
 ../../../inexlib/ourex/freetype/src/base/ftbase.c\
 ../../../inexlib/ourex/freetype/src/base/ftbbox.c\
 ../../../inexlib/ourex/freetype/src/base/ftbdf.c\
 ../../../inexlib/ourex/freetype/src/base/ftglyph.c\
 ../../../inexlib/ourex/freetype/src/base/ftmm.c\
 ../../../inexlib/ourex/freetype/src/base/ftpfr.c\
 ../../../inexlib/ourex/freetype/src/base/ftstroke.c\
 ../../../inexlib/ourex/freetype/src/base/fttype1.c\
 ../../../inexlib/ourex/freetype/src/base/ftwinfnt.c\
 ../../../inexlib/ourex/freetype/src/base/ftxf86.c\
 ../../../inexlib/ourex/freetype/src/gzip/ftgzip.c\
 ../../../inexlib/ourex/freetype/src/autohint/autohint.c\
 ../../../inexlib/ourex/freetype/src/bdf/bdf.c\
 ../../../inexlib/ourex/freetype/src/cache/ftcache.c\
 ../../../inexlib/ourex/freetype/src/cff/cff.c\
 ../../../inexlib/ourex/freetype/src/cid/type1cid.c\
 ../../../inexlib/ourex/freetype/src/lzw/ftlzw.c\
 ../../../inexlib/ourex/freetype/src/pcf/pcf.c\
 ../../../inexlib/ourex/freetype/src/pfr/pfr.c\
 ../../../inexlib/ourex/freetype/src/psaux/psaux.c\
 ../../../inexlib/ourex/freetype/src/pshinter/pshinter.c\
 ../../../inexlib/ourex/freetype/src/psnames/psmodule.c\
 ../../../inexlib/ourex/freetype/src/raster/raster.c\
 ../../../inexlib/ourex/freetype/src/sfnt/sfnt.c\
 ../../../inexlib/ourex/freetype/src/smooth/smooth.c\
 ../../../inexlib/ourex/freetype/src/truetype/truetype.c\
 ../../../inexlib/ourex/freetype/src/type1/type1.c\
 ../../../inexlib/ourex/freetype/src/type42/type42.c\
 ../../../inexlib/ourex/freetype/src/winfonts/winfnt.c

GLUTESS_SRC_FILES := \
 ../../../inexlib/ourex/glutess/src/dict.c\
 ../../../inexlib/ourex/glutess/src/geom.c\
 ../../../inexlib/ourex/glutess/src/memalloc.c\
 ../../../inexlib/ourex/glutess/src/mesh.c\
 ../../../inexlib/ourex/glutess/src/normal.c\
 ../../../inexlib/ourex/glutess/src/priorityq.c\
 ../../../inexlib/ourex/glutess/src/render.c\
 ../../../inexlib/ourex/glutess/src/sweep.c\
 ../../../inexlib/ourex/glutess/src/tess.c\
 ../../../inexlib/ourex/glutess/src/tessmono.c

JPEG_SRC_FILES := \
 ../../../inexlib/ourex/jpeg/source/cdjpeg.c\
 ../../../inexlib/ourex/jpeg/source/jcapimin.c\
 ../../../inexlib/ourex/jpeg/source/jcapistd.c\
 ../../../inexlib/ourex/jpeg/source/jccoefct.c\
 ../../../inexlib/ourex/jpeg/source/jccolor.c\
 ../../../inexlib/ourex/jpeg/source/jcdctmgr.c\
 ../../../inexlib/ourex/jpeg/source/jchuff.c\
 ../../../inexlib/ourex/jpeg/source/jcinit.c\
 ../../../inexlib/ourex/jpeg/source/jcmainct.c\
 ../../../inexlib/ourex/jpeg/source/jcmarker.c\
 ../../../inexlib/ourex/jpeg/source/jcmaster.c\
 ../../../inexlib/ourex/jpeg/source/jcomapi.c\
 ../../../inexlib/ourex/jpeg/source/jcparam.c\
 ../../../inexlib/ourex/jpeg/source/jcphuff.c\
 ../../../inexlib/ourex/jpeg/source/jcprepct.c\
 ../../../inexlib/ourex/jpeg/source/jcsample.c\
 ../../../inexlib/ourex/jpeg/source/jctrans.c\
 ../../../inexlib/ourex/jpeg/source/jdapimin.c\
 ../../../inexlib/ourex/jpeg/source/jdapistd.c\
 ../../../inexlib/ourex/jpeg/source/jdatadst.c\
 ../../../inexlib/ourex/jpeg/source/jdatasrc.c\
 ../../../inexlib/ourex/jpeg/source/jdcoefct.c\
 ../../../inexlib/ourex/jpeg/source/jdcolor.c\
 ../../../inexlib/ourex/jpeg/source/jddctmgr.c\
 ../../../inexlib/ourex/jpeg/source/jdhuff.c\
 ../../../inexlib/ourex/jpeg/source/jdinput.c\
 ../../../inexlib/ourex/jpeg/source/jdmainct.c\
 ../../../inexlib/ourex/jpeg/source/jdmarker.c\
 ../../../inexlib/ourex/jpeg/source/jdmaster.c\
 ../../../inexlib/ourex/jpeg/source/jdmerge.c\
 ../../../inexlib/ourex/jpeg/source/jdphuff.c\
 ../../../inexlib/ourex/jpeg/source/jdpostct.c\
 ../../../inexlib/ourex/jpeg/source/jdsample.c\
 ../../../inexlib/ourex/jpeg/source/jdtrans.c\
 ../../../inexlib/ourex/jpeg/source/jerror.c\
 ../../../inexlib/ourex/jpeg/source/jfdctflt.c\
 ../../../inexlib/ourex/jpeg/source/jfdctfst.c\
 ../../../inexlib/ourex/jpeg/source/jfdctint.c\
 ../../../inexlib/ourex/jpeg/source/jidctflt.c\
 ../../../inexlib/ourex/jpeg/source/jidctfst.c\
 ../../../inexlib/ourex/jpeg/source/jidctint.c\
 ../../../inexlib/ourex/jpeg/source/jidctred.c\
 ../../../inexlib/ourex/jpeg/source/jmemansi.c\
 ../../../inexlib/ourex/jpeg/source/jmemmgr.c\
 ../../../inexlib/ourex/jpeg/source/jquant1.c\
 ../../../inexlib/ourex/jpeg/source/jquant2.c\
 ../../../inexlib/ourex/jpeg/source/jutils.c\
 ../../../inexlib/ourex/jpeg/source/rdbmp.c\
 ../../../inexlib/ourex/jpeg/source/rdcolmap.c\
 ../../../inexlib/ourex/jpeg/source/rdgif.c\
 ../../../inexlib/ourex/jpeg/source/rdppm.c\
 ../../../inexlib/ourex/jpeg/source/rdrle.c\
 ../../../inexlib/ourex/jpeg/source/rdswitch.c\
 ../../../inexlib/ourex/jpeg/source/rdtarga.c\
 ../../../inexlib/ourex/jpeg/source/transupp.c\
 ../../../inexlib/ourex/jpeg/source/wrbmp.c\
 ../../../inexlib/ourex/jpeg/source/wrgif.c\
 ../../../inexlib/ourex/jpeg/source/wrppm.c\
 ../../../inexlib/ourex/jpeg/source/wrrle.c\
 ../../../inexlib/ourex/jpeg/source/wrtarga.c

PNG_SRC_FILES := \
 ../../../inexlib/ourex/png/source/png.c\
 ../../../inexlib/ourex/png/source/pngerror.c\
 ../../../inexlib/ourex/png/source/pngget.c\
 ../../../inexlib/ourex/png/source/pngmem.c\
 ../../../inexlib/ourex/png/source/pngpread.c\
 ../../../inexlib/ourex/png/source/pngread.c\
 ../../../inexlib/ourex/png/source/pngrio.c\
 ../../../inexlib/ourex/png/source/pngrtran.c\
 ../../../inexlib/ourex/png/source/pngrutil.c\
 ../../../inexlib/ourex/png/source/pngset.c\
 ../../../inexlib/ourex/png/source/pngtrans.c\
 ../../../inexlib/ourex/png/source/pngwio.c\
 ../../../inexlib/ourex/png/source/pngwrite.c\
 ../../../inexlib/ourex/png/source/pngwtran.c\
 ../../../inexlib/ourex/png/source/pngwutil.c

CSZ_SRC_FILES := \
 ../../../inexlib/ourex/csz/src/inflate.c

GL2PS_SRC_FILES := \
 ../../../inexlib/ourex/gl2ps/source/gl2ps.c

# zlib exists on Android, but for consistency with other platforms
# we take our own.
ZLIB_SRC_FILES := \
 ../../../inexlib/ourex/zlib/source/adler32.c\
 ../../../inexlib/ourex/zlib/source/compress.c\
 ../../../inexlib/ourex/zlib/source/crc32.c\
 ../../../inexlib/ourex/zlib/source/deflate.c\
 ../../../inexlib/ourex/zlib/source/gzio.c\
 ../../../inexlib/ourex/zlib/source/infblock.c\
 ../../../inexlib/ourex/zlib/source/infcodes.c\
 ../../../inexlib/ourex/zlib/source/inffast.c\
 ../../../inexlib/ourex/zlib/source/inflate.c\
 ../../../inexlib/ourex/zlib/source/inftrees.c\
 ../../../inexlib/ourex/zlib/source/infutil.c\
 ../../../inexlib/ourex/zlib/source/trees.c\
 ../../../inexlib/ourex/zlib/source/uncompr.c\
 ../../../inexlib/ourex/zlib/source/zutil.c

LOCAL_SRC_FILES := \
 $(GLUTESS_SRC_FILES)\
 $(EXPAT_SRC_FILES)\
 $(FREETYPE_SRC_FILES)\
 $(JPEG_SRC_FILES)\
 $(ZLIB_SRC_FILES)\
 $(PNG_SRC_FILES)\
 $(GL2PS_SRC_FILES)\
 $(CSZ_SRC_FILES)\
 main.cpp

LOCAL_LDLIBS := -llog -landroid -lEGL -lGLESv1_CM

LOCAL_STATIC_LIBRARIES := android_native_app_glue

include $(BUILD_SHARED_LIBRARY)

$(call import-module,android/native_app_glue)
