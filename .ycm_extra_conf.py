import os
import ycm_core
from clang_helpers import PrepareClangFlags

# Set this to the absolute path to the folder (NOT the file!) containing the
# compile_commands.json file to use that instead of 'flags'. See here for
# more details: http://clang.llvm.org/docs/JSONCompilationDatabase.html
# Most projects will NOT need to set this to anything; you can just change the
# 'flags' list of compilation flags. Notice that YCM itself uses that approach.
compilation_database_folder = ''

# These are the compilation flags that will be used in case there's no
# compilation database set.
def Settings(**kwargs):
    flags = [
            # THIS IS IMPORTANT! Without a "-std=<something>" flag, clang won't know which
            # language to use when compiling headers. So it will guess. Badly. So C++
            # headers will be compiled as C headers. You don't want that so ALWAYS specify
            # a "-std=<something>".
            # For a C project, you would set this to something like 'c99' instead of
            # 'c++11'.
            '-std=c++11',
            # ...and the same thing goes for the magic -x option which specifies the
            # language that the files to be compiled are written in. This is mostly
            # relevant for c++ headers.
            # For a C project, you would set this to 'c' instead of 'c++'.
            '-x',
            'c++',
            '-DQT_CORE_LIB',
            '-DQT_GUI_LIB',
            '-DQT_NETWORK_LIB',
            '-DQT_QML_LIB',
            '-DQT_QUICK_LIB',
            '-DQT_SQL_LIB',
            '-DQT_WIDGETS_LIB',
            '-DQT_XML_LIB',
            
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtConcurrent',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtCore',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtDBus',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtGui',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtNetwork',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtOpenGL',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtOpenGLExtensions',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtPlatformHeaders',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtPrintSupport',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtSql',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtTest',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtWidgets',
            '-I', '/usr/include/x86_64-linux-gnu/qt5/QtXml',

            '-I', '/usr/lib/x86_64-linux-gnu/qt5/mkspecs/linux-clang',
            '-I', '.',
            '-I', 'Tests',
    '-I', 'build',
    '-I', 'build/Tests']
    return{'flags':flags}
