//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class GPBFieldMask, NSMutableArray, NSString;

@interface GWCUpdateContentFilteringPoliciesRequest : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) NSMutableArray *contentFilteringPoliciesArray; // @dynamic contentFilteringPoliciesArray;
@property(readonly, nonatomic) unsigned long long contentFilteringPoliciesArray_Count; // @dynamic contentFilteringPoliciesArray_Count;
@property(copy, nonatomic) NSString *groupId; // @dynamic groupId;
@property(nonatomic) _Bool hasUpdateMask; // @dynamic hasUpdateMask;
@property(retain, nonatomic) GPBFieldMask *updateMask; // @dynamic updateMask;

@end

