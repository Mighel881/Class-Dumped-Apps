//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NoticeCountExtraStruct;

@interface NoticeCountStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) int count; // @dynamic count;
@property(retain, nonatomic) NoticeCountExtraStruct *extra; // @dynamic extra;
@property(nonatomic) int group; // @dynamic group;
@property(nonatomic) _Bool hasCount; // @dynamic hasCount;
@property(nonatomic) _Bool hasExtra; // @dynamic hasExtra;
@property(nonatomic) _Bool hasGroup; // @dynamic hasGroup;

@end
