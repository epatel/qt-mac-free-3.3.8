/****************************************************************************
** $Id: qt/main.cpp   3.3.8   edited Jan 11 14:37 $
**
** Copyright (C) 1992-2007 Trolltech ASA.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include "buttongroups.h"
#include <qapplication.h>

int main( int argc, char **argv )
{
    QApplication a( argc, argv );

    ButtonsGroups buttonsgroups;
    buttonsgroups.resize( 500, 250 );
    buttonsgroups.setCaption( "Qt Example - Buttongroups" );
    a.setMainWidget( &buttonsgroups );
    buttonsgroups.show();

    return a.exec();
}
