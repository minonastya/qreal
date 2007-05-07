#ifndef ENTITY_H
#define ENTITY_H

#include <QStringList>
#include <QList>
#include <QPair>
#include <QDebug>

enum elementsType { NODE, EDGE };

enum sideType { BEGIN, END };

// parent for nodes and edges class
class Entity
{
public:
    Entity(){ propsPropagated = false; }

    void addParent( QString );
    void addChild( QString);
    void addProperty( QString, QString );

    int height; 
    int width;

    QString id;
    QString name;
    QStringList parents;
    QStringList children;

    QList< QPair<QString, QString> > properties;

    elementsType type;

    bool propsPropagated;
};

// node class
class Node : public Entity
{
public:
    //TODO: containers 
    //QStringList associations; 
    
};

class Association {
public:
    QString fromID;
    QString toID;
    QString from;
    QString to;
    //TODO: full schema support
    //QString role;  
};

// edge class
class Edge : public Entity
{
public:
    Edge(){
        assocsPropagated = false;
        endsPropagated   = false;
    }
    ~Edge(){
        for( int i=0; i<associations.size(); i++)   
            delete associations.at(i);
    }

    void addAssociation( Association* );

    QList< Association*  > associations;

    bool assocsPropagated; // edges' own generalizations
    bool endsPropagated; // connected nodes' generalizations
};



#endif
