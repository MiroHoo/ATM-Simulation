#ifndef TALLETUSDLL_GLOBAL_H
#define TALLETUSDLL_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TALLETUSDLL_LIBRARY)
#  define TALLETUSDLL_EXPORT Q_DECL_EXPORT
#else
#  define TALLETUSDLL_EXPORT Q_DECL_IMPORT
#endif

#endif // TALLETUSDLL_GLOBAL_H
