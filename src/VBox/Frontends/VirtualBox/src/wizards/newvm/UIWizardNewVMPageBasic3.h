/** @file
 *
 * VBox frontends: Qt4 GUI ("VirtualBox"):
 * UIWizardNewVMPageBasic3 class declaration
 */

/*
 * Copyright (C) 2006-2012 Oracle Corporation
 *
 * This file is part of VirtualBox Open Source Edition (OSE), as
 * available from http://www.virtualbox.org. This file is free software;
 * you can redistribute it and/or modify it under the terms of the GNU
 * General Public License (GPL) as published by the Free Software
 * Foundation, in version 2 as it comes in the "COPYING" file of the
 * VirtualBox OSE distribution. VirtualBox OSE is distributed in the
 * hope that it will be useful, but WITHOUT ANY WARRANTY of any kind.
 */

#ifndef __UIWizardNewVMPageBasic3_h__
#define __UIWizardNewVMPageBasic3_h__

/* Local includes: */
#include "UIWizardPage.h"

/* Forward declarations: */
class QIRichTextLabel;
class QGroupBox;
class VBoxGuestRAMSlider;
class QILineEdit;
class QLabel;

/* 3rd page of the New Virtual Machine wizard: */
class UIWizardNewVMPageBasic3 : public UIWizardPage
{
    Q_OBJECT;

public:

    /* Constructor: */
    UIWizardNewVMPageBasic3();

private slots:

    /* Handlers: */
    void ramSliderValueChanged(int iValue);
    void ramEditorTextChanged(const QString &strText);

private:

    /* Translation stuff: */
    void retranslateUi();

    /* Prepare stuff: */
    void initializePage();

    /* Validation stuff: */
    bool isComplete() const;

    /* Widgets: */
    QIRichTextLabel *m_pLabel1;
    QIRichTextLabel *m_pLabel2;
    QGroupBox *m_pMemoryCnt;
    VBoxGuestRAMSlider *m_pRamSlider;
    QILineEdit *m_pRamEditor;
    QLabel *m_pRamMin;
    QLabel *m_pRamMax;
    QLabel *m_pRamUnits;
};

#endif // __UINewVMWzd_h__
