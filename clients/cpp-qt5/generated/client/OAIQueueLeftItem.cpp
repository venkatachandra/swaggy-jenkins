/**
 * Swaggy Jenkins
 * Jenkins API clients generated from Swagger / Open API specification
 *
 * OpenAPI spec version: 1.1.0
 * Contact: blah@cliffano.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */


#include "OAIQueueLeftItem.h"

#include "OAIHelpers.h"

#include <QJsonDocument>
#include <QJsonArray>
#include <QObject>
#include <QDebug>

namespace OpenAPI {

OAIQueueLeftItem::OAIQueueLeftItem(QString json) {
    init();
    this->fromJson(json);
}

OAIQueueLeftItem::OAIQueueLeftItem() {
    init();
}

OAIQueueLeftItem::~OAIQueueLeftItem() {
    this->cleanup();
}

void
OAIQueueLeftItem::init() {
    _class = new QString("");
    m__class_isSet = false;
    actions = new QList<OAICauseAction*>();
    m_actions_isSet = false;
    blocked = false;
    m_blocked_isSet = false;
    buildable = false;
    m_buildable_isSet = false;
    id = 0;
    m_id_isSet = false;
    in_queue_since = 0;
    m_in_queue_since_isSet = false;
    params = new QString("");
    m_params_isSet = false;
    stuck = false;
    m_stuck_isSet = false;
    task = new OAIFreeStyleProject();
    m_task_isSet = false;
    url = new QString("");
    m_url_isSet = false;
    why = new QString("");
    m_why_isSet = false;
    cancelled = false;
    m_cancelled_isSet = false;
    executable = new OAIFreeStyleBuild();
    m_executable_isSet = false;
}

void
OAIQueueLeftItem::cleanup() {
    if(_class != nullptr) { 
        delete _class;
    }
    if(actions != nullptr) { 
        auto arr = actions;
        for(auto o: *arr) { 
            delete o;
        }
        delete actions;
    }




    if(params != nullptr) { 
        delete params;
    }

    if(task != nullptr) { 
        delete task;
    }
    if(url != nullptr) { 
        delete url;
    }
    if(why != nullptr) { 
        delete why;
    }

    if(executable != nullptr) { 
        delete executable;
    }
}

OAIQueueLeftItem*
OAIQueueLeftItem::fromJson(QString json) {
    QByteArray array (json.toStdString().c_str());
    QJsonDocument doc = QJsonDocument::fromJson(array);
    QJsonObject jsonObject = doc.object();
    this->fromJsonObject(jsonObject);
    return this;
}

void
OAIQueueLeftItem::fromJsonObject(QJsonObject pJson) {
    ::OpenAPI::setValue(&_class, pJson["_class"], "QString", "QString");
    
    
    ::OpenAPI::setValue(&actions, pJson["actions"], "QList", "OAICauseAction");
    ::OpenAPI::setValue(&blocked, pJson["blocked"], "bool", "");
    
    ::OpenAPI::setValue(&buildable, pJson["buildable"], "bool", "");
    
    ::OpenAPI::setValue(&id, pJson["id"], "qint32", "");
    
    ::OpenAPI::setValue(&in_queue_since, pJson["inQueueSince"], "qint32", "");
    
    ::OpenAPI::setValue(&params, pJson["params"], "QString", "QString");
    
    ::OpenAPI::setValue(&stuck, pJson["stuck"], "bool", "");
    
    ::OpenAPI::setValue(&task, pJson["task"], "OAIFreeStyleProject", "OAIFreeStyleProject");
    
    ::OpenAPI::setValue(&url, pJson["url"], "QString", "QString");
    
    ::OpenAPI::setValue(&why, pJson["why"], "QString", "QString");
    
    ::OpenAPI::setValue(&cancelled, pJson["cancelled"], "bool", "");
    
    ::OpenAPI::setValue(&executable, pJson["executable"], "OAIFreeStyleBuild", "OAIFreeStyleBuild");
    
}

QString
OAIQueueLeftItem::asJson ()
{
    QJsonObject obj = this->asJsonObject();
    QJsonDocument doc(obj);
    QByteArray bytes = doc.toJson();
    return QString(bytes);
}

QJsonObject
OAIQueueLeftItem::asJsonObject() {
    QJsonObject obj;
    if(_class != nullptr && *_class != QString("")){
        toJsonValue(QString("_class"), _class, obj, QString("QString"));
    }
    if(actions->size() > 0){
        toJsonArray((QList<void*>*)actions, obj, "actions", "OAICauseAction");
    }
    if(m_blocked_isSet){
        obj.insert("blocked", QJsonValue(blocked));
    }
    if(m_buildable_isSet){
        obj.insert("buildable", QJsonValue(buildable));
    }
    if(m_id_isSet){
        obj.insert("id", QJsonValue(id));
    }
    if(m_in_queue_since_isSet){
        obj.insert("inQueueSince", QJsonValue(in_queue_since));
    }
    if(params != nullptr && *params != QString("")){
        toJsonValue(QString("params"), params, obj, QString("QString"));
    }
    if(m_stuck_isSet){
        obj.insert("stuck", QJsonValue(stuck));
    }
    if((task != nullptr) && (task->isSet())){
        toJsonValue(QString("task"), task, obj, QString("OAIFreeStyleProject"));
    }
    if(url != nullptr && *url != QString("")){
        toJsonValue(QString("url"), url, obj, QString("QString"));
    }
    if(why != nullptr && *why != QString("")){
        toJsonValue(QString("why"), why, obj, QString("QString"));
    }
    if(m_cancelled_isSet){
        obj.insert("cancelled", QJsonValue(cancelled));
    }
    if((executable != nullptr) && (executable->isSet())){
        toJsonValue(QString("executable"), executable, obj, QString("OAIFreeStyleBuild"));
    }

    return obj;
}

QString*
OAIQueueLeftItem::getClass() {
    return _class;
}
void
OAIQueueLeftItem::setClass(QString* _class) {
    this->_class = _class;
    this->m__class_isSet = true;
}

QList<OAICauseAction*>*
OAIQueueLeftItem::getActions() {
    return actions;
}
void
OAIQueueLeftItem::setActions(QList<OAICauseAction*>* actions) {
    this->actions = actions;
    this->m_actions_isSet = true;
}

bool
OAIQueueLeftItem::isBlocked() {
    return blocked;
}
void
OAIQueueLeftItem::setBlocked(bool blocked) {
    this->blocked = blocked;
    this->m_blocked_isSet = true;
}

bool
OAIQueueLeftItem::isBuildable() {
    return buildable;
}
void
OAIQueueLeftItem::setBuildable(bool buildable) {
    this->buildable = buildable;
    this->m_buildable_isSet = true;
}

qint32
OAIQueueLeftItem::getId() {
    return id;
}
void
OAIQueueLeftItem::setId(qint32 id) {
    this->id = id;
    this->m_id_isSet = true;
}

qint32
OAIQueueLeftItem::getInQueueSince() {
    return in_queue_since;
}
void
OAIQueueLeftItem::setInQueueSince(qint32 in_queue_since) {
    this->in_queue_since = in_queue_since;
    this->m_in_queue_since_isSet = true;
}

QString*
OAIQueueLeftItem::getParams() {
    return params;
}
void
OAIQueueLeftItem::setParams(QString* params) {
    this->params = params;
    this->m_params_isSet = true;
}

bool
OAIQueueLeftItem::isStuck() {
    return stuck;
}
void
OAIQueueLeftItem::setStuck(bool stuck) {
    this->stuck = stuck;
    this->m_stuck_isSet = true;
}

OAIFreeStyleProject*
OAIQueueLeftItem::getTask() {
    return task;
}
void
OAIQueueLeftItem::setTask(OAIFreeStyleProject* task) {
    this->task = task;
    this->m_task_isSet = true;
}

QString*
OAIQueueLeftItem::getUrl() {
    return url;
}
void
OAIQueueLeftItem::setUrl(QString* url) {
    this->url = url;
    this->m_url_isSet = true;
}

QString*
OAIQueueLeftItem::getWhy() {
    return why;
}
void
OAIQueueLeftItem::setWhy(QString* why) {
    this->why = why;
    this->m_why_isSet = true;
}

bool
OAIQueueLeftItem::isCancelled() {
    return cancelled;
}
void
OAIQueueLeftItem::setCancelled(bool cancelled) {
    this->cancelled = cancelled;
    this->m_cancelled_isSet = true;
}

OAIFreeStyleBuild*
OAIQueueLeftItem::getExecutable() {
    return executable;
}
void
OAIQueueLeftItem::setExecutable(OAIFreeStyleBuild* executable) {
    this->executable = executable;
    this->m_executable_isSet = true;
}


bool
OAIQueueLeftItem::isSet(){
    bool isObjectUpdated = false;
    do{
        if(_class != nullptr && *_class != QString("")){ isObjectUpdated = true; break;}
        if(actions->size() > 0){ isObjectUpdated = true; break;}
        if(m_blocked_isSet){ isObjectUpdated = true; break;}
        if(m_buildable_isSet){ isObjectUpdated = true; break;}
        if(m_id_isSet){ isObjectUpdated = true; break;}
        if(m_in_queue_since_isSet){ isObjectUpdated = true; break;}
        if(params != nullptr && *params != QString("")){ isObjectUpdated = true; break;}
        if(m_stuck_isSet){ isObjectUpdated = true; break;}
        if(task != nullptr && task->isSet()){ isObjectUpdated = true; break;}
        if(url != nullptr && *url != QString("")){ isObjectUpdated = true; break;}
        if(why != nullptr && *why != QString("")){ isObjectUpdated = true; break;}
        if(m_cancelled_isSet){ isObjectUpdated = true; break;}
        if(executable != nullptr && executable->isSet()){ isObjectUpdated = true; break;}
    }while(false);
    return isObjectUpdated;
}
}

