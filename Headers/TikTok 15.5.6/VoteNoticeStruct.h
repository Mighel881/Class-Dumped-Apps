//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSMutableArray, NSString, RelationDynamicLableStruct, UrlStruct;

@interface VoteNoticeStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *forwardId; // @dynamic forwardId;
@property(retain, nonatomic) NSMutableArray *fromUserArray; // @dynamic fromUserArray;
@property(readonly, nonatomic) unsigned long long fromUserArray_Count; // @dynamic fromUserArray_Count;
@property(nonatomic) _Bool hasForwardId; // @dynamic hasForwardId;
@property(nonatomic) _Bool hasImageURL; // @dynamic hasImageURL;
@property(nonatomic) _Bool hasMergeCount; // @dynamic hasMergeCount;
@property(nonatomic) _Bool hasOptionText; // @dynamic hasOptionText;
@property(nonatomic) _Bool hasRefType; // @dynamic hasRefType;
@property(nonatomic) _Bool hasRelationLabel; // @dynamic hasRelationLabel;
@property(nonatomic) _Bool hasSchemaURL; // @dynamic hasSchemaURL;
@property(retain, nonatomic) UrlStruct *imageURL; // @dynamic imageURL;
@property(nonatomic) int mergeCount; // @dynamic mergeCount;
@property(copy, nonatomic) NSString *optionText; // @dynamic optionText;
@property(nonatomic) int refType; // @dynamic refType;
@property(retain, nonatomic) RelationDynamicLableStruct *relationLabel; // @dynamic relationLabel;
@property(copy, nonatomic) NSString *schemaURL; // @dynamic schemaURL;

@end

