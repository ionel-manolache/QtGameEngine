#ifndef PANEL_H
#define PANEL_H

#include "Gui.h"
#include <QColor>

/// Represents a panel GUI element that can be placed in a Game.
/// You can modify various options such as the size, color, opacity, etc...
class Panel : public Gui
{
public:
    Panel();

    void setColor(const QColor& color);
    void setOpacity(double opacity);

    void setWidth(double width);
    void setHeight(double height);
private:
    double width_;
    double height_;
};

#endif // PANEL_H