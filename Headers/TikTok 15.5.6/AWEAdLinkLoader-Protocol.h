//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "HTSService-Protocol.h"

@class AWEAwemeModel, NSArray, NSDictionary;

@protocol AWEAdLinkLoader <HTSService>
+ (void)requestWithItemIDs:(NSArray *)arg1 adFrom:(long long)arg2 extraInfo:(NSDictionary *)arg3;
+ (void)requestWithItemIDs:(NSArray *)arg1 adFrom:(long long)arg2;
+ (void)mergeTrackModelIfNeeded:(AWEAwemeModel *)arg1;
+ (void)addTrackModelIfNeeded:(AWEAwemeModel *)arg1;
@end
