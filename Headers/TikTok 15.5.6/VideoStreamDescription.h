//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface VideoStreamDescription : NSObject
{
    long long _frameRate;
    long long _maxKbps;
    long long _mode;
    struct CGSize _videoSize;
}

@property(nonatomic) long long mode; // @synthesize mode=_mode;
@property(nonatomic) long long maxKbps; // @synthesize maxKbps=_maxKbps;
@property(nonatomic) long long frameRate; // @synthesize frameRate=_frameRate;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
- (_Bool)isValid;
- (id)description;

@end
