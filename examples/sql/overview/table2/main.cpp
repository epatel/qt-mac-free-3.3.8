/****************************************************************************
** $Id: qt/main.cpp   3.3.8   edited Jan 11 14:37 $
**
** Copyright (C) 1992-2007 Trolltech ASA.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/

#include <qapplication.h>
#include <qsqldatabase.h>
#include <qsqlcursor.h>
#include <qdatatable.h>
#include "../connection.h"

int main( int argc, char *argv[] )
{
    QApplication app( argc, argv );

    if ( createConnections() ) {
	QSqlCursor staffCursor( "staff" );

	QDataTable *staffTable = new QDataTable( &staffCursor );

	app.setMainWidget( staffTable );

	staffTable->addColumn( "forename", "Forename" );
	staffTable->addColumn( "surname",  "Surname" );
	staffTable->addColumn( "salary",   "Annual Salary" );

	QStringList order = QStringList() << "surname" << "forename";
	staffTable->setSort( order );

	staffTable->refresh();
	staffTable->show();

	return app.exec();
    }

    return 1;
}
