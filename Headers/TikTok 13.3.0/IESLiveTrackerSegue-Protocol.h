//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IESLiveTrackSegueDouPlus-Protocol.h"
#import "IESLiveTrackerSegueBase-Protocol.h"
#import "NSObject-Protocol.h"

@class NSDictionary, NSString;

@protocol IESLiveTrackerSegue <NSObject, IESLiveTrackerSegueBase, IESLiveTrackSegueDouPlus>
@property(retain, nonatomic) NSString *outerRequestID;
@property(retain, nonatomic) NSDictionary *contextParams;
@property(nonatomic) long long starlightRank;
@property(copy, nonatomic) NSString *actionType;
@end
