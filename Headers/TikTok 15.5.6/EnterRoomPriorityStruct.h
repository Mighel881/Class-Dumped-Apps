//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface EnterRoomPriorityStruct : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSString *backgroundColor; // @dynamic backgroundColor;
@property(nonatomic) _Bool hasBackgroundColor; // @dynamic hasBackgroundColor;
@property(nonatomic) _Bool hasPriorityType; // @dynamic hasPriorityType;
@property(nonatomic) _Bool hasTextColor; // @dynamic hasTextColor;
@property(nonatomic) _Bool hasTextContent; // @dynamic hasTextContent;
@property(nonatomic) _Bool hasUserId; // @dynamic hasUserId;
@property(nonatomic) int priorityType; // @dynamic priorityType;
@property(copy, nonatomic) NSString *textColor; // @dynamic textColor;
@property(copy, nonatomic) NSString *textContent; // @dynamic textContent;
@property(nonatomic) long long userId; // @dynamic userId;

@end
