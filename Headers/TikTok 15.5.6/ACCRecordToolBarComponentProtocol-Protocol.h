//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ACCComponentProtocol-Protocol.h"

@class ACCAnimatedButton, AVAsset, AWEFlashModeSwitchButton, NSString, UILabel;

@protocol ACCRecordToolBarComponentProtocol <ACCComponentProtocol>
@property(nonatomic) _Bool isSwapCamera;
@property(nonatomic) _Bool shouldShowTorchButton;
@property(nonatomic) _Bool useBeautySwitchButton;
- (void)clickVideoDurationButton:(ACCAnimatedButton *)arg1;
- (_Bool)enableLongDurationRecordAsTab;
- (void)clickTorchSwitchBtn:(AWEFlashModeSwitchButton *)arg1;
- (UILabel *)p_createButtonLabel:(NSString *)arg1;
- (double)originYofAudioClipButtonLabel;
- (void)doAnimationWhenSwitchCameraPositionForAR;
- (void)updateSwapCameraButtonWithBlock:(void (^)(UIButton *))arg1;
- (void)updateAudioClipButtonStatusWithAsset:(AVAsset *)arg1;
- (void)clickSwapCameraBtn:(id)arg1;
- (void)updateTorchSwitchButtonStateForCameraChange;
- (void)updateTorchSwitchButtonHiddenState;
- (void)resetCameraFlashAndTorchState;
- (void)resetTorchSwitchButtonToOffState;
- (void)updateVideoDurationButtonState;
- (void)p_swapCameraComplete:(void (^)(void))arg1;
@end
