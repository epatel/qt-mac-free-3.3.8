/****************************************************************************
** $Id: qt/sound.h   3.3.8   edited Jan 11 14:37 $
**
** Copyright (C) 1992-2007 Trolltech ASA.  All rights reserved.
**
** This file is part of an example program for Qt.  This example
** program may be used, distributed and modified without limitation.
**
*****************************************************************************/
#ifndef PLAY_H
#define PLAY_H

#include "qsound.h"
#include <qmainwindow.h>

class SoundPlayer : public QMainWindow {
    Q_OBJECT
public:
    SoundPlayer();

public slots:
    void doPlay1();
    void doPlay2();
    void doPlay3();
    void doPlay4();
    void doPlay34();
    void doPlay1234();

private:
    QSound bucket3;
    QSound bucket4;
};

#endif
