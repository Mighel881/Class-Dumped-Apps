//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Module_Framework/GPBMessage.h>

@class NSData, NSString;

@interface PinholeOutput : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(copy, nonatomic) NSData *gwsBodyFragment; // @dynamic gwsBodyFragment;
@property(nonatomic) _Bool gwsHeaderComplete; // @dynamic gwsHeaderComplete;
@property(copy, nonatomic) NSString *gwsHeaderFragment; // @dynamic gwsHeaderFragment;
@property(nonatomic) _Bool gwsResponseComplete; // @dynamic gwsResponseComplete;
@property(nonatomic) _Bool hasGwsBodyFragment; // @dynamic hasGwsBodyFragment;
@property(nonatomic) _Bool hasGwsHeaderComplete; // @dynamic hasGwsHeaderComplete;
@property(nonatomic) _Bool hasGwsHeaderFragment; // @dynamic hasGwsHeaderFragment;
@property(nonatomic) _Bool hasGwsResponseComplete; // @dynamic hasGwsResponseComplete;

@end
