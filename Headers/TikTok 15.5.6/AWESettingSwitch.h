//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UISwitch.h>

@class UIView;

@interface AWESettingSwitch : UISwitch
{
    _Bool _shouldChooseBeforeChange;
    CDUnknownBlockType _chooseBeforeStatusChangeBlock;
    CDUnknownBlockType _switchStatusChangedBlock;
    UIView *_coverView;
}

@property(retain, nonatomic) UIView *coverView; // @synthesize coverView=_coverView;
@property(nonatomic) _Bool shouldChooseBeforeChange; // @synthesize shouldChooseBeforeChange=_shouldChooseBeforeChange;
@property(copy, nonatomic) CDUnknownBlockType switchStatusChangedBlock; // @synthesize switchStatusChangedBlock=_switchStatusChangedBlock;
@property(copy, nonatomic) CDUnknownBlockType chooseBeforeStatusChangeBlock; // @synthesize chooseBeforeStatusChangeBlock=_chooseBeforeStatusChangeBlock;
- (void).cxx_destruct;
- (void)setEnabled:(_Bool)arg1 disableOpacity:(double)arg2;
- (void)setOn:(_Bool)arg1 animated:(_Bool)arg2;
- (void)updateStatus;
- (void)switchStatusChanged:(id)arg1;
- (void)respondHandler;
- (void)respondToSwipeGesture:(id)arg1;
- (void)respondToTapGesture:(id)arg1;
- (id)init;

@end

