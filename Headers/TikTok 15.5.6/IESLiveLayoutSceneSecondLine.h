//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "IESLiveLayoutScene-Protocol.h"

@class NSString;
@protocol IESLiveLayoutViewProvider;

@interface IESLiveLayoutSceneSecondLine : NSObject <IESLiveLayoutScene>
{
    id <IESLiveLayoutViewProvider> provider;
}

@property(nonatomic) __weak id <IESLiveLayoutViewProvider> provider; // @synthesize provider;
- (void).cxx_destruct;
- (double)topMargin;
- (void)layoutFeedDrawer;
- (void)layoutSecondLineLeft;
- (void)layoutPluginIfNeed;
- (unsigned long long)currentScene;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
