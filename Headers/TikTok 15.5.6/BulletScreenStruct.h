//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class BulletScreenDiggStruct, CommentStruct;

@interface BulletScreenStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(retain, nonatomic) CommentStruct *comment; // @dynamic comment;
@property(nonatomic) int dataType; // @dynamic dataType;
@property(retain, nonatomic) BulletScreenDiggStruct *digg; // @dynamic digg;
@property(nonatomic) _Bool hasComment; // @dynamic hasComment;
@property(nonatomic) _Bool hasDataType; // @dynamic hasDataType;
@property(nonatomic) _Bool hasDigg; // @dynamic hasDigg;

@end
