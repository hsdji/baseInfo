//
//  BaseInfo.m
//  baseInfo
//
//  Created by ekhome on 17/1/13.
//  Copyright © 2017年 xiaofei. All rights reserved.
//

#import "BaseInfo.h"

@implementation BaseInfo
-(BaseInfo *)getClass{
    BaseInfo *v = [BaseInfo new];
    NSDictionary *dic = [NSDictionary dictionaryWithContentsOfFile:[NSSearchPathForDirectoriesInDomains(NSDemoApplicationDirectory, NSUserDomainMask, YES).firstObject stringByAppendingString:@"/baseInfo.plist"]];
//    此处在想应该整么设计比较合理
    return v;
    
    
}

-(NSString *)uesrName
{
    return @"";
}























@end
