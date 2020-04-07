//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIPickerViewDataSource-Protocol.h"
#import "UIPickerViewDelegate-Protocol.h"
#import "YTPageStyling-Protocol.h"

@class NSString, UIPickerView;

@interface YTSettingsCountDownPickerView : UIView <UIPickerViewDataSource, UIPickerViewDelegate, YTPageStyling>
{
    long long _pageStyle;
    UIPickerView *_pickerView;
}

@property(retain, nonatomic) UIPickerView *pickerView; // @synthesize pickerView=_pickerView;
- (void).cxx_destruct;
- (void)pageStyleDidChange:(long long)arg1;
- (void)didMoveToWindow;
- (void)pickerView:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3;
- (id)pickerView:(id)arg1 attributedTitleForRow:(long long)arg2 forComponent:(long long)arg3;
- (long long)pickerView:(id)arg1 numberOfRowsInComponent:(long long)arg2;
- (long long)numberOfComponentsInPickerView:(id)arg1;
@property(nonatomic) double countDownDuration;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
