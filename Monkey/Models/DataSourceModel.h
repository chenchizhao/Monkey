//
//  DataSourceModel.h
//  Monkey
//
//  Created by coderyi on 15/3/24.
//  Copyright (c) 2015年 www.coderyi.com. All rights reserved.
//

#import <Foundation/Foundation.h>



@interface DataSourceModel : NSObject

@property(nonatomic,strong)NSMutableArray *dsArray;
@property(nonatomic)NSInteger page;
@property(nonatomic)NSInteger totalCount;

-(void)reset;






@end
