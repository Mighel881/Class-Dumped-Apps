//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TelegramUI/TGMenuSheetItemView.h>

@class NSString, UILabel;

@interface TGMenuSheetTitleItemView : TGMenuSheetItemView
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    _Bool _solidSubtitle;
    NSString *_title;
    NSString *_subtitle;
}

@property(retain, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (_Bool)requiresDivider;
- (double)preferredHeightForWidth:(double)arg1 screenHeight:(double)arg2;
- (void)setPallete:(id)arg1;
- (void)setDark;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 solidSubtitle:(_Bool)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;

@end
