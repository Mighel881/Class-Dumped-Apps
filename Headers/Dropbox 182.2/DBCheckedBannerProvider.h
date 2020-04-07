//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "DBBannerProvider-Protocol.h"

@class DBWeakObserverMap, NSHashTable, NSString;
@protocol DBBanner;

@interface DBCheckedBannerProvider : NSObject <DBBannerProvider>
{
    id <DBBanner> _banner;
    DBWeakObserverMap *_bannerManagerMap;
    NSHashTable *_uncheckedBannerManagers;
}

- (void).cxx_destruct;
- (void)dismissBanner:(id)arg1;
- (void)emitBanner:(id)arg1;
- (void)checkForNewBanners;
- (id)registerBannerManager:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
