//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GPBMessage.h"

@class JCVViewArgs, NSString;

@interface JCVRotatingArrowArgs : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasIconSrc; // @dynamic hasIconSrc;
@property(nonatomic) _Bool hasShowLessMessage; // @dynamic hasShowLessMessage;
@property(nonatomic) _Bool hasShowMoreMessage; // @dynamic hasShowMoreMessage;
@property(nonatomic) _Bool hasViewArgs; // @dynamic hasViewArgs;
@property(copy, nonatomic) NSString *iconSrc; // @dynamic iconSrc;
@property(copy, nonatomic) NSString *showLessMessage; // @dynamic showLessMessage;
@property(copy, nonatomic) NSString *showMoreMessage; // @dynamic showMoreMessage;
@property(retain, nonatomic) JCVViewArgs *viewArgs; // @dynamic viewArgs;

@end

