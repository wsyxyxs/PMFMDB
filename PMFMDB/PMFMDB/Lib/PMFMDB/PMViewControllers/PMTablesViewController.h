//
//  PMTablesViewController.h
//  PMFMDB
//
//  Created by wsy on 15/12/2.
//  Copyright © 2015年 WSY. All rights reserved.
//
// All tables view controller

#import <UIKit/UIKit.h>

@interface PMTablesViewController : UITableViewController

@property (nonatomic, copy) void(^completeCB)(NSString *tableName);

@property (nonatomic, assign) BOOL isSelectedTable;

@end
