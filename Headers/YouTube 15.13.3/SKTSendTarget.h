//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSString, SKTRecipientMetadata;

@interface SKTSendTarget : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMetadata; // @dynamic hasMetadata;
@property(nonatomic) _Bool hasType; // @dynamic hasType;
@property(nonatomic) _Bool hasValue; // @dynamic hasValue;
@property(retain, nonatomic) SKTRecipientMetadata *metadata; // @dynamic metadata;
@property(nonatomic) int type; // @dynamic type;
@property(copy, nonatomic) NSString *value; // @dynamic value;

@end
