//=====================================================================
// Project:      unREAL 
// File Name:    treeitem.h
// Description:  Tree item, provides hierarchical structures for 
//               relational tables 
//
// Created:      16-January-07
// Revision:      
//
// Author:       Timofey A. Bryksin (sly@tercom.ru)
//===================================================================== 

#ifndef TREEITEM_H
#define TREEITEM_H

#include <QList>
#include <QVariant>
#include <QSqlQuery>

class TreeItem{

public:
    TreeItem( QString _name, QString _type, QString _diagram, QMap<QString, QSqlQuery>*, TreeItem *parent = 0 );
    ~TreeItem();

    int rowCount() const;
    int columnCount() const { return 1; }
    
    QVariant data() const { return name; }
    QString getType() const { return type; }
    QString getName() const { return name; }
    QString getDiagramName() const { return diagramName; }
    TreeItem* getChild( QString );
    TreeItem* getChild( int );
    
    void setType( QString t ) { type = t; }
    void setData( QString ); 
    
    void addChild( TreeItem* );  
    
    TreeItem *parent() { return parentItem; }
    
    int row();
    
    bool isTable();
    
private:
    QString name;
    QString type;
    QString diagramName;
    QList<TreeItem*> childItems;
    TreeItem *parentItem;
    QMap<QString, QSqlQuery> *tables;
};

#endif

