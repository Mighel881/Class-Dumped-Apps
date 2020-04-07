//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol BDLTemplateProtocol <NSObject>
+ (id)sharedInstance;
- (void)registerDataUpdate:(void (^)(NSString *, _Bool))arg1 forGroupID:(NSString *)arg2;
- (NSString *)fileForGroupID:(NSString *)arg1;
- (NSString *)rootDirForGroupID:(NSString *)arg1;

@optional
- (NSString *)defaultGroupID;
@end
