//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "AWEImageCleanManagerProtocol-Protocol.h"

@class NSString;

@interface AWEImageCleanManagerABTest : NSObject <AWEImageCleanManagerProtocol>
{
}

+ (void)load;
- (void)linkImageView:(id)arg1 url:(id)arg2;
- (void)linkImageView:(id)arg1 image:(id)arg2;
- (void)addAssetImage:(id)arg1 imageName:(id)arg2 bundleName:(id)arg3 traitCollection:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
