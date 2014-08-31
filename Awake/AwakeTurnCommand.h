//
//  AwakeTurnCommand.h
//  Awake
//
//  Created by xiaozi on 14-4-6.
//  Copyright (c) 2014年 xiaozi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "AwakeManager.h"

@interface AwakeTurnCommand : NSScriptCommand {
	AwakeManager *awakeManager;
}

@property (assign, nonatomic, readwrite) int duration;
- (void)performDefaultImplementation;

@end
