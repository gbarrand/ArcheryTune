
set save_dir="`pwd`"
cd ../../ourex/Python

set Python_home="`pwd`"
if ( "`uname | grep CYGWIN`" != "" ) then
  set Python_home="`cygpath -w ${Python_home}`"
endif

setenv PYTHONHOME "${Python_home}"

cd ${save_dir}
