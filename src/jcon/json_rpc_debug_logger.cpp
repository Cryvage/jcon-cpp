#include "json_rpc_debug_logger.h"

#include <QDebug>

namespace jcon {
    
void JsonRpcDebugLogger::logDebug(const QString& message)
{
    qDebug().noquote() << message;
}

void JsonRpcDebugLogger::logInfo(const QString& message)
{
    qInfo().noquote() << message;
}

void JsonRpcDebugLogger::logWarning(const QString& message)
{
    qWarning().noquote() << message;
}

void JsonRpcDebugLogger::logError(const QString& message)
{
    qCritical().noquote() << message;
}

}
