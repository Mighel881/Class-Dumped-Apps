//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString;

@interface MusicList : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIsSelected; // @dynamic hasIsSelected;
@property(nonatomic) _Bool hasMoreURL; // @dynamic hasMoreURL;
@property(nonatomic) _Bool hasName; // @dynamic hasName;
@property(nonatomic) _Bool isSelected; // @dynamic isSelected;
@property(copy, nonatomic) NSString *moreURL; // @dynamic moreURL;
@property(retain, nonatomic) NSMutableArray *musicArray; // @dynamic musicArray;
@property(readonly, nonatomic) unsigned long long musicArray_Count; // @dynamic musicArray_Count;
@property(copy, nonatomic) NSString *name; // @dynamic name;

@end
