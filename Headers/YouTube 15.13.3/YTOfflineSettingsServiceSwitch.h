//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Module_Framework/YTSettingsServiceProtocol-Protocol.h>

@class GIMMe, NSString, YTOfflineSettingsService, YTSettingsService;
@protocol YTOfflineModeProvider;

@interface YTOfflineSettingsServiceSwitch : NSObject <YTSettingsServiceProtocol>
{
    id <YTOfflineModeProvider> _offlineModeProvider;
    YTSettingsService *_innerTubeSettingsService;
    YTOfflineSettingsService *_offlineSettingsService;
    GIMMe *_gimme;
}

@property(nonatomic) __weak GIMMe *gimme; // @synthesize gimme=_gimme;
- (void).cxx_destruct;
- (id)settingsService;
- (void)performEntitlementRefresh;
- (void)clearCaches;
- (void)makeRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (Class)responseClass;
- (void)makeSettingsRequest:(id)arg1 refresh:(_Bool)arg2 responseBlock:(CDUnknownBlockType)arg3 errorBlock:(CDUnknownBlockType)arg4;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
