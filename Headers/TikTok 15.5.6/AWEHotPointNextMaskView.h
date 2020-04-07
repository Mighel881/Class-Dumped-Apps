//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "AWEHotPointNextMaskViewProtocol-Protocol.h"

@class NSString, UILabel;

@interface AWEHotPointNextMaskView : UIView <AWEHotPointNextMaskViewProtocol>
{
    CDUnknownBlockType _dismissBlock;
    UILabel *_titleLabel;
    UILabel *_despLabel;
}

+ (_Bool)shouldShowNextView:(id)arg1;
@property(retain, nonatomic) UILabel *despLabel; // @synthesize despLabel=_despLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(copy, nonatomic) CDUnknownBlockType dismissBlock; // @synthesize dismissBlock=_dismissBlock;
- (void).cxx_destruct;
- (void)hideNextView;
- (void)viewTapped;
- (void)configureWithAwemeModel:(id)arg1;
- (void)configureUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
