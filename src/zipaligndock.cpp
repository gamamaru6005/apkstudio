#include "zipalign.h"
#include "zipaligndock.h"
#include "qrc.h"

APP_NAMESPACE_START

ZipAlignDock::ZipAlignDock(QWidget *parent)
    : ConsoleDock(Qrc::text("dock.zipalign.title"), "zipalign", parent)
{
    setContentsMargins(2, 2, 2, 2);
    setObjectName("ZipAlignDock");
    _connections << connect(ZipAlign::get(), &Process::executed, this, &ConsoleDock::onExecuted);
    _connections << connect(ZipAlign::get(), &Process::executing, this, &ConsoleDock::onExecuting);
}

APP_NAMESPACE_END