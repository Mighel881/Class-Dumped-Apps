//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AWELiveEntranceViewControllerProtocol-Protocol.h"

@class NSString;
@protocol AWELiveCamera, IESLiveOpenLiveProtocol;

@interface AWELiveEntranceViewControllerContainer : UIViewController <AWELiveEntranceViewControllerProtocol>
{
    id <AWELiveCamera> camera;
    CDUnknownBlockType dismissHandler;
    UIViewController<IESLiveOpenLiveProtocol> *_childVC;
}

@property(retain, nonatomic) UIViewController<IESLiveOpenLiveProtocol> *childVC; // @synthesize childVC=_childVC;
@property(copy, nonatomic) CDUnknownBlockType dismissHandler; // @synthesize dismissHandler;
@property(retain, nonatomic) id <AWELiveCamera> camera; // @synthesize camera;
- (void).cxx_destruct;
- (void)setTopicID:(id)arg1 topicName:(id)arg2 isCommerce:(_Bool)arg3;
- (void)setShootWay:(id)arg1;
- (void)setEntryFaceSticker:(id)arg1;
- (void)willSwitchToLiveTab;
- (void)willSwitchToOtherTab;
- (void)applySmoothValue:(float)arg1;
- (void)applyWhiteValue:(float)arg1;
- (void)applyCheekValue:(float)arg1;
- (void)applyEyeValue:(float)arg1;
- (void)applyFilter:(id)arg1;
- (void)setActive:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
