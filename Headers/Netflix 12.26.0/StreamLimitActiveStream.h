//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface StreamLimitActiveStream : NSObject
{
    _Bool _isCurrentProfile;
    NSString *_deviceName;
    NSString *_playingTitle;
    NSString *_profileName;
    NSString *_esn;
}

@property(copy, nonatomic) NSString *esn; // @synthesize esn=_esn;
@property(nonatomic) _Bool isCurrentProfile; // @synthesize isCurrentProfile=_isCurrentProfile;
@property(copy, nonatomic) NSString *profileName; // @synthesize profileName=_profileName;
@property(copy, nonatomic) NSString *playingTitle; // @synthesize playingTitle=_playingTitle;
@property(copy, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end

