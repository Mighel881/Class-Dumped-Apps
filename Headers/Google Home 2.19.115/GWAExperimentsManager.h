//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface GWAExperimentsManager : NSObject
{
    NSMutableDictionary *_experimentsDictionary;
}

+ (id)shared;
@property(retain, nonatomic) NSMutableDictionary *experimentsDictionary; // @synthesize experimentsDictionary=_experimentsDictionary;
- (void).cxx_destruct;
- (void)setReleaseEnabled:(_Bool)arg1 debugEnabled:(_Bool)arg2 for:(long long)arg3;
- (void)setEnabled:(_Bool)arg1 for:(long long)arg2;
- (_Bool)isEnabled:(long long)arg1;
- (id)init;
- (void)setDefaultValues;

@end

