#ifndef CLIENTCOUNT_GLOBAL_H
#define CLIENTCOUNT_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(CLIENTCOUNT_LIBRARY)
#  define CLIENTCOUNTSHARED_EXPORT Q_DECL_EXPORT
#else
#  define CLIENTCOUNTSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // CLIENTCOUNT_GLOBAL_H
