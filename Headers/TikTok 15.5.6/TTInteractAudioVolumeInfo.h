//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TTInteractAudioVolumeInfo : NSObject
{
    unsigned long long _uid;
    unsigned long long _volume;
    NSString *_strUID;
}

@property(retain, nonatomic) NSString *strUID; // @synthesize strUID=_strUID;
@property(nonatomic) unsigned long long volume; // @synthesize volume=_volume;
@property(nonatomic) unsigned long long uid; // @synthesize uid=_uid;
- (void).cxx_destruct;

@end
