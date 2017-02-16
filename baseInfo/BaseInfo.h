//
//  BaseInfo.h
//  baseInfo
//
//  Created by ekhome on 17/1/13.
//  Copyright © 2017年 xiaofei. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BaseInfo : NSObject

@property (nonatomic,strong)NSString *uesrName;

@property (nonatomic,strong)NSString *userSex;

@property (nonatomic,strong)NSData *userImagedate;

@property (nonatomic,strong)NSString *SessionID;

@property (nonatomic,strong)NSString *userAge;

-(void)setUesrName:(NSString *)uesrName;

-(void)setUserSex:(NSString *)userSex;

-(void)setUserImagedate:(NSData *)userImagedate;

-(void)setSessionID:(NSString *)SessionID;

-(void)setUserAge:(NSString *)userAge;
@end
