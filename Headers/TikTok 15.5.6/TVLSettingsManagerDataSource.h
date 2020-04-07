//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "TVLSettingsManagerDataSource-Protocol.h"

@class NSDictionary, NSString;

@interface TVLSettingsManagerDataSource : NSObject <TVLSettingsManagerDataSource>
{
    _Bool _allowsSettingsAutoUpdate;
    NSDictionary *_currentSettings;
}

+ (id)defaultDataSource;
@property(copy) NSDictionary *currentSettings; // @synthesize currentSettings=_currentSettings;
@property(nonatomic) _Bool allowsSettingsAutoUpdate; // @synthesize allowsSettingsAutoUpdate=_allowsSettingsAutoUpdate;
- (void).cxx_destruct;
- (void)updateSettings:(_Bool)arg1;
- (void)updateCurrentSettings;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
