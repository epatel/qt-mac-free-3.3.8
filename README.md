# Qt 3.3.8

Modified Qt version 3.3.8 to compile on Mac 10.8, with Xcode 4.6.
Requires SDK 10.6 which can be extracted from older Xcode bundle.
Also needs to `./configure -static` due to some dylib lookup problem.
