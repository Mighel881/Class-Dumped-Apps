//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTRtcNetworkQuality : NSObject
{
    NSString *_uid;
    unsigned long long _txQuality;
    unsigned long long _rxQuality;
}

@property(nonatomic) unsigned long long rxQuality; // @synthesize rxQuality=_rxQuality;
@property(nonatomic) unsigned long long txQuality; // @synthesize txQuality=_txQuality;
@property(retain, nonatomic) NSString *uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end
