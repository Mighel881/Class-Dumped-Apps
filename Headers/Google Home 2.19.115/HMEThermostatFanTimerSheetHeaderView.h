//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UILabel;

@interface HMEThermostatFanTimerSheetHeaderView : UIView
{
    long long _fanState;
    UILabel *_fanLabel;
    UILabel *_statusLabel;
}

@property(retain, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property(retain, nonatomic) UILabel *fanLabel; // @synthesize fanLabel=_fanLabel;
@property(nonatomic) long long fanState; // @synthesize fanState=_fanState;
- (void).cxx_destruct;
- (id)stringForFanState:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

