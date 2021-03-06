//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class AWESwitchRecordModeView, NSArray;

@protocol ACCRecordSwitchModeComponentProtocol <ACCComponentProtocol>
@property(nonatomic) long long mode;
@property(retain, nonatomic) AWESwitchRecordModeView *recordButtonSwitchView;
- (long long)indexOfCameraModeForShowing:(long long)arg1;
- (_Bool)enableShowCameraMode:(long long)arg1;
- (NSArray *)recordSwitcModeArray;
- (void)switchModeFromOldMode:(long long)arg1 toRecordMode:(long long)arg2;
- (long long)initialRecordMode;
- (void)reloadData;
- (void)resetRecordSwitchModeArray;
@end

