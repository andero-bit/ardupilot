#pragma once

#include "AP_OSD_Panel.h"

class AP_OSD_DropScope : public AP_OSD_Panel {
public:
    using AP_OSD_Panel::AP_OSD_Panel;

    // This runs 50 times a second to draw your box
    void draw() override;
};