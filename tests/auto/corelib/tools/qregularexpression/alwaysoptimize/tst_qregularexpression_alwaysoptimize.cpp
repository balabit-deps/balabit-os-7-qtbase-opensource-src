/****************************************************************************
**
** Copyright (C) 2012 Giuseppe D'Angelo <dangelog@gmail.com>.
** Contact: https://www.qt.io/licensing/
**
** This file is part of the test suite of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:GPL-EXCEPT$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and The Qt Company. For licensing terms
** and conditions see https://www.qt.io/terms-conditions. For further
** information use the contact form at https://www.qt.io/contact-us.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3 as published by the Free Software
** Foundation with exceptions as appearing in the file LICENSE.GPL3-EXCEPT
** included in the packaging of this file. Please review the following
** information to ensure the GNU General Public License requirements will
** be met: https://www.gnu.org/licenses/gpl-3.0.html.
**
** $QT_END_LICENSE$
**
****************************************************************************/

#include <QtTest/QtTest>
#include "../tst_qregularexpression.h"

class tst_QRegularExpression_AlwaysOptimize : public tst_QRegularExpression
{
    Q_OBJECT

private slots:
    void initTestCase();
};

QT_BEGIN_NAMESPACE
extern Q_CORE_EXPORT unsigned int qt_qregularexpression_optimize_after_use_count; // from qregularexpression.cpp
QT_END_NAMESPACE

void tst_QRegularExpression_AlwaysOptimize::initTestCase()
{
    qt_qregularexpression_optimize_after_use_count = 1;
}

QTEST_APPLESS_MAIN(tst_QRegularExpression_AlwaysOptimize)

#include "tst_qregularexpression_alwaysoptimize.moc"
