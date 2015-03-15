
```
svn checkout http://sane-evolution.googlecode.com/svn/trunk/ sane-evolution-read-only
```

  * do:
```
cd sane-evolution-read-only
./autogen.sh
./configure
make
```

  * if you want to test without installing:
```
LD_LIBRARY_PATH=$(pwd)/backend/.libs tiffscan --list-devices
```