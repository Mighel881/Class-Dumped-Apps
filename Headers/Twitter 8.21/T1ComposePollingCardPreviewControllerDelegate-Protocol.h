//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <T1Twitter/NSObject-Protocol.h>

@class T1ComposePollingCardPreviewController, T1ComposePollingCardPreviewView, T1DurationPickerView, TFNTwitterCompositionPollingCard;

@protocol T1ComposePollingCardPreviewControllerDelegate <NSObject>

@optional
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didChangeCompositionPollingCard:(TFNTwitterCompositionPollingCard *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didHideDurationPicker:(T1DurationPickerView *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didShowDurationPicker:(T1DurationPickerView *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 willHideDurationPicker:(T1DurationPickerView *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 willShowDurationPicker:(T1DurationPickerView *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didAddChoiceToPollComposeView:(T1ComposePollingCardPreviewView *)arg2;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didRemovePollComposeView:(T1ComposePollingCardPreviewView *)arg2;
- (void)pollingCardPreviewControllerDidEndEditing:(T1ComposePollingCardPreviewController *)arg1;
- (void)pollingCardPreviewControllerDidBeginEditing:(T1ComposePollingCardPreviewController *)arg1;
- (void)pollingCardPreviewController:(T1ComposePollingCardPreviewController *)arg1 didShowPollComposeView:(T1ComposePollingCardPreviewView *)arg2;
@end

