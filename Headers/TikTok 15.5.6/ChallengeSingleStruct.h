//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class AwemeStruct, NSMutableArray;

@interface ChallengeSingleStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *articleListArray; // @dynamic articleListArray;
@property(readonly, nonatomic) unsigned long long articleListArray_Count; // @dynamic articleListArray_Count;
@property(retain, nonatomic) AwemeStruct *aweme; // @dynamic aweme;
@property(retain, nonatomic) NSMutableArray *commentListArray; // @dynamic commentListArray;
@property(readonly, nonatomic) unsigned long long commentListArray_Count; // @dynamic commentListArray_Count;
@property(nonatomic) _Bool hasAweme; // @dynamic hasAweme;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) int type; // @dynamic type;

@end
