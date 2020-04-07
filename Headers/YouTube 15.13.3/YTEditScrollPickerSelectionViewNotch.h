//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Module_Framework/YTEditScrollPickerSelectionView-Protocol.h>

@class NSString, YTEditScrollPickerNotchView;
@protocol YTEditComponentStyle;

@interface YTEditScrollPickerSelectionViewNotch : UIView <YTEditScrollPickerSelectionView>
{
    YTEditScrollPickerNotchView *_notchView;
    _Bool _enabled;
    id <YTEditComponentStyle> _style;
    double _notchWidth;
    double _notchHeight;
    struct CGRect _selectionFrame;
}

@property(nonatomic) double notchHeight; // @synthesize notchHeight=_notchHeight;
@property(nonatomic) double notchWidth; // @synthesize notchWidth=_notchWidth;
@property(retain, nonatomic) id <YTEditComponentStyle> style; // @synthesize style=_style;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) struct CGRect selectionFrame; // @synthesize selectionFrame=_selectionFrame;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
