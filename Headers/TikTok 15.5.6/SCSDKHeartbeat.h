//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCSDKHeartbeat : NSObject
{
    NSString *_kitVersion;
    int _kitType;
}

@property(readonly, nonatomic) int kitType; // @synthesize kitType=_kitType;
- (void).cxx_destruct;
- (struct picoproto_ctx_s *)_picoprotoTimestampWithTimestamp:(double)arg1;
- (id)encodeablePicoproto;
- (id)initWithKitType:(int)arg1 kitVersion:(id)arg2;

@end
